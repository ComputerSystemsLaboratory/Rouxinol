#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <queue>
using namespace std;

void p(int nu, int key){
//cout<<"dckjw"<<nu<<" "<<key<<endl;
string s[10]={"",".,!?","cab","fde","igh","ljk","omn","spqr","vtu","zwxy"};
if(key==1){
nu=nu%5;
if(nu==0) cout<<" ";
else cout<<s[1][nu-1];
}
if(key==2){
nu=nu%3;
//cout<<s[2];
cout<<s[2][nu];
}
if(key==3){
nu=nu%3;
cout<<s[3][nu];
}
if(key==4){
nu=nu%3;
cout<<s[4][nu];
}
if(key==5){
nu=nu%3;
cout<<s[5][nu];
}
if(key==6){
nu=nu%3;
cout<<s[6][nu];
}
if(key==7){
nu=nu%4;
cout<<s[7][nu];
}
if(key==8){
nu=nu%3;
cout<<s[8][nu];
}
if(key==9){
//cout<<"9ban "<<nu<<endl;
nu=nu%4;
cout<<s[9][nu];
}


}
int main(){
string s;
int n,l;
cin>>n;
for(int www=0;www<n;www++){
cin>>s;
l=s.length();
int nu=1,key;
key=s[0]-'0';


for(int j=0;j<l-1;j++){
if(s[j]!=s[j+1]){
p(nu,key);
nu=1;
key=s[j+1]-'0';
}
else{
nu++;
}

}
p(nu,key);
cout<<endl;
}
return 0;
}