#include<bits/stdc++.h>
using namespace std;

int main(){
stack<int>a;
int b;
scanf("%d",&b);
a.push(b);
while(cin>>b){
	if(b)a.push(b);
	else {printf("%d\n",a.top());a.pop();}
}
}