/*#include "Stack.h"
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
}*/