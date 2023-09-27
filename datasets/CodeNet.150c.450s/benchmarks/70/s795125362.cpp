#include <iostream>
using namespace std;

int main(){
  int m,d;
  string w[7] = {
    "Thursday","Friday","Saturday","Sunday",
    "Monday","Tuesday","Wednesday",
 };
  int p[12] = { 
    31,29,31,30,31,30,
    31,31,30,31,30,31 };


  while( cin>>m>>d && (m) ){
    --d;
    for( int i=0;i+1<m;i++ )
      d += p[i];
    //    cout << "d="<<d<<endl;

    cout << w[ d%7 ] << endl;
  }

  return 0;
}