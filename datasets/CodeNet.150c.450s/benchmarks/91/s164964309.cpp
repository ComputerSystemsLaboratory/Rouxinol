#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    const int N = 1000000;
    vector<bool> vec(N, true);
    int limit = 1000;
    for (int i = 2; i < limit; i++){
        for (int j = 2; i * j < N; j++){
            vec[i * j] = false;
        }
    }
    int n, cnt = 0;
    while (cin >> n){
        for (int i = 2; i <= n; i++){
            if (vec[i])cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
}