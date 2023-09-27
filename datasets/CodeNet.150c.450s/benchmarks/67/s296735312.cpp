#include<iostream>
using namespace std;
int main()
{
  int N,ans;
  while(cin>>N,N){
    ans=0;
    for(int i=1;i<N;i++){
      int s=0;
      for(int j=i;j<N;j++){
	s+=j;
	if(s<N)continue;
	if(s>N)break;
	ans++;
	break;
      }
    }
    cout<<ans<<endl;
  }
}