#include<cstdio>
#include<vector>
using namespace std;

int main() {
  int n;
  while(scanf("%d", &n) ,n) {
    vector<int> v;
    int t;
    long long maxsum = -10000000;

    for(int i=0; i<n; ++i) {
      scanf("%d", &t);
      v.push_back(t);
    }

    for(int i=0; i<n; ++i) {
      long long tmp = 0;
      for(int j=i; j<n; ++j) {
        tmp += v[j];
        maxsum = max( maxsum, tmp );
      }
    }
    printf("%lld\n", maxsum);
  }
}