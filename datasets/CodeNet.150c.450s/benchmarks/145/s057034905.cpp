//48
#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

bool cmp(pair<string,int> a,pair<string,int> b){
  return a.second<b.second;
}

int main(){
  string ml;
  map<string,int> wc;
  for(string s;cin>>s;){
    if(ml.size()<s.size()){
      ml=s;
    }
    wc[s]++;
  }
  cout<<max_element(wc.begin(),wc.end(),cmp)->first<<' '<<ml<<endl;
  return 0;
}