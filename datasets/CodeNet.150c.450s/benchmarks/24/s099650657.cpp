#include <iostream>
#include <algorithm>
#include <utility>
using namespace	std;
int main()
{
  int N,M,d,p,j,A=0;
  pair<int,int>	PD[10010];
  while(cin>>N>>M&&N){
    for	(int i=0;i<N;i++){
      cin >> d >> p;
      PD[i]=make_pair(p,d);
      // PD[i].first ?????? i ?????±??????                                            
      // PD[i].second ?????? i ?????????                                             
    }
    sort(PD,PD+N);
    reverse(PD,PD+N);
    j=0;
    for(int i=0;i<M;i++){
      PD[j].second--;
      if(PD[j].second==0)
        j++;
    }
    A=0;
    for(int i=0;i<N;i++)
      A+=PD[i].first*PD[i].second;
    cout << A << endl;
  }
}