#include <string>
#include <vector>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stack>
#include<queue>
#include<cmath>
#include<algorithm>
#include<functional>
//--
#include<list>
#include<deque>
#include<bitset>
#include<set>
#include<map>
#include<cstdio>
#include<cstring>
#include<sstream>
#define X first
#define Y second
#define pb push_back

using namespace std;
priority_queue<int> hoge;

int aa=3,num,maxN,minN,dig
,powT[]={1,10,100,1000,10000,100000,10000000};
map<int,int> mark;

int main(){
  int i,j,t;
  while(1){
    scanf("%d %d",&num,&dig);
    mark.clear();
    t=1;
    mark[num]=t;
    if(num==0 && dig==0)
      break;
    while(1){
      t++;
      int temp=num;
      maxN=0;
      minN=0;
      for(i=0;i<dig;i++){
        hoge.push(temp%10);
        temp/=10;
      }
      for(i=0;i<dig;i++){
        maxN+=powT[dig-i-1]*hoge.top();
        minN+=powT[i]*hoge.top();
        hoge.pop();
      }
      num=maxN-minN;
      //cout<<maxN<<"-"<<minN<<"="<<num<<endl;
      if(mark[num]>0){
        printf("%d %d %d\n",mark[num]-1,num,t-mark[num]);
        break;
      }else{
        mark[num]=t;
      }
    }
  }
  return 0;
}