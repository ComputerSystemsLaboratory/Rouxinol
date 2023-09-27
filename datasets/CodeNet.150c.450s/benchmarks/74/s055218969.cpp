#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> coin(m);
    int max = 0;
    for(int i = 0; i < m; i++){
        cin >> coin[i];
    }
    sort(coin.begin(), coin.end());

    vector<unsigned int> coin_nums(n+1, -1);
    coin_nums[0] = 0;
    unsigned int min;

    for(int i = max+1; i <= n; i++){
        min = -1;
        for(int j = 0; j < m && coin[j] <= i; j++){
            if(min > coin_nums[i-coin[j]]) min = coin_nums[i-coin[j]];
        }
        coin_nums[i] = min+1;
    }
    
    cout << coin_nums[n] << endl;
    return 0;
}