#include<iostream>
using namespace std;

int v , e , s[9901] , t[9901] , d[9901];
long long a[101][101] , s1;

int main(){
	cin>>v>>e;
	for(int i = 0 ; i < v; i++){
		for(int j = 0; j < v; j++){
			a[i][j] = 1e18;
		}
//		cout<<endl;
	}
	for(int i = 0 ; i < e; i++){
		cin>>s[i]>>t[i]>>d[i];
		a[ s[i] ][ t[i] ] = d[i];
	}
	
	for(int k = 0 ; k < v; k++){
		for(int i = 0; i < v; i++){
			for(int j = 0; j < v; j++){
				if(a[i][j] > a[i][k] + a[k][j]){
					a[i][j] = a[i][k] + a[k][j];
				}
				if(a[i][k] + a[k][i] < 0){
					s1++;
				}
			}
		}
	}
	if(s1 == 0){
		for(int i = 0; i < v ; i++){
			for(int j = 0; j < v; j++){
//				cout<<a[i][j]<<' ';
				if(j != 0){
					cout<<' ';
				}
				if(a[i][j] > 2e9 && i != j){
					cout<<"INF";
					continue;
				}
				if(i == j){
					cout<<0;
				}
				if(a[i][j] <= 2e9 && i != j){
					cout<<a[i][j];
				}
			}
		cout<<endl;
		}
	}
	else cout<<"NEGATIVE CYCLE"<<endl;
}
