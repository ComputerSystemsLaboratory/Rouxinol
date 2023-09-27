#include <iostream>
#include <stdio.h>
#include <stack>
#include <vector>

using namespace std;
const int nil = -1;

int total, n, m, q;

vector<int>* vecs;
typedef int Comm;
Comm* comms;

void find_connection(int from){
	stack<int> stk;
	stk.push(from);

	while(stk.size()){
		int top = stk.top();
		comms[top] = from;
		for(int i=0, sz=vecs[top].size(); i<=sz; ++i){
			if(i==sz){
				stk.pop();
				break;
			}
			if(comms[vecs[top][i]] == nil){
				stk.push(vecs[top][i]);
				break;
			}
		}
	}
}

int main()
{
	scanf("%d %d",&n,&m);
	vecs = new vector<int> [n];
	comms = new Comm [n];

	for(int i=0; i<n; ++i){
		comms[i] = nil;
	}

	for(int i=0; i<m; ++i){
		int id, f;
		scanf("%d %d",&id,&f);
		vecs[id].push_back(f);
		vecs[f].push_back(id);
	}

	scanf("%d",&q);
	for(int i=0; i<q;++i){
		int from, to;
		scanf("%d %d",&from,&to);
		if(comms[from]==nil && comms[to]==nil){
			find_connection(from);
			if(comms[from] == comms[to]){
				cout << "yes" << endl;
			}
			else{
				cout << "no" << endl;
			}
		}
		else if(comms[from] == comms[to]){
			cout << "yes" << endl;
		}
		else{
			cout << "no" << endl;
		}
	}

	delete[] comms;
	delete[] vecs;

	return 0;
}
