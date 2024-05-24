//Базовые принципы ООП 
//Задача OOP0Begin1
#include <iostream>

using namespace std;

//Stack Node
class Node
{ 
public:
    int _data;
    shared_ptr<Node> _next;

    Node(int data, shared_ptr<Node> next) : _data{ data }, _next{ next } {};
};

//Class of Collection
class Stack
{
private:
    shared_ptr<Node> _top = nullptr;
public:
	Stack();
	~Stack();

    bool isEmpty();
    void push(int data);
    int pop();
    int peek();
    void clear();
    string toString();

};

Stack::Stack()
{
}

Stack::~Stack()
{
}

bool Stack::isEmpty()
{
    return false;
}

void Stack::push(int data)
{
}

int Stack::pop()
{
    return 0;
}

int Stack::peek()
{
    return 0;
}

void Stack::clear()
{
}

string Stack::toString()
{
    return string();
}

int main()
{
    std::cout << "Hello World!\n";
}

  