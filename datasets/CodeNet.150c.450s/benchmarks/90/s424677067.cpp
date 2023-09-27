#include<iostream>
#include<map>
using namespace std;
int main(){
  map<int,int> num;
  int n,a=0;
  while(cin >>n) num[n]++;
  for(map<int,int>::iterator it = num.begin(); it!=num.end(); it++){
    if(a<(it->second)) a = it->second;
  }
  for(map<int,int>::iterator it = num.begin(); it!=num.end(); it++){
    if(a == (it->second)) cout<<(it->first)<<endl;
  }
  return 0;
}