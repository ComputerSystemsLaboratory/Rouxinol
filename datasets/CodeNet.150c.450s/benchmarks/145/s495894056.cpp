#include<iostream>
#include<map>
#include<string>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
  int max = 0, longest=0,i;
  map<string,int> word, cnt;
  string s, max_s, longest_s;
  while(cin>>s){
    word[s]++;
    if(word[s]>max){
      max = word[s];
      max_s = s;
    }
    i=0;
    while(s[i] != '\0' && s[i] != '\n'){
      i++;
    }
    cnt[s] = i;
    if(cnt[s]>longest){
      longest=cnt[s];
      longest_s=s;
    }
  }  
  cout<<max_s<<' '<<longest_s<<endl;
  return 0;
}
  