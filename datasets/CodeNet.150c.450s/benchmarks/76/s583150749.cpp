#include <iostream>

using namespace std;

class TreeNode
{
public:
	TreeNode(int key) : key(key), pLeftChild(0), pRightChild(0) {}

public:
	int key;
	TreeNode* pLeftChild;
	TreeNode* pRightChild;
};

class BST
{
public:
	bool Insert(int key)
	{
		{
			if (!m_pRoot)
			{
				m_pRoot = new TreeNode(key);
				return true;
			}
			else
				return Insert(m_pRoot, key);
		}
	}

	bool Find(int key)
	{
		return Find(m_pRoot, key);
	}

	void PreOrder()
	{
		PreOrder(m_pRoot);
	}

	void InOrder()
	{
		InOrder(m_pRoot);
	}

private:
	bool Insert(TreeNode* currentNode, int key)
	{
		if (key == currentNode->key) return false;
		else if (key < currentNode->key)
		{
			if (currentNode->pLeftChild) return Insert(currentNode->pLeftChild, key);
			else
			{
				currentNode->pLeftChild = new TreeNode(key);
				return true;
			}
		}
		else
		{
			if (currentNode->pRightChild) return Insert(currentNode->pRightChild, key);
			else
			{
				currentNode->pRightChild = new TreeNode(key);
				return true;
			}
		}
	}

	bool Find(TreeNode* currentNode, int key)
	{
		if (!currentNode) return false;

		if (key == currentNode->key) return true;
		else if (key < currentNode->key)
			return Find(currentNode->pLeftChild, key);
		else
			return Find(currentNode->pRightChild, key);
	}

	void PreOrder(TreeNode* currentNode)
	{
		if (!currentNode) return;

		cout << " " << currentNode->key;
		PreOrder(currentNode->pLeftChild);
		PreOrder(currentNode->pRightChild);
	}

	void InOrder(TreeNode* currentNode)
	{
		if (!currentNode) return;

		InOrder(currentNode->pLeftChild);
		cout << " " << currentNode->key;
		InOrder(currentNode->pRightChild);
	}

private:
	TreeNode* m_pRoot = 0;
};

int main()
{
	BST tree;
	int n; cin >> n;
	string oper;
	int key;
	for (int i = 0; i < n; ++i)
	{
		cin >> oper;
		if (0 == oper.compare("insert"))
		{
			cin >> key;
			tree.Insert(key);
		}
		else if(0 == oper.compare("print"))
		{
			tree.InOrder();
			cout << endl;
			tree.PreOrder();
			cout << endl;
		}
		else if (0 == oper.compare("find"))
		{
			cin >> key;
			cout << (tree.Find(key) ? "yes" : "no") << endl;
		}
	}

	return 0;
}
