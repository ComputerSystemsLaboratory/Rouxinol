#include "bits/stdc++.h"
using namespace std;

int main(){
int m,f,r;
while(true){
cin>>m>>f>>r;
if(m==-1&&f==-1&&r==-1){return 0;}
if(m==-1||f==-1){cout<<"F"<<endl;continue;}
if(m+f>=80){cout<<"A"<<endl;continue;}
if(m+f>=65){cout<<"B"<<endl;continue;}
if(m+f>=50){cout<<"C"<<endl;continue;}
if(m+f>=30&&r>=50){cout<<"C"<<endl;continue;}
if(m+f>=30){cout<<"D"<<endl;continue;}
if(m+f<30){cout<<"F"<<endl;continue;}
}
}