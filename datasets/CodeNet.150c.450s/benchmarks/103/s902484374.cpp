#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int n,s;
int Sum_of_Integers(int i,int sum,int v);
int main(){
  while(1){
    cin >> n >> s;
    if(!n && !s)break;
    cout <<  Sum_of_Integers( 0 , 0 , -1) << endl;
  }
}
int Sum_of_Integers(int i,int sum,int v){
  int ret = 0;
  if(i > n || sum > s)return 0; // あふれたとき
  if(i == n && sum == s)return 1;
  for(int j=0;j<=9;j++){
    if(v<j)ret += Sum_of_Integers( i + 1, sum + j , j );
  }
  return ret;
}