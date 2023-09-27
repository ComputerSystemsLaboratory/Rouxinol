#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define max 251
#define nil 2000000001
int h[max];

void print(int n){
  for(int i=0;i<n;i++){
    cout<<"node "<<i+1
	<<": key = "<<h[i]<<", ";
    if(i!=0)cout<<"parent key = "<<h[(i-1)/2]<<", ";
    if(i*2+1<n)cout<<"left key = "<<h[i*2+1]<<", ";
    if((i+1)*2<n)cout<<"right key = "<<h[(i+1)*2]<<", ";
    cout<<endl;
  }
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++)cin>>h[i];
  print(n);
  return 0;
}

