#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;

int h[1500*1000+1];
int w[1500*1000+1];
int inh[1500],inw[1500];

int main() {
int N,M,in;
  while(scanf("%d %d",&N, &M), N|M) {
    for(int i=0; i<N; ++i)
      scanf("%d", &inh[i]);
    for(int i=0; i<M; ++i)
      scanf("%d", &inw[i]);

    memset(h, 0, sizeof(h));
    memset(w, 0, sizeof(w));

    for(int i=0; i<N; ++i) {
      int sum = 0;
      for(int j=i; j<N; ++j) {
	sum += inh[j];
	h[sum]++;
      }
    }

    for(int i=0; i<M; ++i) {
      int sum = 0;
      for(int j=i; j<M; ++j) {
	sum += inw[j];
	w[sum]++;
      }
    }

    int count = 0;
    for(int i=1; i<=1500*1000; ++i)
      count += h[i]*w[i];

    printf("%d\n",count);

  }
}