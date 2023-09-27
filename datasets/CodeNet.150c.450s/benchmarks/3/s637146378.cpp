//topic9d
#include<bits/stdc++.h>
using namespace std;

string Replace(string s,int a,int b,string t){
  for(int i=a;i<=b;i++){
    s[i]=t[i-a];
  }
  return s;
}

string Reverse(string s,int a,int b){
  int i=a;
  int j=b;
  while(i<j){
    swap(s[i],s[j]);
    i++;
    j--;  
  }
  return s;
}

void Print(string s,int a,int b){
  for(int i=a;i<=b;i++){
    cout<<s[i];
  }
  cout<<endl;
}

int main(){
  string str;
  cin>>str;
  int q;
  cin>>q;
  for(int i=0;i<q;i++){
    string command;
    cin>>command;
    int a,b;
    cin>>a>>b;
    if(command=="replace"){
      string t;
      cin>>t;
      str=Replace(str,a,b,t);
    }else if(command=="reverse"){
      str=Reverse(str,a,b);
    }else if(command=="print"){
      Print(str,a,b);
    }
  }
  return 0;
}

