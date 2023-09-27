#include <iostream>
#include <string>
using namespace std;
int main(){
int n;
int m;
while(cin >>n>>m){
if(n==0){break;}
if(n==2){n=m+31;}
if(n==3){n=m+60;}
if(n==4){n=m+91;}
if(n==5){n=m+121;}
if(n==6){n=m+152;}
if(n==7){n=m+182;}
if(n==8){n=m+213;}
if(n==9){n=m+244;}
if(n==10){n=m+274;}
if(n==11){n=m+305;}
if(n==12){n=m+335;}
n=n%7;
if(n==1){cout <<"Thursday";}
if(n==2){cout <<"Friday";}
if(n==3){cout <<"Saturday";}
if(n==4){cout <<"Sunday";}
if(n==5){cout <<"Monday";}
if(n==6){cout <<"Tuesday";}
if(n==0){cout <<"Wednesday";}
cout <<endl;}}