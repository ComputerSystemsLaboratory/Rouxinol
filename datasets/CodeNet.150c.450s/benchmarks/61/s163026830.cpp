#include <iostream>
using namespace std;

int main(){
  int n,a,b,c,x;
  int y[110];

  while( cin>>n>>a>>b>>c>>x &&(n|a|b|c|x) ){
    for( int i=0;i<n;i++ )
      cin >> y[i];

    int frame, k=0;
    for( frame=0;frame<=10000;frame++ ){
      if( x==y[k] ){
	k++;
	if(k==n ) break;
      }
      x=( a*x+b )%c;
    }
    if( frame>10000 )
      cout << "-1" << endl;
    else
      cout << frame<< endl;
  }
  return 0;
}