#include<bits/stdc++.h>
using namespace std;
int main(void){
	int i,j;
	string n;
	while(1){
		cin>>n;
		if(n=="-")	break;
		int x,h;
		cin>>x;
		for(i=0;i<x;i++){
			cin>>h;
			string y;
			for(j=0;j<h;j++){
				y+=n[j];
			}
			n.erase(0,h);
			n+=y;
		}
		cout<<n<<endl;
	}
	return 0;
}
