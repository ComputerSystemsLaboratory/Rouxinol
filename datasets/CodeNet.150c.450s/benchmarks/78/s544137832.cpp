// -*- coding: utf-8 -*-
// Last-Updated : <2014/06/19 00:29:01 by samui>

#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <climits>
#define MP(a, b) make_pair(a, b)
#define X first
#define Y second
#define rep(i,n) for(int (i) = 0; (i) < (int)(n); ++(i))
#define rer(i,l,n) for(int (i) = l; (i) <= (int)(n); ++(i))
#define reu(i,l,n) for(int (i) = l; (i) < (int)(n); ++(i))
template<typename T,typename U> inline void amin(T &x,U y){ if(y<x) x = y;}
template<typename T,typename U> inline void amax(T &x,U y){ if(x<y) x = y;}
template<typename TYPE,std::size_t SIZE>
std::size_t len(const TYPE (&array)[SIZE]){return SIZE;}


const int M = 1000000;

void refresh(std::vector<int>& arr,int x){
  rer(i,x,M){
    amin(arr[i],arr[i-x]+1);

  }
}
int main(int argc, char *argv[])
{
  std::vector<int> s(M+10);
  std::vector<int> all(M+10,10000000);
  std::vector<int> odd(M+10,10000000);
  all[0] = 0;
  odd[0] = 0;
  //odd[0] = 0;
  reu(i,1,M+100){
    int x = i*(i+1)*(i+2)/6;
    if(x > M) break;
    rer(j,x,M){
      amin(all[j],all[j-x]+1);
    }
    //refresh(all,x);
    if(x&1) refresh(odd,x);
  }
  int i;
  while(std::cin>>i){
    if(i == 0)
      break;
    std::cout<<all[i]<<" "<<odd[i]<<std::endl;

  }
  return 0;
}