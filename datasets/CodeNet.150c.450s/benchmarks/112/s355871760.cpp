#include<iostream>
using namespace std;

char T[25000][2];
char S;
int main(){
int n,m;
while(true){
cin>>n;
if(n==0){
break;
}
for(int i=0;i<n;i++){
cin>>T[i][0]>>T[i][1];
}
cin>>m;
for(int i=0;i<m;i++){
cin>>S;
for(int j=0;j<n;j++){
	if(T[j][0]==S){
	cout<<T[j][1];
	goto Exit;
	}
}
cout<<S;
Exit:;
}
cout<<endl;
}
}