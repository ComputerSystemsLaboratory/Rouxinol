#include<iostream>
using namespace std;

int main(){
  int m,d;
  int M[]={0,31,29,31,30,31,30,31,31,30,31,30,31};

  while(cin>>m>>d){
    if(m==0)break;
    int day=2;
    for(int i=m-1;i>0;i--){
      day+=M[i];
    }
    day+=d;
    if(day%7==0)cout<<"Monday"<<endl;
    if(day%7==1)cout<<"Tuesday"<<endl;
    if(day%7==2)cout<<"Wednesday"<<endl;
    if(day%7==3)cout<<"Thursday"<<endl;
    if(day%7==4)cout<<"Friday"<<endl;
    if(day%7==5)cout<<"Saturday"<<endl;
    if(day%7==6)cout<<"Sunday"<<endl;
  }
  return 0;
}