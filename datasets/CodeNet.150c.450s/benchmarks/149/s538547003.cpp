#include <iostream>  
using namespace std;

int P[10000+10];
int n,q,p,num1,num2;

int root(int a){
	if (P[a] == a) return a;
	return (P[a] = root(P[a]));
}

bool same(int a, int b){
	return root(a)==root(b);
}
	
void unite(int a, int b){
	P[root(a)] = root(b);
}	
			
int main() {
	cin >> n >> q;
	for (int i=1; i<=n; i++){
		P[i] = i;
	}
	
	for (int x=1; x<=q; x++){
		cin >> p >> num1 >> num2;
		if (p==0){			
			unite(num1, num2);
		}else{
			cout << same(num1, num2) << endl;
		}
	}
}