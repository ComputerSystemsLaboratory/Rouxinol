#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
#include <array>

using namespace std;

template<typename T>
struct Node {
	Node(const T& value) :value(value), parent(NULL), left(NULL), right(NULL) {}
	Node():Node(T()) {}
	T value;
	Node* parent;
	Node*left;
	Node*right;
};

template<typename T>
class BinarySearchTree
{
public:
	enum VisitOrder {
		ROOT = 0, LEFT = 1, RIGHT = 2
	};
	BinarySearchTree():root(NULL){}
	void insert(const T& value) {
		Node<T>* newNode(new Node<T>(value));
		Node<T>* parent = NULL;
		Node<T>* parentChild = NULL;
		{
			Node<T>* tempRootPtr = root;
			while (tempRootPtr != NULL) {
				parent = tempRootPtr;
				tempRootPtr = value < tempRootPtr->value ? tempRootPtr->left : tempRootPtr->right;
			}
		}
		newNode->parent = parent;
		if (parent == NULL) root = newNode;
		else (value < parent->value ? parent->left : parent->right) = newNode;
	}
	
	void printNodeKeys(const array<int, 3>& order) {
		const array< function< Node<T>*(Node<T>*) >, 3> functionList = {
			  [&](Node<T>* node) {return node; }
			, [&](Node<T>* node) {return node->left; }
			, [&](Node<T>* node) {return node->right; }
		};

		function< void(Node<T>*) > printNodesImpl = [&](Node<T>* node){
			if (node == NULL)return;
			for (const auto& visitTargetIndex : order) {
				Node<T>* visitingNode = (functionList.at(visitTargetIndex))(node);
				if (visitingNode != node) printNodesImpl(visitingNode);
				else cout << " " << visitingNode->value;
			}
		};
		printNodesImpl(root);
	}
private:
	Node<T>* root;
};

template<typename T>
void execute(T& cin) {
	int n;
	cin >> n;
	string command;
	using Tree = BinarySearchTree<int>;
	Tree tree;
	command.reserve(6);//insertが最長で6
	for (int i = 0; i != n; ++i) {
		command.clear();
		cin >> command;
		if (command == "insert") {
			int key;
			cin >> key;
			tree.insert(key);
		}
		else {//print
			tree.printNodeKeys({ Tree::LEFT, Tree::ROOT, Tree::RIGHT });
			cout << endl;
			tree.printNodeKeys({ Tree::ROOT, Tree::LEFT, Tree::RIGHT });
			cout << endl;
		}
	}

}

int main()
{

	execute(cin);



	return 0;
}
