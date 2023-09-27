#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>
using namespace std;

typedef struct Node {
	int key;
	struct Node *prev, *next;
} Node;

void insert(Node *ban, int key) {
	Node *newNode = (Node *)calloc(1, sizeof(Node));
	newNode->key = key;
	newNode->prev = ban;
	newNode->next = ban->next;
	ban->next->prev = newNode;
	ban->next = newNode;
	if(ban->prev == ban) {
		ban->prev = newNode;
	}
}

void deleteNode(Node *ban, int key) {
	Node *node = ban->next;
	while(node->key != -1) {
		if(node->key == key) {
			node->prev->next = node->next;
			node->next->prev = node->prev;
			free(node);
			break;
		}
		node = node->next;
	}
}

void deleteFirst(Node *ban) {
	Node *d = ban->next->next->prev;
	ban->next->next->prev = ban;
	ban->next = ban->next->next;
	free(d);
}

void deleteLast(Node *ban) {
	Node *d = ban->prev->prev->next;
	ban->prev->prev->next = ban;
	ban->prev = ban->prev->prev;
	free(d);
}

int main() {
	Node ban = {-1, NULL, NULL};
	ban.prev = &ban;
	ban.next = &ban;
	int n;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		char s[20];
		int key;
		scanf("%s", s);
		if(strcmp(s, "insert") == 0) {
			scanf("%d", &key);
			insert(&ban, key);
		} else if(strcmp(s, "deleteFirst") == 0) {
			deleteFirst(&ban);
		} else if(strcmp(s, "deleteLast") == 0) {
			deleteLast(&ban);
		} else {
			scanf("%d", &key);
			deleteNode(&ban, key);
		}
	}
	Node *node = ban.next;
	while(node->key != -1) {
		if(node->next == &ban) {
			printf("%d", node->key);
		} else {
			printf("%d ", node->key);
		}
		node = node->next;
	}
	cout << endl;
	return 0;
}

