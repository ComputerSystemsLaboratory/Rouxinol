#include<bits/stdc++.h>
using namespace std;
int main(){
 string s,s1;
 int m;
 cin>>m;
 for(int j=0;j<m;j++){
  int ans=0,a=1;
  cin>>s>>s1;
  for(int i=0;i<s.size();i++){   
   if(s[i]=='m'){ans+=a*1000; a=1;}
   else if(s[i]=='c'){ans+=a*100; a=1;}
   else if(s[i]=='x'){ans+=a*10; a=1;}
   else if(s[i]=='i'){ans+=a; a=1;}
   else a=(int)(s[i])-48;
  }
  a=1;
  for(int i=0;i<s1.size();i++){
   if(s1[i]=='m'){ans+=a*1000; a=1;}
   else if(s1[i]=='c'){ans+=a*100; a=1;}
   else if(s1[i]=='x'){ans+=a*10; a=1;}
   else if(s1[i]=='i'){ans+=a; a=1;}
   else a=(int)(s1[i])-48;   
  }

  int cnt=0,cnt1=0,cnt2=0;

  while(1){
   if(ans>=1000){
    ans-=1000;
    cnt++;
   }
   else if(ans>=100){
    ans-=100;
    cnt1++;
   }
   else if(ans>=10){
    ans-=10;
    cnt2++;
   }
   else break;
  }
   
  if(cnt!=0){
   if(cnt!=1)cout<<cnt;
   cout<<'m';
  }
  if(cnt1!=0){
   if(cnt1!=1)cout<<cnt1;
   cout<<'c';
  }
  if(cnt2!=0){
   if(cnt2!=1)cout<<cnt2;
   cout<<'x';
  }
  if(ans!=0){
   if(ans!=1)cout<<ans;
   cout<<'i';
  }
  cout<<endl;  
 }  
 return 0;
}