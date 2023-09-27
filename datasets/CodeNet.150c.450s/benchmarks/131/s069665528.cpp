#include<algorithm>
#include<iostream>
#include<string>
#include<map>
using namespace std;

string sub_string(string a,string b){
  string res = a;
  for(int i=b.size()-1;i>=0;i--){
    int n = a[i]-'0';
    int m = b[i]-'0';
    if(n-m<0){
      res[i] = n-m + '0' + 10;
      a[i-1]--;
    }else{
      res[i] = n-m + '0';
    }
  }
  return res;
}

int main(){
  string a;
  int n;
  map<string,int> list;
  while(cin>>a>>n,n!=0){
    list.clear();
    for(int i=a.size();i<n;i++){
      a='0'+a;
    }

    int c=0;
    while(!list.count(a)){
      list[a]=c;
      sort(a.rbegin(),a.rend());
      string max_s = a;
      string min_s(max_s.rbegin(),max_s.rend());
      a =  sub_string(max_s,min_s);
      c++;
    }

    cout<< list[a] << " " << stoi(a) << " " << c - list[a] << endl;
  }
}