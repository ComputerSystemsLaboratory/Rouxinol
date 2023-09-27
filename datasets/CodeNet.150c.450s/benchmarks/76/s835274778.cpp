#include <stdio.h>
using namespace std;

class BinaryTree
{
private:
	class Node
	{
	public:
		Node ()
		{
			this->parent = NULL;
			this->left = NULL;
			this->right = NULL;
		}

		int item;
		Node* parent;
		Node* left;
		Node* right;
	};

	Node* root;

	void PreOrder (Node * node)
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
		this->root = NULL;
	}
	~BinaryTree ()
	{
		DeletePostOrder (root);
	}

	void Insert (int value)
	{
		Node* parentNode = NULL;
		Node* searchNode = root;

		Node* newNode = new Node;
		newNode->item = value;

		//???????????????????????????????????????
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

		//????????????????????????
		if (parentNode == NULL)
		{
			root = newNode;
		}
		else
		{
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
	bool Find (int value)
	{
		Node* searchNode = root;

		while (searchNode != NULL)
		{
			if (searchNode->item == value)
			{
				return true;
			}
			//???
			if (value < searchNode->item)
			{
				searchNode = searchNode->left;
			}
			//???
			else
			{
				searchNode = searchNode->right;
			}
		}

		return false;
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
		char inputStr[10];
		scanf ("%s", inputStr);

		if (inputStr[0] == 'i')
		{
			int inputNum;
			scanf ("%d", &inputNum);

			binaryTree.Insert (inputNum);
		}
		else if (inputStr[0] == 'f')
		{
			int inputNum;
			scanf ("%d", &inputNum);

			bool isFind = binaryTree.Find (inputNum);

			if (isFind)
				printf ("yes\n");
			else
				printf ("no\n");
		}
		else
		{
			binaryTree.Print ();
		}
	}

	return 0;
}