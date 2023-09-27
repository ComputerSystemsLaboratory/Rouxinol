#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    string c="";
    int cnt=0;
    char t[5];
    for(int i=0; i<s.size(); i++){
      cnt=0;
      if(s[i]=='1'){
        t[0]='.',t[1]=',',t[2]='!',t[3]='?',t[4]=' ';
        while(1){
          if(s[i]==s[i+1]){i++,cnt++;}
          else{break;}
        }
        if(s[i+1]=='0'){c+=t[cnt%5];}
      }
      else if(s[i]=='2'){
        t[0]='a',t[1]='b',t[2]='c';
        while(1){
          if(s[i]==s[i+1]){i++,cnt++;}
          else{break;}
        }
        if(s[i+1]=='0'){c+=t[cnt%3];}
      }
      else if(s[i]=='3'){
        t[0]='d',t[1]='e',t[2]='f';
        while(1){
          if(s[i]==s[i+1]){i++,cnt++;}
          else{break;}
        }
        if(s[i+1]=='0'){c+=t[cnt%3];}
      }
      else if(s[i]=='4'){
        t[0]='g',t[1]='h',t[2]='i';
        while(1){
          if(s[i]==s[i+1]){i++,cnt++;}
          else{break;}
        }
        if(s[i+1]=='0'){c+=t[cnt%3];}
      }
      else if(s[i]=='5'){
        t[0]='j',t[1]='k',t[2]='l';
        while(1){
          if(s[i]==s[i+1]){i++,cnt++;}
          else{break;}
        }
        if(s[i+1]=='0'){c+=t[cnt%3];}
      }
      else if(s[i]=='6'){
        t[0]='m',t[1]='n',t[2]='o';
        while(1){
          if(s[i]==s[i+1]){i++,cnt++;}
          else{break;}
        }
        if(s[i+1]=='0'){c+=t[cnt%3];}
      }
      else if(s[i]=='7'){
        t[0]='p',t[1]='q',t[2]='r',t[3]='s';
        while(1){
          if(s[i]==s[i+1]){i++,cnt++;}
          else{break;}
        }
        if(s[i+1]=='0'){c+=t[cnt%4];}
      }
      else if(s[i]=='8'){
        t[0]='t',t[1]='u',t[2]='v';
        while(1){
          if(s[i]==s[i+1]){i++,cnt++;}
          else{break;}
        }
        if(s[i+1]=='0'){c+=t[cnt%3];}
      }
      else if(s[i]=='9'){
        t[0]='w',t[1]='x',t[2]='y',t[3]='z';
        while(1){
          if(s[i]==s[i+1]){i++,cnt++;}
          else{break;}
        }
        if(s[i+1]=='0'){c+=t[cnt%4];}
      }
    }
    cout<<c<<endl;
  }
}
