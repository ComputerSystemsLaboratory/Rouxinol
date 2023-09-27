#include <iostream>
using namespace std;

int main(){
  int a,b,sum;
  while(1){
    cin >> a >> b;
    if(a==0&&b==0)break;
    sum=0;
    for(int i=1;i<a;i++){
      if(i==2)sum+=29;
      else if(i==4||i==6||i==9||i==11)sum+=30;
      else sum+=31;
    }
    sum+=b;
    if(sum%7==1)cout <<"Thursday"<<endl;
    else if(sum%7==2)cout <<"Friday"<<endl;
    else if(sum%7==3)cout <<"Saturday"<<endl;
    else if(sum%7==4)cout <<"Sunday"<<endl;
    else if(sum%7==5)cout <<"Monday"<<endl;
    else if(sum%7==6)cout <<"Tuesday"<<endl;
    else if(sum%7==0)cout <<"Wednesday"<<endl;
  }
  return 0;
}