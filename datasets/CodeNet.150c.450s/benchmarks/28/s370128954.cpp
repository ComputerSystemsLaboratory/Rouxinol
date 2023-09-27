#include <stdio.h>

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i, n) for(int i = 0; i < n; i++)

#define NMAX 100000
#define KMAX 100000
#define WMAX 10000

int required_k(int w[], int n , long P, int kmax) {
/*
?????§??????????????°?????¨?????????????????????????????°??°k?????????
????????????kmax??\????????????????????´?????? kmax + 1 ?????????
*/
  int k = 1, sum = 0;

  REP(i, n) {
    if(w[i] > P) {
      return kmax + 1;
    } else {
      sum += w[i];
    }

    if(sum > P) {
      k += 1;
      sum = w[i];
      if(k > kmax) {
        return k;
      }
    }
  }

  if(sum > P) {
    k += 1;
  }

  return k;
}


int main(void) {
  int n, k;

  scanf("%d %d", &n, &k);

  int w[n];
  long Pmax = 0;
  REP(i, n) {
    scanf("%d", &w[i]);
    Pmax += w[i];
  }


  long left = 0, right = Pmax;
  long mid;
  int req_k;
  while(left + 1 < right) {
    mid = (left + right) / 2;
    req_k = required_k(w, n, mid, k);
    if(req_k > k) {
      left = mid;
    } else {
      right = mid;
    }
  }
  printf("%ld\n", right);


/*
  REP(i, 30) {
    printf("%d: %d\n", i, required_k(w, n, (long)i, k));
  }
*/

  return 0;
}