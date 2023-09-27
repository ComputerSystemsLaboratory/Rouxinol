#include<iostream>
#include<string.h>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<utility>
#include<set>
#define ll long long int
#define ld long double
#define INF 1000000000
#define EPS 0.0000000001
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
typedef pair<int, int> pii;

int main()
{
  int h,w;
  int i,j;
  while(1){
    cin>>h>>w;
    if(h==0 && w==0)break;
    int len=h*h+w*w;
    int ans=0;
    for(i=h+1;i*i<len/2;i++){//i:tate
      double left=len-i*i;
      // printf("i*i=%d,left=%f,yoko=%f\n",i*i,left,sqrt(left));
      if(sqrt(left)-(int)sqrt(left)<EPS){
	ans=i; 
	break;
      }
    }
    if(ans>0){
      cout<<ans<<" "<<sqrt(len-ans*ans)<<endl;
      goto END;
    }
    while(1){
      len++;
      for(i=1;i*i<len/2;i++){
	double left=len-i*i;
	//	printf("len=%d,i*i=%d,left=%f,yoko=%f\n",len,i*i,left,sqrt(left));
	left=sqrt(left);
	if(left-(int)left<EPS){
	  cout<<i<<" "<<left<<endl;
	  goto END;
	}
      }

    }
  END:;

  }
}