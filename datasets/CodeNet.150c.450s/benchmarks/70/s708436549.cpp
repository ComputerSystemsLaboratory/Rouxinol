#include<iostream>
#include<string>
using namespace std;

int main(){
int a,b,day;
string Day;
int days[]={31,29,31,30,31,30,31,31,30,31,30,31};
string Days[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
while(cin>>a>>b){
	if(a==0)break;
day=4;
for(int i=0;i<11;i++){
if(a>i+1)b+=days[i];}
day+=b-1;
day%=7;
for(int i=0;i<7;i++){
if(day==i)Day=Days[i];}
cout<<Day<<endl;}}