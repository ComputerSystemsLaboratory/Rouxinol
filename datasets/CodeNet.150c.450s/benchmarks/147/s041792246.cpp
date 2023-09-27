#include <iostream>
#include <algorithm>
#include <vector>
 
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
 
 
const int MAX = 101;
const int SIZE = 1e5;
 
int main(){
  
    int n;
    cin >> n;
    vector <int> v(SIZE,0);
    for (int i = 1; i <= MAX; ++i){
        for (int j = 1; j <= MAX; ++j){
            for (int k = 1; k <= MAX; ++k){
                if (i*i + k*k + j*j + i*j + i*k + j*k <= 10000)
                v[i*i + k*k + j*j + i*j + i*k + j*k]++;
                
            }
        }
    }
    for (int i = 1; i <= n; ++i) cout << v[i] << endl;
 
 
}