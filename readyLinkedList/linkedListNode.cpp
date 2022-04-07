#include "linkedListNode.h"

linkedListNode::linkedListNode(string val)
{
	_val = val;
	_next = NULL;
}

void linkedListNode::setVal(string val)
{
	_val = val;
}

string linkedListNode::getVal()
{
	return _val;
}

void linkedListNode::setNext(linkedListNode* node)
{
	_next = node;
}

linkedListNode* linkedListNode::getNext()
{
	return _next;
}