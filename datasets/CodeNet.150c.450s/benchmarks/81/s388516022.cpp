#include <iostream>
using namespace std;

const int INF = 1000000000;

void WarshallFloyd(int d[10][10],int x){
	for(int k=0;k<x;k++){
		for(int i=0;i<x;i++){
			for(int j=0;j<x;j++){
				if(d[i][j]>d[i][k]+d[k][j]){
					d[i][j]=d[i][k]+d[k][j];
				}
			}
		}
	}
	return;
}

int main()
{
	while(true){
		int n;
		cin >> n;

		if(n==0)
			break;

		int T[10][10];
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				if(i==j){
					T[i][j] = 0;
				}
				else{
					T[i][j] = INF;
				}
			}
		}

		int m = 0;
		for(int i=0; i<n; i++){
			int a, b, c;
			cin >> a >> b >> c;

			T[a][b] = T[b][a] = c;

			if(a+1>m){
				m = a+1;
			}
			if(b+1>m){
				m = b+1;
			}
		}

		int A=INF,c;
		WarshallFloyd(T,10);
		for(int i=0;i<m;i++){
			int B=0;
			for(int j=0;j<m;j++){
				if(T[i][j]!=INF) B+=T[i][j];
			}
			if(A>B&&B!=0){
				A=B;
				c=i;
			}
		}
		
		cout<<c<<' '<<A<<endl;

	}

	return 0;
}