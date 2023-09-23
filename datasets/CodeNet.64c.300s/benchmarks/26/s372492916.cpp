#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;
typedef unsigned long long  ull;

ull power(ull m, ull n, ull r){
    ull tmp = 1;
    if(n > 0){
        tmp = power(m, n/2, r);
        if(n % 2 ==0) tmp =(tmp*tmp)%r;
        else tmp = (((tmp*tmp)%r)*m)%r;
      }
      return tmp;
}


int main(){
	int m, n;
	cin >> m >> n;
    cout << power(m,n, 1000000007) << endl;
	return 0;
}