//很多编译器不支持模板类 *.h 和 *.cpp 文件分开编译，所以模板类的声明和实现都放在头文件中
#ifndef STACK_H
#define STACK_H
#include "iostream"
using namespace std;
template <class T>
class Stack
{
public:
	Stack(int cap);    //构造
	~Stack();          //析构
	bool empty();      //判空
	bool full();       //判满
	void clean();      //清空
	int length();      //获取栈空间元素个数
	bool StackIn(T ele);      //元素入栈
	bool StackOut(T &ele);    //元素出栈
	bool traverse();        //遍历
private:
	T *p;    //栈空间指针
	int i_len;    //栈空间长度
	int i_cap;    //栈空间容量
	int i_top;    //栈顶元素索引下标
};


template <class T>
Stack<T>::Stack(int cap)
{
	i_cap = cap;
	i_len = 0;
	i_top = 0;
	p = new T[i_cap];
}

template <class T>
Stack<T>::~Stack()
{
	delete[] p;
	p = NULL;
	cout << "*****~Stack()" << endl;
}

template <class T>
void Stack<T>::clean()
{
	i_len = 0;
	i_top = 0;
	cout << "clean the stack" << endl;
}

template <class T>
bool Stack<T>::empty()
{
	return i_len == 0 ? true : false;
}

template <class T>
bool Stack<T>::full()
{
	return i_len == i_cap ? true : false;
}

template <class T>
int Stack<T>::length()
{
	return i_len;
}

template <class T>
bool Stack<T>::StackIn(T ele)
{
	if (full())
	{
		cout << "the stack is full,can not stack in" << endl;
		return false;
	}
	cout << "stack in" << endl;
	p[i_top] = ele;
	i_top++;
	i_len++;
	return true;
}

template <class T>
bool Stack<T>::StackOut(T &ele)
{
	if (empty())
	{
		cout << "the stack is empty,can not stack out" << endl;
		return false;
	}
	cout << "stack out" << endl;
	ele = p[i_top];
	i_top--;
	i_len--;
	return true;
}

template <class T>
bool Stack<T>::traverse()
{
	if (empty())
	{
		cout << "the stack is empty,can not traverse" << endl;
		return false;
	}
	cout << "traverse the stack :" << endl;
	for (int i = 0; i < i_top; i++)
	{
		cout << p[i] << " ";
	}
	cout << endl;
	return true;
}

#endif

