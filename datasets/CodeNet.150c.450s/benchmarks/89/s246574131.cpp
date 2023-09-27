#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
//ranker
using namespace std;

#define REPS(i, a, n) for (int i = (a); i < (n); ++i)
#define REP(i, n) REPS(i, 0, n)
#define RREP(i, n) REPS(i, 1, n + 1)
#define DEPS(i, a, n) for (int i = (a); i >= n; --i)
#define DEP(i, n) DEPS(i, n, 0)

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using pii = pair<int, int>;
using pis = pair<int, string>;
using psi = pair<string, int>;
using D = double;

void merge (int *first1, int *last1, int *first2, int *last2){
    int size1 = last1 - first1;
    int size2 = last2 - first2;
    int *result = new int[size1+size2];
    int i = 0;
    int j = 0;
    int index = 0;
    while (true){
        if (i < size1 && (first1[i] <= first2[j] || j >= size2)){
            result[index] = first1[i];
            ++i; ++index;
        }
        if (j < size2 && (first1[i] > first2[j] || i >= size1)){
            result[index] = first2[j];
            ++j; ++index;
        }
        if (i==size1 && j==size2){
            for (i=0; i<size1; ++i) first1[i] = result[i];
            for (j=0; j<size2; ++j) first2[j] = result[j+size1];
            delete[] result;
            return;
        }
    }
}
void MergeSort (int *first, int *last){
    int size = last - first;
    if(size <= 1) return;
    MergeSort(first, first+size/2);
    MergeSort(first+size/2, last);
    merge(first, first+size/2, first+size/2, last);
}


int gcd(int a, int b)
{
    int c;

    if (a < b) {
        a+=b; b=a-b; a-=b;
    }

    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int isPrime(int x){
  int i;
  if(x < 2) return 0;
  else if(x == 2) return 1;
  if( x%2 == 0) return 0;
  for(i = 3; i*i <= 2; i += 2){
    if(x%i == 0) return 0;
  }
  return 1;
}


const int pmax = 10000000;
bool isPrime_table[pmax];
//const???????????¨????????£?¨???§?????????

void eratos(void){
  int i, j;
  double sqrtmax=sqrt(pmax);

  REP(k, pmax) isPrime_table[k] = true; /* Initialization */

  /* Sieve process  */
  isPrime_table[0] = false;
  isPrime_table[1] = false;
          /* 0 and 1 are not prime. */
  for (i=2; i <= sqrtmax; i++){
    if (isPrime_table[i]==true){   /* i is prime. */
      for (j=i; i*j<pmax; j++){
        isPrime_table[i*j] = false; /* multiples of i are not prime. */
      }
    }
  }
}

//????????????????¨???°?????????
//abs(dx[i]+dy[j])==1??§??????
int dx[3]={-1, 0, 1};
int dy[3]={-1, 0, 1};
int W0, H0;
int  masu0[100][100]={0};
int cnt0;

int dfs(int a, int b){
  masu0[a][b] = 2;
  REP(i, 3)REP(j, 3){
    a = a+dx[i];
    b = b+dy[j];
    if(masu0[a][b]== 1 && a >= 0 && a < W0 && b >= 0 && b < H0){
    dfs(a, b);
  }
  }
  return 1;
}

//????????????????????????str.substr(i, 5)
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  eratos();

  vi prime;

  REP(i, 10000000) if(isPrime_table[i]) prime.push_back(i);


  unordered_map<int, bool> ump;
  REP(i, prime.size()) ump[prime[i]] = true;

  int a, d, n;
  while(1){
  cin >> a >> d >> n;
  if(a == 0 && d == 0 && n == 0) break;
  int m = 0;
  int cnt = 0;
  while(1){
    if(ump[a + m*d]) cnt++;
    if(cnt == n) break;
      m++;
  }
    cout << a + m*d << endl;
  }
  return 0;


}