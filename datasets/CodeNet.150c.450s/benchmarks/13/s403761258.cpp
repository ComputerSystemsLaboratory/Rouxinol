#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int> > vii;
typedef vector<string> vs;
#define ifr(i,n) for((i)=0;(i)<(n);i++)
#define dfr(i,n) for((i)=(n);(i)>=0;i--)
int main(){
  string str;
  cin>>str;
  str+=str;
  string search;
  cin>>search;
  for(int i=0;i<str.size();i++){
    if(search == str.substr(i,search.size())){
      cout<<"Yes"<<endl;
      break;
    }
    if(i==str.size()-1)
      cout<<"No"<<endl;
  }

  return 0;
}