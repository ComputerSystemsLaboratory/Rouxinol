#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int st[200];
int sp;

bool isFull() {
	if(sp >= 200)
		return true;
	return false;
}

bool isEmpty() {
	if (sp <= 0)
		return true;
	return false;
}

void push(int d) {
	if (isFull()) {
		cout << "stack is full" << endl;
		return;
	}
	sp++;
	st[sp] = d;
}

int pop() {
	if (isEmpty()) {
		cout << "stack is empty" << endl;
		return -1;
	}
	int d = st[sp];
	sp--;
	return d;
}

int main(){
	sp = 0;
	string str;
	getline(cin, str);
	stringstream ss(str);
	char val[8];
	int acc;

	while (!ss.eof()){
		ss >> val;
		switch (val[0]) {
		case '*':
			push(pop() * pop());
			break;
		case '+':
			push(pop() + pop());
			break;
		case '-':
			acc = pop();
			push(pop() - acc);
			break;
		default:
			push(atoi(val));
			break;
		}
	}

	cout << pop() << endl;

	return 0;
}