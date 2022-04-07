class linkedList
{
private:
	linkedListNode* _start;
	linkedListNode* _end;
	int _lenght;

public:
	linkedList();

	void add(string);

	bool del(string);

	bool empty();

	int len();

	void print();

	void sort();

	linkedListNode* search(string);
};

