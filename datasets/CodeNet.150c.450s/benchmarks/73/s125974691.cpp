#include <algorithm>
#include <vector>

template <typename T>
struct BIT {
  using value_type = T;
  using Index1 = int;
  std::vector<value_type> A;
  const int N, N2;
  BIT(int N) : A(N + 1, 0), N(N), N2(1 << std::__lg(N)) {}
  void add(Index1 a, value_type w) {
    for (Index1 x = a; x <= N; x += x & -x) {
      A[x] += w;
    }
  }
  value_type sum(Index1 a) const {
    value_type ret = 0;
    for (Index1 x = a; x > 0; x -= x & -x) {
      ret += A[x];
    }
    return ret;
  }
  Index1 lower_bound(value_type w) const {
    if (w <= 0) return 0;
    Index1 x = 0;
    for (int k = N2; k > 0; k >>= 1) {
      if (x + k <= N && A[x + k] < w) {
        w -= A[x + k];
        x += k;
      }
    }
    return x + 1;
  }
};


#include <cstdio>

#define mygc(c) (c) = getchar_unlocked()
#define mypc(c) putchar_unlocked(c)

template<typename T=int>T rd(){T x=0,m=0,k;for(;;){mygc(k);if(k=='-'){m=1;break;}if('0'<=k&&k<='9'){x=k-'0';break;}}for(;;){mygc(k);if(k<'0'||'9'<k)break;x=x*10+k-'0';}return x;}
template<typename T=int>void wr(T x,char c='\n'){int s=0,m=0;char b[32];if(x<0)m=1,x=-x;for(;x;x/=10)b[s++]=x%10;if(!s)b[s++]=0;if(m)mypc('-');for(;s--;)mypc(b[s]+'0');mypc(c);}

int main() {
  int N = rd(), Q = rd();
  BIT<int> bit(N);
  for (int i = 0; i < Q; i++) {
    int c = rd(), x = rd(), y = rd();
    if (c == 0) {
      bit.add(x, y);
    } else {
      wr(bit.sum(y) - bit.sum(x - 1));
    }
  }
}