#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<algorithm>

using namespace std;

int gomipeople[30];


    int main(){
       int people;
       for(int i=0;i<28;i++){
        cin>>people;
        gomipeople[people]=1;
       }
      
       for(int i=1;i<31;i++){
        if(gomipeople[i]==0){
             cout<<i<<endl;
        }
       }
     return 0;
    }