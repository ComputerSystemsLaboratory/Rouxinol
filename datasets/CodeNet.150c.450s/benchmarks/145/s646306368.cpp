#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main()
{
  int i = 0;
  string str;
  string freqstr;//最頻文字
  string longest;
  map<string,int> Map;
  while(cin >>str){
    if(i < ++Map[str]){
      i = Map[str];
      freqstr = str;
  }
    if(str.size() > longest.size())
      longest = str;
  }
  cout <<freqstr <<" "<<longest<<endl;
  return 0;
}