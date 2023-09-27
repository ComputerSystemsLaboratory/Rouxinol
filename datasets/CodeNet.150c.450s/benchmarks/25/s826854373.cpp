//itp1_topic8_c
#include <bits/stdc++.h>
using namespace std;

int main(){
  int kosuu[1200]={},num;
  char a;

  while(cin>>a){
    if(a<='z'&&a>='a'){
      num=a-'a';
      kosuu[num]++;
    }
    else if(a<='Z'&&a>='A'){
      num=a-'A';
      kosuu[num]++;
    }

  }
  a='a';

  for(int i=0;i<26;i++){
    cout<<(char)(a+i)<<" : "<<kosuu[i]<<endl;
  }

  return 0;
}

