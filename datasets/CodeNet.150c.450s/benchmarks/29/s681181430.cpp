#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

struct List
{
	int key;
	List *prev, *next;
};

List root, last;

void Insert(int x)
{
	List *input = (List *)malloc(sizeof(List));
	if (root.next == NULL) {
		root.next = input;
		input->prev = &root;
		input->next = &last;
		last.prev = input;
	}
	else {
		input->next = root.next;
		input->next->prev = input;
		input->prev = &root;
		root.next = input;
	}
	input->key = x;
}

//List *SearchLast()
//{
//	List *ptr = &root;
//	while (ptr->next != NULL) {
//		ptr = ptr->next;
//	}
//	return ptr;	
//}

List *SearchKey(int x) 
{
	for (List *ptr = root.next; ptr != &last; ptr = ptr->next)
		if (ptr->key == x)  return ptr;
	return NULL;
}

void Delete(List *ptr)
{
	if (ptr == NULL) return;
	ptr->prev->next = ptr->next;
	if (ptr->next != NULL) ptr->next->prev = ptr->prev;
	free(ptr);
}

void ShowList()
{
	for (List *ptr = root.next; ptr != &last; ptr = ptr->next) {
		printf("%d", ptr->key);
		if (ptr->next != &last) printf(" ");
	}
	printf("\n");		
}

//void FreeData(List *ptr)
//{
//	if (ptr == NULL) return;
//	FreeData(ptr->next);
//	free(ptr);
//}

int main()
{
	root.next = NULL;
	root.prev = NULL;

	last.next = NULL;
	last.prev = NULL;

	int n, x;
	char order[12];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", order);
		switch (order[0])
		{
		case 'i':
			scanf("%d", &x);
			Insert(x);
			break;
		case 'd':
			switch (strlen(order))
			{
			case 6:
				scanf("%d", &x);
				Delete(SearchKey(x));
				break;
			case 10:
				Delete(last.prev);
				break;
			case 11:
				Delete(root.next);
				break;
			default:
				break;
			}
		default:
			break;
		}
	}
	ShowList();
	//FreeData(&root);
	
	return 0;
}