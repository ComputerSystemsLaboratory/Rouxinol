#include <bits/stdc++.h>
using namespace std;

int main() {
	int W,H,x,y,r;
	cin>>W>>H>>x>>y>>r;
	if(r>x||r>y||r+x>W||r+y>H){
		cout<<"No"<<endl;
	}else{
		cout<<"Yes"<<endl;
	}
	
}