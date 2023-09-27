#include <iostream>
#include <vector>
using namespace std;
#define MAX_len 1500001

int main(){
     int N,M;
     while(cin>>N>>M,N||M){
	  int h[N],w[M];
	  for(int i=0;i<N;i++)cin>>h[i];
	  for(int i=0;i<M;i++)cin>>w[i];
	  vector<int> h_count(MAX_len),w_count(MAX_len);

	  for(int i1=0;i1<N;i1++){
	       int len=0;
	       for(int i2=i1;i2<N;i2++){
		    len+=h[i2];
		    h_count[len]++;
	       }
	  }
	  for(int i1=0;i1<M;i1++){
	       int len=0;
	       for(int i2=i1;i2<M;i2++){
		    len+=w[i2];
		    w_count[len]++;
	       }
	  }
	  int ans=0;
	  for(int i=1;i<MAX_len;i++){
	       ans+=h_count[i]*w_count[i];
	  }
	  cout<<ans<<endl;
     }
}