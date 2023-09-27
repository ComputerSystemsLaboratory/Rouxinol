#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
  int m,d,mlist[12]={31,29,31,30,31,30,31,31,30,31,30,31},dsum;
  string res;
  while(cin>>m>>d){
    dsum=0;
    if(!m)return 0;
    for(int i=0;i<m;i++){
      dsum+=(i+1!=m)?mlist[i]:d;
    }
    //1 Thur 2 Fri 3 Satu 4 Sun 5 Mon 6 Tues 0 Wed
    switch(dsum%7)
      {
      case 0:
	res="Wednesday";
	break;
      case 1:
	res="Thursday";
	break;
      case 2:
	res="Friday";
	break;
      case 3:
	res="Saturday";
	break;
      case 4:
	res="Sunday";
	break;
      case 5:
	res="Monday";
	break;
      case 6:
	res="Tuesday";
	break;
      }
    cout<<res<<endl;
  }
}