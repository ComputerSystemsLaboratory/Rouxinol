#include<iostream>
using namespace std;
int main(){
  int n,m;
  int x[12] = {0,3,4,0,2,5,0,3,6,1,4,6};
  while(cin >>n>>m,n||m){
    if((m+x[n-1])%7 == 1) cout <<"Thursday"<<endl;
    if((m+x[n-1])%7 == 2) cout <<"Friday"<<endl;
    if((m+x[n-1])%7 == 3) cout <<"Saturday"<<endl;
    if((m+x[n-1])%7 == 4) cout <<"Sunday"<<endl;
    if((m+x[n-1])%7 == 5) cout <<"Monday"<<endl;
    if((m+x[n-1])%7 == 6) cout <<"Tuesday"<<endl;
    if((m+x[n-1])%7 == 0) cout <<"Wednesday"<<endl;
  }
  return 0;
}