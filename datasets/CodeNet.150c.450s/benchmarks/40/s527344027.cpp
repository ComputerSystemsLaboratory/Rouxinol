#include<iostream>
#include<math.h>
#include<string>
using namespace std;

int main(){

int s[6];
string com;

cin>>s[0]>>s[1]>>s[2]>>s[3]>>s[4]>>s[5];
cin>>com;

for(int i=0;i<com.size();i++){

 if(com[i]=='S'){
 swap(s[0],s[4]);
 swap(s[4],s[5]);
 swap(s[5],s[1]);
  }else if(com[i]=='E'){
 swap(s[0],s[2]);
 swap(s[0],s[3]);
 swap(s[3],s[5]);
  }else if(com[i]=='W'){
 swap(s[0],s[2]);
 swap(s[2],s[5]);
 swap(s[5],s[3]);
  }else{
 swap(s[0],s[4]);
 swap(s[0],s[1]);
 swap(s[1],s[5]);
 }

}

cout<<s[0]<<endl;

}
