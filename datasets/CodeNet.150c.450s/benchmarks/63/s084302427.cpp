#include <iostream>
#include <math.h>

using namespace std;

//= AOJ GRL_1_A


const int V_constraint=100000,E_constraint=500000, D_constraint=10000;
int V, E, R,S[E_constraint+10], T[E_constraint+10], D[E_constraint+10],C[V_constraint+10];
const int inf=V_constraint*D_constraint+100;
// int parent[100000];

int main() {
	
	
	//= prompt user for input
	cin >> V >> E >> R;
// if (E>E_constraint)
// 	cout<< "E>E_constraint";
for (int i=0; i<E; ++i){
	cin >> S[i] >> T[i] >> D[i];
	// if (D[i] >D_constraint)
	// cout<< "D>D_constraint";
}
// set distance from source to source as zero, other as infinite
for (int i=0;i<V;i++) C[i]=inf;
C[R]=0;
// parent[R]=R;

// for (int i=0; i<E; ++i)
// 	cout<<C[i];
// cout<<endl;

//= bellman-ford algo
for (int v=0;v<V-1;v++)
{
	bool update = false;

	for (int i=0;i<E;++i){
		if(C[S[i]]+D[i]<C[T[i]] && C[S[i]]<inf ){
		C[T[i]]=C[S[i]]+D[i];
		update = true; 
		//parent[T[i]]=S[i];
		}
}
if (!update) break; 
	}

//= output 	
// cout<<V<<endl;

for (int i=0; i<V; i++)
	if (C[i]!=inf)
	cout << C[i] <<endl;
	else
	cout <<"INF"<<endl;
	
	return 0;
}