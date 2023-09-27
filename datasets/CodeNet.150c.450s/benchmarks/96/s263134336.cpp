#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <cctype>
#include <cstdlib>
#define rep(i,a,b) for(int i=(a);i<b;i++)
#define INF 1000000000
using namespace std;
bool debug=true;

int main(){
  int n;
  string s[10]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

  cin>>n;
  for(int i=0;i<n;i++){
    //cout<<"DEBUG"<<endl;
    string ss;
    cin>>ss;
    int cnt=0;
    for(int j=0;j<ss.size();j++){
      if(ss[j]=='0'&&cnt!=0){
	int x=int(ss[j-1])-48;
	//cout<<x<<endl;
	cout<<s[x][(cnt-1)%int(s[x].size())];
	cnt=0;
      }else if(ss[j]=='0'&&cnt==0){
	cnt=0;
      }else{
	cnt++;
      }
    }
    cout<<endl;
  }
  
  return 0;
}