#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
int h=0,t=0,n;
string hs,ts;
cin >>n;
for(int i=0;i<n;i++){
cin >>hs >>ts;
if(ts==hs){
h++;
t++;
}
else if(ts>hs) t=t+3;
else h=h+3;
}
cout <<h <<" " <<t <<endl;
return 0;
}