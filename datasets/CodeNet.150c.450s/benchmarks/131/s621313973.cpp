#include<iostream>
#include<string>
#include<cstring>
#include<cstdio>
#include <sstream>
#include <cctype>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#define all(a) (a).begin(),(a).end()

using namespace std;


string toString(int a){
  ostringstream oss;
  oss << a;
  return oss.str();
}

int toInt(string s){
  istringstream iss(s);
  int a;
  iss >> a;
  return a;
}

vector<int> toVec(string s){
  vector<int>res;
  for(int i=s.size()-1;i>=0;i--){
    res.push_back(s[i]-'0');
  }
  return res;
}

int VecToInt(vector<int>v){
  int res=0;
  for(int i=0;i<v.size();i++){
    res+=v[i]*pow(10.,(double)v.size()-i-1);
  }
  return res;
}

int main(void){

  string a;
  int L;

  while(cin >> a >> L,L){
    int cnt=1;
    map<string,int> p;
    p[a]=cnt;

    while(true){

      if(a.size()<L)
	for(int i=a.size();i<L;i++)a+='0';
      
      vector<int>num=toVec(a);
      sort(all(num),greater<int>());
      int Max=VecToInt(num);
      
      sort(all(num));
      int Min=VecToInt(num);
      
      a=toString(Max-Min);

      if(p[a]>0){
	cout << p[a]-1 <<" "<<  a << " " << cnt-p[a]+1 << endl;
	break;
      }
      cnt++;
      p[a]=cnt;
    }
    
  }
  
  return 0;
}