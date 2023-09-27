#include <utility>
#include <algorithm>
#include <iostream>
using namespace std;


int N,M;
pair<int,int> a[100000];
int main(){
  while(cin >> N >> M){
    if(N==0 && M==0){
      return 0;
    }
    else{
      for(int i=0; i<N; i++){
	int d,p;
	cin >> d >> p;
	a[i] = make_pair(p,d);
      }
      
      sort(a, a+N);
      reverse(a, a+N);
      
      int S = 0;
      for(int k=0; k<N; k++){
	S += a[k].first*a[k].second;
      }
      for(int l=0; l<N; l++){
	if(M<=0)break;
	int guarded = min(M, a[l].second);
	S -= a[l].first*guarded;
	M -= guarded;
      }
      cout << S << endl;
    }
    }
    }