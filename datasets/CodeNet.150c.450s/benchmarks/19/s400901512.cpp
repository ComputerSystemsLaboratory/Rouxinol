#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	for(int i=1;i<=10001;i++){
		cin>>x>>y;
		if(x==0&&y==0)break;
		if(x<y)
		cout<<x<<" "<<y<<endl;
		else if(x>y)
		cout<<y<<" "<<x<<endl;
		else
		cout<<x<<" "<<y<<endl;
		
	}
}


