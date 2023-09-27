#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

class Relation{
public:
	Relation(int tmp_n,int tmp_m){
		n = tmp_n;
		m = tmp_m;
		V = new vector<int>[n];
		num_of_each = new int[n];
		group = new int[n];
		for(int i=0;i<n;i++){
			num_of_each[i] = 0;
			group[i] = 0;
		}
		group_number = 1;
	}

	void push(int s,int t){
		V[s].push_back(t);
		V[t].push_back(s);
		num_of_each[s]++;
		num_of_each[t]++;
	}

	void makeGroup(){
		int node,i;
		queue<int> Q;
		Q.push(0);
		group[0] = 1;
		while(true){
			while(!Q.empty()){
				node = Q.front();
				Q.pop();
				if(num_of_each[node] > 0){
					for(int k=0; k < num_of_each[node];k++){
						if(group[V[node][k]] == 0){
							group[V[node][k]] = group[node];
							Q.push(V[node][k]);
						}
					}
				}
			}
			group_number++;
			for(i=0;i<n;i++){
				if(group[i] == 0){
					group[i] = group_number;
					Q.push(i);
					break;
				}
			}
			if(i == n) break;
		}
	}

	bool canAccsess(int s,int t){
		return group[s] == group[t];
	}

private:
	vector<int>* V;
	int* num_of_each;
	int* group;
	int group_number;
	int n,m;
};

int main(){
	int n,m,s,t,q;
	scanf("%d %d",&n,&m);

	Relation relation(n,m);
	for(int i=0;i<m;i++){
		scanf("%d %d",&s,&t);
		relation.push(s,t);
	}
	relation.makeGroup();
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%d %d",&s,&t);
		if(relation.canAccsess(s,t)){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
    return 0;
}