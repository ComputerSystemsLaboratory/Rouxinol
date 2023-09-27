#include <iostream>
#define DEBUG false
using namespace std;

int nn, s;
int cmb;

void count( int n ,int k,int sa ){
  if( sa>s )
    return;

  if( DEBUG )
    cout << "n="<<n<<" k="<< k << " sa="<<sa 
	 << " cmb="<<cmb << endl;
  if( n==nn ){
    if( sa==s ) ++cmb;
    return;
  }

  for( int i=k;i<=9;i++ ){
    count( n+1,i+1, sa+i );
  }
}


int main(){
  while( cin>>nn>>s && (nn||s) ){
    if( DEBUG )
      cout << "\nnn="<<nn<<" s="<<s << endl;
    cmb = 0;
    count( 0,0,0 );
    cout << cmb << endl;
  }

  return 0;
}