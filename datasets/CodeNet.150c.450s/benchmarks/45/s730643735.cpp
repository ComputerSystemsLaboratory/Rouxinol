#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

long long int powmod(long long int a,long long int n,long long int m) {
    if(n == 0)
        return 1;

    if(n % 2 ==0){
        long long int r = powmod(a,n/2,m);
        return r*r % m;
    }

    return a*powmod(a,n-1,m)%m;
}

int main(){

  long long int m,n;
  cin >> m >> n;
  cout << powmod(m,n,1000000007) << endl;

}
