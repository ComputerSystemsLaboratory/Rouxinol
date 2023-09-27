#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define dMAX 1000000
using namespace std;

int n;
int p[200],pSize, vSize;
int dp1[dMAX];
int dp2[dMAX];
int i,j;


int main(){

  for( pSize=0; pSize<200 ; pSize++ ){
    p[pSize]= pSize*(pSize+1)*(pSize+2)/6;
  }
  

  fill_n( dp1,dMAX,INT_MAX );
  fill_n( dp2,dMAX,INT_MAX );

  dp1[0]=0;
  for( i=1;i<pSize;i++){
    for( j=p[i];j<dMAX;j++ )
      dp1[j] = min( dp1[j],dp1[ j-p[i] ]+1 );
  }

  dp2[0]=0;
  for( i=1;i<pSize;i++){
    if( p[i] & 0x01 ){
      for( j=p[i];j<dMAX;j++ )
	dp2[j] = min( dp2[j],dp2[ j-p[i] ]+1 );
    }
  }

  while( cin>>n && n )
    cout << dp1[ n ] << " " << dp2[ n ] << endl;

  return 0;
}