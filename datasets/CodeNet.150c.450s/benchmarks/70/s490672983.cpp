#include "bits/stdc++.h"
using namespace std;

int main(){
  int a,b,WD;
  while(cin>>a>>b){
    if(a==0){WD=8;break;}
    else if ((a==1)||(a==4)||(a==7))WD=(b+3)%7;
    else if ((a==2)||(a==8))WD=(b+6)%7;
    else if ((a==3)||(a==11))WD=b%7;
    else if (a==5)WD=(b+5)%7;
    else if (a==6)WD=(b+1)%7;
    else if ((a==9)||(a==12))WD=(b+2)%7;
    else if (a==10)WD=(b+4)%7;
    if(WD==0){
      cout <<"Sunday"<<endl;
    }
    else if(WD==1){
      cout <<"Monday"<<endl;
    }
    else if(WD==2){
      cout <<"Tuesday"<<endl;
    }
    else if(WD==3){
      cout <<"Wednesday"<<endl;
    }
    else if(WD==4){
      cout <<"Thursday"<<endl;
    }
    else if(WD==5){
      cout <<"Friday"<<endl;
    }
     else if(WD==6){
      cout <<"Saturday"<<endl;
    }
  }
  return 0;
}


