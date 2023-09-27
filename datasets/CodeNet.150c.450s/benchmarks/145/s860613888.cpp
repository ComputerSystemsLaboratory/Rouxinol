#include<iostream>
#include<string>
#include<map>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
  map<string,int> str;
  string word;
  int big = 0;
  int cnt = 0;
  string keepword;
  string keepstr = "";
  string many = "";
  
  while(!cin.eof()){
    cin >> word;
    string kari(word);
    str[kari]++;
    
    if(cnt < str[kari]){
      cnt = str[kari];
      keepstr = kari;
    }
    
    if(big < word.size()){
      big = word.size();
      keepword = word;
    }
  }
  cout << keepstr << " " << keepword << endl;
}