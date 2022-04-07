class linkedListNode
{
private:
	string _val;
	linkedListNode* _next;

public:
	linkedListNode(string);

	void setVal(string);

	string getVal();

	void setNext(linkedListNode* node);

	linkedListNode* getNext();
};