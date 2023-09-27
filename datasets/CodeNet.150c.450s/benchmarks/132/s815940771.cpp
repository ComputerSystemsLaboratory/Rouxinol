#include<iostream>
#include<stdio.h>
#include<cmath>
#include<vector>
using namespace std;
#define loop(i,a,b) for(int i=a,i<b;i++)
#define rep(i,a) loop(i,0,a)
int main(){
  int n,p;
  while(cin>>n>>p,n||p){
    int wan=p;
    vector<int>in(n);
    int to=0;
    while(1){
      if(wan){
	wan--;
	in[to]++;
      }else{
	wan+=in[to];
	in[to]=0;
      }
      if(in[to]==p)break;
      to++;
      if(to==n)to=0;
    }
    cout<<to<<endl;
  }
}