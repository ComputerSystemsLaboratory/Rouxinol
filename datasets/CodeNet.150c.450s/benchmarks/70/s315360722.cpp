#include<iostream>
using namespace std;
int main(){
  int a,b;
  int day[12] = {0,3,4,0,2,5,0,3,6,1,4,6};
  while(cin >>a>>b,a||b){
    b+=day[a-1];
    switch(b%7){
    case 0:
      cout <<"Wednesday"<<endl;
      break;
    case 1:
      cout <<"Thursday"<<endl;
      break;
    case 2:
      cout <<"Friday"<<endl;
      break;
    case 3:
      cout <<"Saturday"<<endl;
      break;
    case 4:
      cout <<"Sunday"<<endl;
      break;
    case 5:
      cout <<"Monday"<<endl;
      break;
    case 6:
      cout <<"Tuesday"<<endl;
      break;
    }
  }
}