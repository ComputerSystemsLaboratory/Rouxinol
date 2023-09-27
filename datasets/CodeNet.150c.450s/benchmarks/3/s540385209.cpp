#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
  char str[1001],p[1001];
  string command;
  int q,i,a,b,j,c,k;

  cin >> str;
  cin >> q;
  
  for(i=0;i<q;i++){
    cin >> command;
    if( command != "replace" ) cin >> a >> b;
    else{
      cin >> a >> b >> p;
    }

    if( command=="print" ){
      for(j=a;j<=b;j++){
	cout << str[j];
      }
      cout << endl;
    }else if( command=="reverse" ){
      double n = (b-a)/2.0;
      n = ceil( n );
      
      for(k=a,j=b,c=0;c<n;k++,j--,c++){
	char dummy = str[k];
	str[k] = str[j];
	str[j] = dummy;
      }
    }else{
      for(j=a,k=0;j<=b;j++,k++){
	str[j]=p[k];
      }
    }
  }
  return 0;
}