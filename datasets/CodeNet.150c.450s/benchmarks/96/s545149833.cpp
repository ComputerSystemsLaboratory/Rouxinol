//Keitai Message
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int size[9]={5, 3, 3, 3, 3, 3, 4, 3, 4};
char a[9][5]={{'.', ',', '!', '?', ' '},
              {'a', 'b', 'c'},
              {'d', 'e', 'f'},
              {'g', 'h', 'i'},
              {'j', 'k', 'l'},
              {'m', 'n', 'o'},
              {'p', 'q', 'r', 's'},
              {'t', 'u', 'v'},
              {'w', 'x', 'y', 'z'}};

int main(){
  int n;
  cin>>n;
  rep(i,n){
    string s;
    cin>>s;
    int c=0, cnt=0;
    rep(j,s.length()){
      if(s[j]=='0'){
        if(c==0)continue;
        cout<<a[c-1][(cnt-1)%size[c-1]];
        c=0; cnt=0;
      }
      else{
        c=(s[j]-'0');
        cnt++;
      }
    }
    cout<<endl;
  }
  return 0;
}