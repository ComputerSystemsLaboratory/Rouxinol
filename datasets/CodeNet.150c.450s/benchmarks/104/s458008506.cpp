#include<iostream>
#include<utility>
#include<cstdio>
using namespace std;

int main(){
  int w,n;
  cin >> w >> n;
  int b[w+1];
  for(int i = 1;i < w+1;i++){
    b[i] = i;
  }
  for(int i = 0;i < n;i++){
    int c,d;
    scanf("%d,%d",&c,&d);
    swap(b[c],b[d]);
  }

  for(int i = 1;i < w+1;i++){
    cout << b[i] << endl;
  }
  
}