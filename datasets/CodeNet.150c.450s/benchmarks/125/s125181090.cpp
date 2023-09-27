#include<iostream>
#include<stack>
#include<queue>
using namespace std;
static const int WHITE = 0;
static const int GRAY = 1;
static const int BLACK = 2;

string col[3] = {"WHITE", "GRAY", "BLACK"};
struct Node{
	int color, d, f;
	queue<int> Q;
};

int main(){
	int n;
	cin >> n;
	Node node[n + 1];
	stack<int> move;
	for(int i = 1; i <= n; i++){
		int u, k, v;
		cin >> u >> k;
		node[u].color = WHITE;
		while(k--){
			cin >> v;
			node[u].Q.push(v);
 		}
	}

	int start = 1;
	int tt = 1, p, next;

	do{
		move.push(start);
		node[start].color = GRAY;
		node[start].d = tt;
		tt++;

		while(!move.empty()){
			p = move.top();
			//cout << "Is at " << p << endl;
			if(node[p].Q.empty()){
				//cout << "Cant move from here!" << endl;
				node[p].color = BLACK;
				node[p].f = tt;
				move.pop();
				tt++;
			} else {
				next = node[p].Q.front();
				if(node[next].color == WHITE){
					//cout << "Moving to " << next << endl;
					move.push(next);
					node[next].color = GRAY;
					node[next].d = tt;
					tt++;
				} else {
					//cout << "Cant move to " << next << endl;
					node[p].Q.pop();
				}
			}
			/*
			for(int i = 1; i <= n; i++)
				cout << i << "'s color is " << col[node[i].color] << endl;
			*/
		}

		start = -1;
		for(int i = 1; i <= n; i++){
			if(node[i].color == WHITE){
				start = i;
				break;
			}
		}
		//cout << "start = " << start << endl;
	} while (start > 0);
	

	for(int i = 1; i <= n; i++){
		cout << i << " " << node[i].d << " " << node[i].f << endl;
	}
	return 0;
}