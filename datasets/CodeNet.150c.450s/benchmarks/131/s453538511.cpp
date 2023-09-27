#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
#include<map>
#include<iostream>
using namespace std;
int N;
int to_int(string s){
  int res;
  stringstream ss;
  ss<<s;
  ss>>res;
  return res;
}

string int_to_string(int n){
  stringstream ss;
  ss<<n;
  string res;
  ss>>res;
  for(int i=res.size();i<N;i++){
    res='0'+res;
  }
  return res;
}
int main(){
  string s;
  
  while(cin>>s>>N,N!=0){
    s = int_to_string(to_int(s));
    map<string,int> list;
    int c=0;
    while(list.count(s)==0){
      list[s]=c;
      sort(s.rbegin(),s.rend());
      int max_s = to_int(s);
      int min_s = to_int(string(s.rbegin(),s.rend()));
      s = int_to_string(max_s-min_s);
      c++;
    }
    cout<<list[s]<<" "<<to_int(s)<<" "<<c-list[s]<<endl;
  }
}