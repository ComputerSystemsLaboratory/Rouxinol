//插入部分代码一致，多了搜索

#include <iostream>
#include<string>
using namespace std;
#define MAX  500000
#define NIL  -1
string judge[MAX];//储存yes/no
struct node
{
	int key;//键值
	struct node *parent, *left, *right;
};
struct node *head = NULL, *movepoint;
void includeConnectNode()//链接结点
{
	struct node *moveparent = NULL, *movehead;
	if (head == movepoint)//根
		return;

	else
	{
		movehead = head;
		while (movehead != NULL)
		{
			moveparent = movehead;
			if (movehead->key > movepoint->key) //左子树键值比父的小
				movehead = movehead->left;
			else //右子树键值比父大,这里要注意:left,right可以为NULL，即跳出循环的条件;
				movehead = movehead->right;
		}
		movepoint->parent = moveparent;//父节点
		if (movepoint->key < moveparent->key)
			moveparent->left = movepoint;
		else
			moveparent->right = movepoint;

	}



}
void includeCreatNode()//建立结点
{
	movepoint = new  node;
	movepoint->parent = NULL;
	movepoint->left = NULL;
	movepoint->right = NULL;
	if (head == NULL)
		head = movepoint;
	cin >> movepoint->key;
	includeConnectNode();
}
void includePrintInorderData(struct node *next)//中序打印;
{
	if (next == NULL)
		return;
	includePrintInorderData(next->left);

	cout << " " << next->key;

	includePrintInorderData(next->right);
}
void includePrintPreorderData(struct node *next)
{
	if (next == NULL)
		return;

	cout << " " << next->key;

	includePrintPreorderData(next->left);
	includePrintPreorderData(next->right);

}
node* includeSearchData(node *search, int key)//搜索
{
	if (search == NULL)
		return NULL;
	else
	{
		while (search != NULL && key != search->key)
		{
			if (search->key > key)
				search = search->left;
			else 
				search = search->right;
		}
	}
	return search;

}
int main()
{
	int total,searchnumber,count=0;
	node *search;
	string order;
	cin >> total;
	for (int i = 0; i < total; i++)
	{
		cin >> order;
		if ("insert" == order)
			includeCreatNode();
		else if ("find" == order)//搜索
		{
			cin >> searchnumber;
			search = includeSearchData(head, searchnumber);
		if (search == NULL)
				cout << "no" << endl;	//judge[count++] = "no";
			else
				cout << "yes" << endl;//judge[count++] = "yes";

		}
		else if ("print" == order)
		{
			/*if (count > 0)//打印judge
				for (int i = 0; i < count; i++)
					cout << judge[i] << endl;*/
			includePrintInorderData(head);
			cout << endl;
			includePrintPreorderData(head);
			cout << endl;
		}

	}
	if (head != NULL)
		delete head;

	return 0;
}
