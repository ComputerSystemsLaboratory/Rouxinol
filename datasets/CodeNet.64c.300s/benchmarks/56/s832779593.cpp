#include <bits/stdc++.h>
using namespace std;
int getDate(int y,int m,int d){
	int res=0;
	int a = (y-1)/3;
	int b = (y-1) - a;
	res += 200*a + 195*b;
	res += 20*(m-1) - (y%3 == 0 ? 0 : (m-1)/2);
	res += d;
	return res;
}
int main(){
	int y,m,d,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>y>>m>>d;
		cout<<getDate(1000,1,1)-getDate(y,m,d)<<endl;
	}
}