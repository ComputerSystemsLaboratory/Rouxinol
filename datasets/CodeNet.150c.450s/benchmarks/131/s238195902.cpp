#include <iostream>
#include <cstring>
#include <sstream>
#include <map>
#include <algorithm>
using namespace std;

int toInt(const char *a){
  stringstream ss;
  int b;
  string s(a);
  ss<<s;
  ss>>b;
  return b;
}

string toStr(int a){
  stringstream ss;
  ss<<a;
  string s;
  ss>>s;
  return s;
}

int main(void){
  string a;
  int l;
  while(cin>>a>>l,a!="0"||l){
    map<string,int> v;
    for(int i=0;;++i){
      for(;a.size()<l;)a="0"+a;
      if(v.find(a)!=v.end()){cout<<v[a]<<" "<<toInt(a.c_str())<<" "<<i-v[a]<<endl;break;}
      v[a]=i;
      char *min,*max;
      min=(char *)malloc((l+1)*sizeof(char));
      max=(char *)malloc((l+1)*sizeof(char));
      strcpy(min,a.c_str());
      strcpy(max,a.c_str());
      sort(min,min+l);
      sort(max,max+l,greater<char>());
      a=toStr(toInt(max)-toInt(min));
      free(min);
      free(max);
    }
  }
  return 0;
}