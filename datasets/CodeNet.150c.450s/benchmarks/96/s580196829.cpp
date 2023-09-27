#include<bits/stdc++.h>
using namespace std;
int main(){
  char button[11][11]={
    {'.',',','!','?',' '},
    {'a','b','c'},
    {'d','e','f'},
    {'g','h','i'},
    {'j','k','l'},
    {'m','n','o'},
    {'p','q','r','s'},
    {'t','u','v'},
    {'w','x','y','z'}
  };
  int n;
  cin>>n;
  for(int j=0;j<n;j++){
    string s;
    cin>>s;
    int cnt=0,index=-1;
    for(int i=0;i<s.size();i++){
      if(s[i]=='0'){
        if(index==-1){
          cnt=0;
          continue;
        }
        cnt--;
        cnt%=strlen(button[index]);
        cout<<button[index][cnt]<<flush;
        cnt=0;
        index=-1;
      }else{
        cnt++;
        index=s[i]-'1';
      }
    }
    cout<<endl;
  }
  return 0;
}
