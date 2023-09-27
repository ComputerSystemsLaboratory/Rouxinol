#include<iostream>
#include<string>
using namespace std;
int main(){
  int n,A=0,B=0,C=0,D=0;
  cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    if(s=="AC"){
    A++;
   }
 
       if(s=="WA"){
    B++;
  }

                 if(s=="TLE"){
    C++;
  }

     if(s=="RE"){
    D++;
  }
 
  }
  
   cout<<"AC"<<" x "<<A<<endl; 
    cout<<"WA"<<" x "<<B<<endl; 
             cout<<"TLE"<<" x "<<C<<endl; 
             cout<<"RE"<<" x "<<D<<endl; 
  return 0;
}         
        