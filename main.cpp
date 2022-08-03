#include <iostream>
#include "Queue.h"
#include "Stack.h"
using namespace std;

int main()
{
	string str;
	cout << "Please enter the word:" << endl;
	cin >> str;

	Stack  stack = Stack();
	Queue que = Queue();

	int len = str.size();
	for (int i = 0; i < len; i++) {
		stack.Push(str[i]);
		que.Enqueue(str[i]);
	}
	for (int i = 0; i < len; i++)
		if (stack.Pop() != que.Dequeue()) {
			cout << "Not a palindrome.";
			return(0);
		}
	cout << "Yes, it's a palindrome";

}


