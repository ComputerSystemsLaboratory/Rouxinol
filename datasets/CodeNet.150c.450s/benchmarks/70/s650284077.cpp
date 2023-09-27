#include<iostream>
using namespace std;
int main(){
  int month[12] = {0,3,4,0,2,5,0,3,6,1,4,6};
  int m,d;
  while(cin >>m>>d,m||d){
    d = (d+month[m-1])%7;
    if(d == 1){cout <<"Thursday"<<endl;}
    if(d == 2){cout <<"Friday"<<endl;}
    if(d == 3){cout <<"Saturday"<<endl;}
    if(d == 4){cout <<"Sunday"<<endl;}
    if(d == 5){cout <<"Monday"<<endl;}
    if(d == 6){cout <<"Tuesday"<<endl;}
    if(d == 0){cout <<"Wednesday"<<endl;}
  }
  return 0;
}