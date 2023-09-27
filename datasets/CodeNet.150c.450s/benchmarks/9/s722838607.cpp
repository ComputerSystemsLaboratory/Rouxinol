#include<iostream>
#include<string.h>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
queue<char> Q;
char a[202];
int m,h,c;
char x;
while(1){
	cin>>a;
	if(a[0]=='-')break;
	c=strlen(a);
	for(int i=0;i<c;i++){
		Q.push(a[i]);
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>h;
		for(int j=0;j<h;j++){
			x=Q.front();
			Q.pop();
			Q.push(x);
		}
	}
	while(!Q.empty()){
		cout<<Q.front();
		Q.pop();
	}
	cout<<endl;
}
return 0;
}

