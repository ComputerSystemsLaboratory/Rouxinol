/*
* 重新用指针实现一遍双头链表
*/

# include <cstdio>
# include <cstring>
# include <cstdlib>



struct Node { // 结点结构体
	int key;
	Node *prev, *next;
};

Node *nil; // 声明头结点

void init() { // 初始化头结点函数
	nil = (Node *)malloc(sizeof(Node)); // 给头结点分配内存空间
	nil->next = nil;
	nil->prev = nil;
}

// 插入函数
void insert(int key) {
	Node *x = (Node *)malloc(sizeof(Node));
	x->key = key;
	// 在头结点后面插入元素
	x->next = nil->next;
	nil->next->prev = x;
	nil->next = x;
	x->prev = nil;
}

Node* listSearch(int key) {
	Node *cur = nil->next;
	while (cur != nil && cur->key != key) {
		cur = cur->next;
	}
	return cur;
}

void deleteNode(Node *t) {
	if (t == nil) return;
	t->prev->next = t->next;
	t->next->prev = t->prev;
	free(t);
}

void deleteFirst() {
	deleteNode(nil->next);
}

void deleteLast() {
	deleteNode(nil->prev);
}

void deleteKey(int key) {
	deleteNode(listSearch(key));
}

int main() {
	// freopen("data.in", "r", stdin);
	// freopen("data.out", "w", stdout);

	init(); // 初始化头结点
	
	int n, x; char buff[20]; // buff[]用来临时存储每一条命令。 
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", buff);
		if (buff[6] == '\0') {
			scanf("%d", &x);
			if (buff[0] == 'i')
				insert(x);
			else
				deleteKey(x);
		}
		else if (buff[6] == 'F') {
			deleteFirst();
		}
		else if (buff[6] == 'L') {
			deleteLast();
		} 
	}
	
	int flag = 0;
	Node *cur = nil->next;
	while(cur != nil) {
		if (flag != 0)
			printf(" ");
		flag = 1;
		printf("%d", cur->key);
		cur = cur->next;
	}
	printf("\n");
	
	return 0;
}
