//互いに素な集合
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Tree{
private:
	struct Element{
		int point;//ポインタ(根のvector[x])
		int rank;//階級
	};

	vector<Element> Content;

public:
	Tree(int contentsnum);

	int FindSet(int x);
	void Link(int x, int y);
	void Unite(int x ,int y);
	bool Same(int x, int y);
};

Tree::Tree(int contentsnum){
	Content.resize(contentsnum);
	for (int c = 0; c < contentsnum;++c){
		Content[c].rank = 0;
		Content[c].point = c;
	}
}

int Tree::FindSet(int x){
	if (x != Content[x].point){
		Content[x].point = FindSet(Content[x].point);
	}
	return Content[x].point;
}

void Tree::Link(int x, int y){
	if (Content[x].rank < Content[y].rank){
		Content[x].point = y;
	} else{
		Content[y].point = x;
		if (Content[x].rank = Content[y].rank)
			++Content[y].rank;
	}
}

void Tree::Unite(int x, int y){
	Link(FindSet(x), FindSet(y));
}

bool Tree::Same(int x, int y){
	return FindSet(x) == FindSet(y);
}

int main(){
	int contentnum;
	cin >> contentnum;
	Tree tree(contentnum);

	int ordernum = 0;
	cin >> ordernum;
	int a = 0, b = 0;//ローダー
	for (int i = 0; i < ordernum; ++i){
		cin >> a;
		if (a == 0){//unite
			cin >> a; cin >> b;
			tree.Unite(a, b);
		} else{
			cin >> a; cin >> b;
			cout << (tree.Same(a, b) ? 1 : 0) << endl;
		}
	}

	return 0;
}