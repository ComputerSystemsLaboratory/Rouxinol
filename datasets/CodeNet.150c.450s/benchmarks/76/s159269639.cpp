#include<iostream>
#include<string>
using namespace std;

struct Node {
	int iKey_;
	Node *pParent_;
	Node *pLeftChild_;
	Node *pRightChild_;
};

class Tree {
public:
	Tree(int iNum) :iMaxNodeNum_(iNum), iCurNodeNum_(0) {}

	void setNodeValue() {
		for (int iCurNode_i = 0; iCurNode_i < iMaxNodeNum_; iCurNode_i++) {
			string sCommand;
			cin >> sCommand;
			if (sCommand[0] == 'i') {
				int iKey;
				cin >> iKey;
				insertNode(iKey);
			}
			else if (sCommand[0] == 'f') {
				int iKey;
				cin >> iKey;
				bool bIsFinding = isNode(iKey);
				if (bIsFinding) cout << "yes" << endl;
				else			cout << "no" << endl;
			}
			else {
				print();
			}
		}
	}

private:
	void insertNode(int iKey) {
		Node *pNewNode = new Node;
		//????????????
		pNewNode->iKey_ = iKey;
		pNewNode->pParent_ = NULL;
		pNewNode->pLeftChild_ = NULL;
		pNewNode->pRightChild_ = NULL;
		iCurNodeNum_++;
		if (iCurNodeNum_ == 1) { //??????????????????????????????
			pRoot_ = pNewNode;
			return;
		}

		searchNewNodeLocation(pNewNode);
	}
	void searchNewNodeLocation(Node *pNewNode) {
		Node *pCurNode = pRoot_;
		Node *pCurParentNode = NULL;
		while (pCurNode != NULL) {
			pCurParentNode = pCurNode;
			if (pNewNode->iKey_ < pCurNode->iKey_) pCurNode = pCurNode->pLeftChild_;
			else                                   pCurNode = pCurNode->pRightChild_;
		}
		pNewNode->pParent_ = pCurParentNode;

		if (pNewNode->iKey_ < pCurParentNode->iKey_) pCurParentNode->pLeftChild_ = pNewNode;
		else                                   pCurParentNode->pRightChild_ = pNewNode;
	}

	bool isNode(int iKey) {
		Node *curNode = pRoot_;
		while (curNode != NULL) {
			if (curNode->iKey_ == iKey) return true;
			if (iKey < curNode->iKey_) {
				curNode = curNode->pLeftChild_;
			}
			else {
				curNode = curNode->pRightChild_;
			}
		}
		return false;
	}

	void print() {
		printWidthInorder(pRoot_);
		cout << endl;
		printWidthPreorder(pRoot_);
		cout << endl;
	}
	void printWidthPreorder(Node *pN) {
		if (pN == NULL) return;
		cout << " " << pN->iKey_;
		printWidthPreorder(pN->pLeftChild_);
		printWidthPreorder(pN->pRightChild_);
	}
	void printWidthInorder(Node *pN) {
		if (pN == NULL) return;
		printWidthInorder(pN->pLeftChild_);
		cout << " " << pN->iKey_;
		printWidthInorder(pN->pRightChild_);
	}

	Node *pRoot_;
	int iCurNodeNum_;
	const int iMaxNodeNum_;
};

int main() {
	int iNodeNum;
	cin >> iNodeNum;

	//?????????
	Tree trNodeTree(iNodeNum);

	//???????????§??\????????????
	trNodeTree.setNodeValue();

	return 0;
}