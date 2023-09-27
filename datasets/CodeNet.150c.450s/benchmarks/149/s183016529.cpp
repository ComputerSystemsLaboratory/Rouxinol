#include <iostream>
#include <cstdlib>
using namespace std;
int p[10000];
void init(int N){
	for(int i=0 ; i<N ; i++ ) p[i]=i ;
}

int root(int a){
		if(p[a]==a) return a;
		return(p[a]=root(p[a]));
}

bool same(int x,int y){
		return root(x)==root(y);
}

void unite(int x,int y){
		p[root(x)]=root(y);
}

int main(){
	int n,q;
	cin >> n >> q ;
	init(n);
	int com,x,y;
	for(int i=0 ; i<q ; i++){
		cin >> com >> x >> y ;
		if(com == 0){
			unite(x,y);
		}
		else if(com == 1){
			cout<<same(x,y)<<endl;	
				}
	}
	return 0;
}