#if 0

#endif

#include <iostream>
#include <vector>
using namespace std;

int P[10000+10];

void init(int N){
	for(int i=0;i<=N;++i) P[i]=i;
}
int root(int a){
	if(P[a]==a)return a;
	else return(P[a]=root(P[a]));
}
bool is_same_set(int a,int b){
	return root(a)==root(b);
}
void unite(int a,int b){
	P[root(a)]=root(b);
}

int main(){
	int n,q;
	int com, x,y;
	cin>>n>>q;
	init(n);
	for(int i=0;i<q;++i){
		cin>>com>>x>>y;
		if(com==0)
			unite(x,y);
		else{
			if(is_same_set(x,y))
				cout << "1" << endl;
			else if(! is_same_set(x,y))
				cout << "0" << endl;
		}
	}
}