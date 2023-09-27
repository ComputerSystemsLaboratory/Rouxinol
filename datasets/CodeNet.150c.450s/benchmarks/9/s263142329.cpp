#include <iostream>
#include <string>
using namespace std;

int main(){
 int h,mh;
 string m;

 while(1){
  cin >> m ;
  if(m=="-")break;
  cin >> h ;
  for(int i=0;i<h;i++){
   cin >> mh ;
   m=m.substr(mh)+m.substr(0,mh);
  }
  cout << m << endl ;
 }

 return 0;
}