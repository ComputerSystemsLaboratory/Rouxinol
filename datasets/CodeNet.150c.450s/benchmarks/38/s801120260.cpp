#include<bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	for(int b=0;b<a;b++){
		vector<int>c(3);
		for(int d=0;d<3;d++)cin>>c[d];
		sort(c.begin(),c.end());
		if(c[0]*c[0]+c[1]*c[1]==c[2]*c[2])cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		}
}