#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    while(true)
    {
        int n, r; cin >> n >> r;
        if(n == 0 && r == 0) break;

        vector<int> array(n, 0);
        vector<int> copy(n, 0);
        for(int i = 0; i < n; i++){
            array[i] = i+1;
        }
        for(int i = 0; i < r; i++){
            int p, c;
            cin >> p >> c;
            
            for(int j = n - p; j > n - p - c; j--){
                copy[j + p - 1] = array[j];
            }
            for(int j = n - p + 1; j < n; j++){
                array[j - c] = array[j];
            }
            for(int j = n - 1; j > n - 1 - c; j--){
                array[j] = copy[j];
            }
            
        }

        cout << array[n-1] << endl;
    }
    return 0;
}