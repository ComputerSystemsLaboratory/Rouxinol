#include<iostream>
#include<string>
using namespace std;

void bo(int,int);

void bo(int t,int m){
  if(t==1){
    if(m%5==1) cout<<".";
  else if(m%5==2) cout<<",";
  else if(m%5==3)cout<<"!";
  else if(m%5==4)  cout<<"?";
  else cout<<" ";
  }else if(t==2){
    if(m%3==1) cout<<"a";
    else if(m%3==2) cout<<"b";
    else cout<<"c";
  }else if(t==3){
    if(m%3==1) cout<<"d";
    else if(m%3==2) cout<<"e";
    else cout<<"f";
  }else if(t==4){
    if(m%3==1) cout<<"g";
    else if(m%3==2) cout<<"h";
    else cout<<"i";
  }else if(t==5){
    if(m%3==1) cout<<"j";
    else if(m%3==2) cout<<"k";
    else cout<<"l";
  }else if(t==6){
    if(m%3==1) cout<<"m";
    else if(m%3==2) cout<<"n";
    else cout<<"o";
  }else if(t==7){
    if(m%4==1) cout<<"p";
    else if(m%4==2) cout<<"q";
    else if(m%4==3) cout<<"r";
    else cout<<"s";
  }else if(t==8){
    if(m%3==1) cout<<"t";
    else if(m%3==2) cout<<"u";
    else cout<<"v";
  }else if(t==9){
    if(m%4==1) cout<<"w";
    else if(m%4==2) cout<<"x";
    else if(m%4==3) cout<<"y";
    else cout<<"z";
  }
}
		     
int main(){
  string str;
  int n;
  cin>>n;
  int cou=0;
  for(int i=0;i<n;i++){
  cin>>str;
  for(int j=0;j<str.size();j++){
    if( j>0 && str[j]=='0' ){
	bo(str[j-1]-'0',cou);
      cou=0;
      continue;
    }
    else if(str[j]!='0') cou++;
  }
  cout<<endl;
  }
  return 0;
}