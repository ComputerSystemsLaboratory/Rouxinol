#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
  string sa,sb;
  int w,n,a,b,c;
  cin>>w>>n;
  int num[w];
  for(int i=0;i<w;i++)
    num[i] = i+1;
  for(;n>0;n--){
    getline(cin,sa,',');
    getline(cin,sb,'\n');
    a = atoi(sa.c_str())-1;
    b = atoi(sb.c_str())-1;
    c = num[a];
    num[a] = num[b];
    num[b] = c;
  }
  for(int i=0;i<w;i++)
    cout << num[i] << endl;
  return 0;
}