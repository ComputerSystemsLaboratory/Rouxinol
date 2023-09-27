#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

  int a,b,q;
  string str,command,s;
  cin >>str>>q;
  for(int i=0;i<q;i++){
    cin >>command>>a>>b;
    if(command=="print"){
      cout <<str.substr(a,b-a+1)<<endl;}
    else if(command=="reverse"){
      reverse(str.begin()+a,str.begin()+b+1);
    }
    else if(command=="replace"){
      cin >>s;
      str.replace(str.begin()+a,str.begin()+b+1,s);
    }
      
  }


    return 0;
  }
      

    