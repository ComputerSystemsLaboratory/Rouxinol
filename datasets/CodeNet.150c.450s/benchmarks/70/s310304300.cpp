#include<iostream>
using namespace std;
int main(){
  int tuki[13]={0,0,31,60,91,121,152,182,213,244,274,305,335};
  string cal[400];
  cal[1]="Thursday";cal[2]="Friday";cal[3]="Saturday";cal[4]="Sunday";
  cal[5]="Monday";cal[6]="Tuesday";cal[7]="Wednesday";
  for(int i=1;i<=366;i++)
    cal[i+7]=cal[i];
  int a,b;
  while(cin>>a>>b,a+b)
    cout<<cal[tuki[a]+b]<<endl;
  return 0;
}