#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string intstring(int n, int L){
  string s="";
  int pow=1;
  for(int i=0;i<L-1;i++)pow*=10;
  for(;pow;pow/=10){
    s += '0' + n/pow;
    n %= pow;
  }
  return s;
}

int stringint(string s){
  int n=0;
  int pow=1;
  for(int i=0;i<s.size();i++){
    n += pow * (s[s.size()-i-1]-'0');
    pow*=10;
  }
  return n;
}

int main()
{
  int A,L;
  while(cin>>A>>L,A|L){
    vector<string>used;
    string s = intstring(A,L);
    string large,small;
    used.push_back(s);
    bool find=false;
    for(int i=0;!find;i++){
      small = large = s;
      sort(small.begin(),small.end());
      sort(large.begin(),large.end(),greater<char>());
      s = intstring( stringint(large)-stringint(small), L );
      for(int j=0;j<used.size();j++){
	if(used[j]!=s)continue;
	find = true;
	cout<<j<<" "<<stringint(s)<<" "<<i-j+1<<endl;
      }
      used.push_back(s);
    }
  }
}