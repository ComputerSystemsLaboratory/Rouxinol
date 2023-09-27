#include<iostream>
using namespace std;
int main(){
long n,m;
while(cin>>n,n){
n=1000-n;m=0;
while(n>=500){m++;n-=500;}
while(n>=100){m++;n-=100;}
while(n>=50){m++;n-=50;}
while(n>=10){m++;n-=10;}
while(n>=5){m++;n-=5;}
while(n>=1){m++;n--;}
cout<<m<<endl;
}
return 0;
}