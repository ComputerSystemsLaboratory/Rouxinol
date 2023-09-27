
#include<iostream>
#include<vector>
#include<string>
#include<cstdio>
using namespace std;
int ans;
int n;
int s;
void count_ans(int k,int C,int j){
if(k==n){
if(C==s){
ans++;
}
}else{
for(int i=j+1;i<10;i++){
count_ans(k+1,C+i,i);
}
}
}
int main(){
while(cin>>n>>s,(n!=0)||(s!=0)){
ans=0;
count_ans(0,0,-1);
cout<<ans<<endl;
}
}