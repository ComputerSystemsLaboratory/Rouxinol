#include<iostream>
using namespace std;
int main(){
  int m,d;
  while(cin >> m >> d){
    if(m==0)
      break;
    int cd=d;
    for(int i=1;i<=m;i++){
      switch(i){
      case 2:cd+=31;break;
      case 3:cd+=29;break;
      case 4:cd+=31;break;
      case 5:cd+=30;break;
      case 6:cd+=31;break;
      case 7:cd+=30;break;
      case 8:cd+=31;break;
      case 10:cd+=30;break;
      case 9:cd+=31;break;
      case 11:cd+=31;break;
      case 12:cd+=30;break;
      }
    }
    switch(cd%7){
    case 0:cout << "Wednesday" << endl;break;
    case 1:cout << "Thursday" << endl;break;
    case 2:cout << "Friday" << endl;break;
    case 3:cout << "Saturday" << endl;break;
    case 4:cout << "Sunday" << endl;break;
    case 5:cout << "Monday" << endl;break;
    case 6:cout << "Tuesday" << endl;break;
    }
  }
}