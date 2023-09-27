#include <bits/stdc++.h>
using namespace std;

int main(){

 int n;
 cin>>n;
 
  for(int i=0;i<n;i++){
  
   int Y,M,D,S;
   cin>>Y>>M>>D;
  
   if(Y%3==0){
    if(M%2==0){
    Y=Y/3-1;
    M=M/2-1;
    S=196471-Y*590-390-M*40-20-D;
    cout<<S<<endl;
    }
    else{
    Y=Y/3-1;
    M=M/2;
    S=196471-Y*590-390-M*40-D;
    cout<<S<<endl;
    }
   }
   else if(Y%3==1){
    if(M%2==0){
    Y=Y/3;
    M=M/2-1;
    S=196471-Y*590-M*39-20-D;
    cout<<S<<endl;
    }
    else{
    Y=Y/3;
    M=M/2;
    S=196471-Y*590-M*39-D;
    cout<<S<<endl;
    }
   }
   else if(Y%3==2){
    if(M%2==0){
    Y=Y/3;
    M=M/2-1;
    S=196471-Y*590-195-M*39-20-D;
    cout<<S<<endl;
    }
    else{
    Y=Y/3;
    M=M/2;
    S=196471-Y*590-195-M*39-D;
    cout<<S<<endl;
    }
   }
  }
}
