#include<iostream>
#include<string.h>

using namespace std;

int N;
int balls[10];
bool dfs(int n, int a, int b){
if(n==10)return true;
if(balls[n]>a) return dfs(n+1,balls[n],b);
if(balls[n]>b) return dfs(n+1,a,balls[n]);
return false;
}
int main(){
cin>>N;
for(int i=0;i<N;i++){
for(int j=0;j<10;j++){
cin>>balls[j];
}
if(dfs(0,0,0))cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}