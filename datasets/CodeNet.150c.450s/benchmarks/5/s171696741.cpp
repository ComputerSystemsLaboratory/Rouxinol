#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int a;
	cin>>a;
	vector<int>b(a);
	for(int c=0;c<a;c++)cin>>b[c];
	for(int d=a-1;d!=0;d--)cout<<b[d]<<" ";
	cout<<b[0]<<endl;
}