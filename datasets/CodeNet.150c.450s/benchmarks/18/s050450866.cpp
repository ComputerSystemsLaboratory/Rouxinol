#include <iostream>
#include<string>
#include<math.h>
#include<stdio.h>
#include <algorithm>
using namespace std;
int main(void){
    // Here your code !

int n;
int m=100000;
cin>>n;
for(;n--;){
if(int(m*1.05)%1000==0) m=int(m*1.05);
else m=int(m*1.05)+(1000-int(m*1.05)%1000); 
}

cout<<m<<endl;
return 0;
}