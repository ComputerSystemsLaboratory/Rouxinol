#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int h[2000001],hsize=1;
void insert(int key){
  int i=hsize;
  hsize++;
  h[i]=key;
  while(i>1&&h[i/2]<h[i]){
    swap(h[i/2],h[i]);
    i/=2;
  }
}
void maxheapify(int i){
  int l=i*2;
  int r=l+1,lrg;
  if(l<=hsize&&h[l]>h[i])lrg=l;
    else lrg =i;
  if(r<=hsize&&h[r]>h[lrg])lrg =r;
  if(lrg!=i){
    swap(h[i],h[lrg]);
    maxheapify(lrg);
  }
}
void extract(){
  cout<<h[1]<<endl;
  h[1]=h[--hsize];
  maxheapify(1);
}


int main(){
  string str;
  int k;
  while(cin>>str){
  if(str=="insert"){
    cin>>k;
    //cout<<h[1]<<":"<<h[2]<<":"<<h[3]<<endl;
    insert(k);
    //cout<<h[1]<<":"<<h[2]<<":"<<h[3]<<endl<<endl;
  }
  else if(str=="extract"){
    extract();
  }
  else break;
  }


  return 0;
}

