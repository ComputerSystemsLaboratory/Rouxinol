#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
  int d,MAX = -1;
  int data[1001]={0};
  while(cin >> d){
    data[d]++;
    MAX = max( MAX , data[d] );
  }
  for(int i=0;i<100;i++){
    if(MAX == data[i])cout << i << endl;
  }
}