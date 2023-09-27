#include <iostream>
#include <string>
using namespace std;
int main(){
	while(1){
	int n; cin >> n ;if(n==0) break;
	char* ch=new char[2*n];
	for(int i=0;i<n;i++) cin >> ch[2*i] >> ch[2*i+1] ;
	char temp;
	int m; cin >> m ;
	char* ans=new char[m];
	for(int i=0;i<m;i++){
		cin >> temp ;ans[i]=temp;
		for(int j=0;j<n;j++){
			int flag=0;
			if(temp==ch[2*j]) do{ans[i]=ch[2*j+1];flag=1;}while(0);
			if(flag==1) break;
		};
	};
	for(int i=0;i<m;i++) cout << ans[i] ;
	cout << '\n' ;
	};
}