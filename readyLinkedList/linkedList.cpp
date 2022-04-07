#include "linkedList.h"

linkedList::linkedList()
{
	_start = NULL;
	_end = NULL;
	_lenght = 0;
}

void linkedList::add(string Val)
{
	linkedListNode* node = new linkedListNode(Val);

	if (empty())
	{
		this->_start = node;
		this->_end = node;
	}
	else
	{
		this->_end->setNext(node);
		this->_end = node;
	}

	this->_lenght++;
}

bool linkedList::del(string Val)
{
	if (empty()) return false;

	linkedListNode* current = this->_start;
	linkedListNode* previous = NULL;

	while (true)
	{
		if (current->getVal() == Val)
		{
			if (previous == NULL)
			{
				this->_start = current->getNext();
				delete current;
				this->_lenght--;
				return true;
			}
			else
			{
				if (current->getNext() == NULL) this->_end = previous;
				previous->setNext(current->getNext());
				delete current;
				this->_lenght--;
				return true;
			}
		}

		if (current->getNext() == NULL) return false;

		previous = current;
		current = current->getNext();
	}
}

bool linkedList::empty()
{
	return _start == NULL;
}

int linkedList::len()
{
	return this->_lenght;
}

void linkedList::print()
{
	if (empty()) return;

	linkedListNode* current = this->_start;

	while (true)
	{
		cout << current->getVal() << endl;

		if (current->getNext() == NULL) break;

		current = current->getNext();
	}
}

void linkedList::sort()
{
	if (empty()) return;

	linkedListNode* previous = this->_start;
	linkedListNode* current = this->_start->getNext();
	linkedListNode* pointer = this->_end;

	while (true)
	{
		while (true)
		{
			if (current->getVal() < previous->getVal())
			{
				string t = previous->getVal();
				previous->setVal(current->getVal());
				current->setVal(t);
			}

			if (current == pointer || previous == pointer) break;

			previous = current;
			current = current->getNext();
		}

		if (previous == pointer) break;

		pointer = previous;
		previous = this->_start;
		current = this->_start->getNext();
	}
}

linkedListNode* linkedList::search(string Val)
{
	linkedListNode* current = _start;

	while (true)
	{
		if (current->getVal() == Val) return current;

		if (current->getNext() == NULL) return NULL;

		current = current->getNext();
	}
}