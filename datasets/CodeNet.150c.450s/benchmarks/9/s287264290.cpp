#include<iostream>
#include<string>

using namespace std;

struct charNode
{
	char c;
	charNode* next;
	charNode(char input) {
		c = input;
	}
};

int main() {
	string s;
	cin >> s;
	while (s != "-") {
		charNode* head = NULL;
		charNode* cur;
		charNode* pre;
		for (int i = 0; i < s.length(); i++) {
			if (head == NULL) {
				head = new charNode(s[i]);
				cur = head;
				pre = head;
			}
			else {
				cur = new charNode(s[i]);
				pre->next = cur;
				pre = pre->next;
			}
		}
		cur->next = NULL;
		pre = head;
		cur = head;

		int shuffleTimes;
		cin >> shuffleTimes;
		for (int i = 0; i < shuffleTimes; i++) {
			int count;
			cin >> count;

			for (int i = 0; i < count; i++) {
				pre = cur;
				cur = cur->next;
			}
			charNode *newHead;
			if (pre->next != NULL) {
				newHead = cur;
				while (cur->next != NULL) {
					cur = cur->next;
				}
				cur->next = head;
				head = newHead;
				pre->next = NULL;
				cur = head;
				pre = cur;

			}
			cur = head;
			/*
			while (cur) {
				cout << cur->c;
				cur = cur->next;
			}
			cout << endl;
			cur = head;
			*/
			/*
			else {//		just output the string
				cur = head;
				while (cur) {
					cout << cur->c;
					cur = cur->next;
				}
				cout << endl;
			}
			*/
		}

		while (cur) {
			cout << cur->c;
			cur = cur->next;
		}
		cout << endl;
		head = NULL;
		pre = NULL;
		cur = head;

		cin.sync();
		cin >> s;
	}
	//system("pause");

	return 0;
}