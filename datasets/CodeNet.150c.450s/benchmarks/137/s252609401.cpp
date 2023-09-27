#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)
#define size_of(a) (int)(a).size()

class Alphabet {
public:
	static const int N = 4;
	
	int toInt(char c) {
		if (c == 'A') return 0;
		if (c == 'C') return 1;
		if (c == 'G') return 2;
		if (c == 'T') return 3;
		return -1;
	}
};

class Trie {
private:
	struct Node {
		vector< int > link;
		bool end;
		Node(int n) : link(n, -1),  end(false) {}
	};
	
	Alphabet& alph;
	vector< Node > node;
	
public:
	Trie(Alphabet& alph_) : alph(alph_) {
		node.push_back(Node(alph.N));
	}
	
	void insert(string& str) {
		insert(str, 0, 0);
	}
	
	void insert(string& str, int i, int vi) {
		if (i == size_of(str)) {
			node[vi].end = true;
			return;
		}
		
		int ci = alph.toInt(str[i]);
		
		if (node[vi].link[ci] != -1) {
			insert(str, i + 1, node[vi].link[ci]);
		} else {
			node.push_back(Node(alph.N));
			node[vi].link[ci] = size_of(node) - 1;
			insert(str, i + 1, node[vi].link[ci]);
		}
	}
	
	bool find(string& str) {
		return find(str, 0, 0);
	}
	
	bool find(string& str, int i, int vi) {
		if (i == size_of(str)) return node[vi].end;
		
		int ci = alph.toInt(str[i]);
		
		if (node[vi].link[ci] == -1) return false;
		return find(str, i + 1, node[vi].link[ci]);
	}
};

int main() {
	Alphabet alph;
	Trie trie(alph);
	
	int n;
	cin >> n;
	
	for_(i,0,n) {
		string op, str;
		cin >> op >> str;
		
		if (op == "insert") {
			trie.insert(str);
		} else {
			if (trie.find(str)) cout << "yes" << endl;
			else cout << "no" << endl;
		}
	}
}