#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
vector<string> c;
map<string,int> s;
int main(void)
{
  string str;
  while(cin >> str){
    s[str]++;
    if(s[str]==1) c.push_back(str);
  }
  int fbest=0,lbest=0;
  for(int i=1;i<c.size();i++){
    if(s[c[fbest]]<s[c[i]])fbest=i;
    if(c[lbest].size()<c[i].size())lbest=i;
  }
  cout << c[fbest] << " " << c[lbest] << endl;
}