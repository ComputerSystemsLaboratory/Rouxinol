#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <climits>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <algorithm>
#include <functional>
using namespace std;
int hi,wi;
int N,M;
int h[3000];
int w[3000];
long long int hl[1500004]={};
long long int wl[1500004]={};
int main(){
	while(1){
	cin>>N>>M;
	if(N==0 && M==0)break;
	long long int ans=0;
	cin>>hi;
	h[0]=hi;
	for(int i=1;i<N;i++){
		cin>>hi;
		h[i]=h[i-1]+hi;
	}
	cin>>wi;
	w[0]=wi;
	for(int i=1;i<M;i++){
		cin>>wi;
		w[i]=w[i-1]+wi;
	}
	for(int i=0;i<1500000;i++){
		hl[i]=0;
		wl[i]=0;
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N-i;j++){
			hl[h[i+j]-h[j-1]]++;
		}
	}
	for(int i=0;i<M;i++){
		for(int j=0;j<M-i;j++){
			wl[w[i+j]-w[j-1]]++;
		}
	}
	for(int i=0;i<=1500000;i++){
		ans+=hl[i]*wl[i];
	}
	cout<<ans<<endl;
	}
	return 0;
}