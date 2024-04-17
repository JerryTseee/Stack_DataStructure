#include<iostream>
using namespace std;

/*
empty(s): return true if stack s in empty
top(s): return the element at the top of stack
push(s,x): insert x to the top of the stack s
pop(s): return and then delete the element at the top of the stack

Last-in First-out
*/

struct stack {
	int index = -1;
	int entry[100];
};
stack s;

//O(1)
bool empty(stack& s) {
	if (s.index == -1) {
		return true;
	}
	return false;
};

//O(1)
void push(stack& s, int x) {
	s.index++;
	s.entry[s.index] = x;
};

//O(1)
int top(stack& s) {
	if (empty(s)) {
		cout << "underflow" << endl;
	}
	else {
		return s.entry[s.index];
	}
};

//O(1)
int pop(stack& s) {
	int temp = top(s);
	s.index--;
	return temp;
};

void printStack(stack& s) {
	for (int i = 0; i < s.index+1; i++) {
		cout << s.entry[i] << " ";
	}
	cout << endl;
};