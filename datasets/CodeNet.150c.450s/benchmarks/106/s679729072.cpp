#include <bits/stdc++.h>
using namespace std;
int main(){
	int x=0;
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=a;i<b+1;i++){
		if(c%i==0){
			x=x+1;
		}
	}
	cout<<x<<endl;
}

