#include <iostream>
using namespace std;

int main(){
  int m, d;
  int days[]={0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335, 366};

  while(cin>>m>>d){
    if(m==0) break;
    d+=days[m-1];
    d%=7;
    switch(d){
    case 0: printf("Wednesday\n"); break;
    case 1: printf("Thursday\n"); break;
    case 2: printf("Friday\n"); break;
    case 3: printf("Saturday\n"); break;
    case 4: printf("Sunday\n"); break;
    case 5: printf("Monday\n"); break;
    case 6: printf("Tuesday\n");
    }
  }

  return 0;
}