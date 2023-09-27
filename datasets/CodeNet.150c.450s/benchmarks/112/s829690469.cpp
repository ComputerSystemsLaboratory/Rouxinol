#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void){
  int n;
  while(cin >> n,n){
  vector<vector<char> > c(n,vector<char>(2));
  const int first = 0;
  const int second = 1;
  while(n--){
    cin>>c[n][first]>>c[n][second];
  }
  cin>>n;
  char in;
  string ans;
  while(n--){
    cin>>in;
    for(int i = 0 ; i < c.size() ; i ++){
      if(in == c[i][first]){
        in = c[i][second];
        break;
      }
    }
    ans+=in;
  }
  cout<<ans<<endl;
  }
}