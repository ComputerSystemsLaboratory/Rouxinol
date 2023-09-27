#include<iostream>
#include<algorithm>
using namespace std;

int N, M, temp;
int i=0,ans=0;
pair<int,int> PD[10010];

int main() {
  while (cin >> N >> M && N) {
    int d, p;
    for (int j=0; j<N; ++j) {
      cin >> d >> p;
      PD[j] = make_pair(p, d);
    }
    sort(PD,PD+N);
    reverse(PD,PD+N);
    while(i<N){
      temp=M;
      M-=PD[i].second;
      if(M<0){
        PD[i].second-=temp;
        break;
      }
      else{
        PD[i].second=0;
        i++;
      }
    }
    for(int k=0;k<N;k++){
      ans+=PD[k].first*PD[k].second;
    }
    cout << ans << endl;
    ans=0;
    i=0;
  }
}

