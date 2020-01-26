#include "Stack.h"
#include "iostream"
using namespace std;
const int N = 5;
int main()
{
	char temp;   //出栈元素临时变量
	Stack<char> my_stack(N);
	my_stack.traverse();
	my_stack.StackIn('4');
	my_stack.StackIn('5');
	cout << "the length of stack is:" << my_stack.length() << endl;
	my_stack.StackIn('6');
	my_stack.StackIn('7');
	my_stack.StackIn('8');
	my_stack.StackIn('9');
	my_stack.StackOut(temp);
	my_stack.StackOut(temp);
	my_stack.StackIn('A');
	my_stack.StackIn('B');
	my_stack.traverse();
	my_stack.clean();
	my_stack.traverse();
	return 0;
}