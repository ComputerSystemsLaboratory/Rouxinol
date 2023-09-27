#include <cstdio>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define reps(i,f,n) for(int i=(f); i<=(n); ++i)
#define outl(x) cout<< (x) << '\n'

inline int parent(int n)   { return(n / 2); }
inline int left(int n)     { return(n * 2); }
inline int right(int n)    { return(1 + n * 2); }

int main()
{
   int N;
   int h[256];

   scanf("%d", &N);
   reps(i, 1, N){
      scanf("%d", h + i);
   }

   reps(i, 1, N){
      printf("node %d: key = %d, ", i, h[i] );
      if(parent(i) > 0)printf("parent key = %d, ", h[ parent(i) ]);
      if(left(i) <= N)printf("left key = %d, ", h[ left(i) ] );
      if(right(i) <= N)printf("right key = %d, ", h[ right(i) ] );
      putchar_unlocked('\n');
   }
}


