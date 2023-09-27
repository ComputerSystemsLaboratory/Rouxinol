#include <iostream>
    using namespace std;

#define M 1000000007

long rec(long m, long n) {
   if(n == 1) return m % M;
   long long m2 = rec((m % M) * (m % M), n / 2);
   if(n % 2 == 1) {
       m2 = (m2 * (m % M));
   }
   return m2 % M;
}

int main(){
  long m,n;
  cin >> m >> n;
  cout << rec(m, n)<<endl;
  return 0;
}

