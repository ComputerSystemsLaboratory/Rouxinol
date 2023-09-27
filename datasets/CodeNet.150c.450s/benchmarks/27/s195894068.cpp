#include <stdio.h>
using namespace std;

class Node
{
public:
	Node ()
	{
		this->parent = NULL;
		this->right = NULL;
		this->left = NULL;
	}

	Node* parent;
	Node* right;
	Node* left;
	int item;
};

class BinaryTree
{
private:
	Node* root;

	void PreOrder (Node* node)
	{
		if (node != NULL)
		{
			printf (" %d", node->item);
			PreOrder (node->left);
			PreOrder (node->right);
		}
	}

	void InOrder (Node* node)
	{
		if (node != NULL)
		{
			InOrder (node->left);
			printf (" %d", node->item);
			InOrder (node->right);
		}
	}

	void DeletePostOrder (Node* node)
	{
		if (node != NULL)
		{
			DeletePostOrder (node->left);
			DeletePostOrder (node->right);
			delete node;
		}
	}

public:
	BinaryTree ()
	{
		root = NULL;
	}
	~BinaryTree ()
	{
		DeletePostOrder (root);
	}

	void Insert (int value)
	{
		Node* searchNode = root;
		Node* parentNode = NULL;
		Node* newNode = new Node;
		newNode->item = value;

		//???????????°????????????????????\???????????¢?´¢??????
		while (searchNode != NULL)
		{
			parentNode = searchNode;

			if (newNode->item < searchNode->item)
			{
				searchNode = searchNode->left;
			}
			else
			{
				searchNode = searchNode->right;
			}
		}

		newNode->parent = parentNode;

		//?????????????????´???
		if (parentNode == NULL)
		{
			root = newNode;
		}
		else
		{
			//?????????????????´???????????????????????????
			if (newNode->item < parentNode->item)
			{
				parentNode->left = newNode;
			}
			else
			{
				parentNode->right = newNode;
			}
		}
	}

	void Print ()
	{
		InOrder (root);
		printf ("\n");
		PreOrder (root);
		printf ("\n");
	}
};

int main ()
{
	int dataCount;
	scanf ("%d", &dataCount);

	BinaryTree binaryTree;

	for (int lp = 0; lp < dataCount; lp++)
	{
		char inputStr[6 + 1];
		scanf ("%s", inputStr);

		//insert
		if (inputStr[0] == 'i')
		{
			int inputNum;
			scanf ("%d", &inputNum);
			binaryTree.Insert (inputNum);
		}
		//print
		else
		{
			binaryTree.Print ();
		}
	}

	return 0;
}