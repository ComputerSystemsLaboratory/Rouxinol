
#include <iostream>
#include<string>
using namespace std;
#define NIL  -1
struct node
{
	int key;//键值
	struct node *parent, *left, *right;
};
struct node *head=NULL,*movepoint;
void includeConnectNode()//链接结点
{
	struct node *moveparent = NULL, *movehead;
	if (head == movepoint)//根
		return;

	else
	{
		movehead = head;
		while(movehead!=NULL)
		{
			moveparent = movehead;
			if (movehead->key > movepoint->key ) //左子树键值比父的小
				movehead = movehead->left;
			else //右子树键值比父大,这里要注意:left,right可以为NULL，即跳出循环的条件;
				movehead =movehead->right;
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
	cout <<" "<< next->key;
	//cout<< " ";
	includePrintInorderData(next->right);
}
void includePrintPreorderData(struct node *next)
{
	if (next == NULL)
		return;
	cout << " "<<next->key;
	//cout << " ";
	includePrintPreorderData(next->left);
	includePrintPreorderData(next->right);

}
int main()
{
	int total;
	string order;
	cin >> total;
	for (int i = 0; i < total; i++)
	{
		cin >> order;
		if("insert"==order)
			includeCreatNode();
		else if("print"==order)
		{
			includePrintInorderData(head);
			cout << endl;
			includePrintPreorderData(head);
		   cout<<endl;
		    
		}
	}
	if(head!=NULL)
		delete head;
 
	return 0;
}
