#include <iostream>
#include <list>
#include <string>
using namespace std;
struct Trie
{
	struct Node
	{
		Node() :isEnd(false) {}
		Node(char _v) : v(_v), isEnd(false) {}
		~Node()
		{
			for (list<Node*>::iterator it = nodes.begin();
				it != nodes.end();
				++it)
			{
				delete *it;
			}
		}
		Node* FindChild(char c){
			for (list<Node*>::iterator it = nodes.begin();
				it != nodes.end();
				++it)
			{
				if ((*it)->v == c)
					return *it;
			}
			return 0;
		}

		bool isEnd;
		char v;
		list<Node*> nodes;
	};

	void Add(const string& str){
		Node* n = &root;
		Node* cn = 0;
		int s = str.size();
		std::string::size_type p = 0;
		for (; p < s; ++p){
			char c = str[p];
			cn = n->FindChild(c);
			if (cn)
				n = cn;
			else{
				cn = new Node(c);
				n->nodes.push_back(cn);
				n = cn;
			}
		}
		n->isEnd = true;
	}
	bool Find(const string& str){
		Node* n = &root;
		Node* cn = 0;
		int s = str.size();
		std::string::size_type p = 0;
		for (; p < s; ++p){
			char c = str[p];
			cn = n->FindChild(c);
			if (!cn)
				return false;
			n = cn;
			if (p == s - 1)
				return n->isEnd;
		}
	}
	Node root;
};

int main()
{
	int n, i;
	cin >> n;
	string com, str;
	Trie trie;
	for (i = 0; i < n; ++i){
		cin >> com >> str;
		if (com == "insert") trie.Add(str);
		if (com == "find")
			cout << (trie.Find(str) ? "yes\n" : "no\n");
	}

	return 0;
}