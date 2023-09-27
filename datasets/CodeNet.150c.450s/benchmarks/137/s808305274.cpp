#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

struct Node {
	char str[12] = "\0";
	Node *p_r = NULL;
	Node *p_l = NULL;
};

class Dictionary {
private:
	Node dummy;
public:
	void insert(const char str[]);
	bool find(const char str[]);
};

void Dictionary::insert(const char str[])
{
	Node *p_node = &dummy;
	Node **pp_node = NULL;
	while (p_node != NULL) {
		int rt = strcmp(str, p_node->str);
		if (rt == 0) return;
		if (rt > 0) {
			pp_node = &(p_node->p_r);
			p_node = p_node->p_r;
		}
		else {
			pp_node = &(p_node->p_l);
			p_node = p_node->p_l;
		}
	}

	Node *p_newnode = new Node;
	strcpy(p_newnode->str, str);
	*pp_node = p_newnode;
}

bool Dictionary::find(const char str[])
{
	Node *p_node = &dummy;
	while (p_node != NULL) {
		int rt = strcmp(str, p_node->str);
		if (rt == 0) return true;
		if (rt > 0) {
			p_node = p_node->p_r;
		}
		else {
			p_node = p_node->p_l;
		}
	}
	return false;
}

int main(void)
{
	Dictionary dic;

	int n;
	cin >> n;

	char cm[7] = "\0", str[13] = "\0";
	for (int i = 0; i < n; i++) {
		cin >> cm >> str;
		if (strcmp(cm, "insert") == 0) {
			dic.insert(str);
		}
		else if (strcmp(cm, "find") == 0) {
			bool result = dic.find(str);
			if (result) cout << "yes";
			else cout << "no";
			cout << endl;
		}
	}

	return 0;
}