#include <iostream>

using namespace std;

const int MAX_INDEX = 100005;
const int INF = 1001001001;

int upper_bound(int* array, int value, int size)
{
    int l = 0, r = size;
    while(l < r)
    {
        int mid = (l + r) / 2;
        if(array[mid] > value)
        {
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return r;
}

int lower_bound(int* array, int value, int size)
{
    int l = 0, r = size;
    while(l < r)
    {
        int mid = (l + r) / 2;
        if(array[mid] >= value)
        {
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
    return r;
}


int main()
{
    int array[MAX_INDEX], dp[MAX_INDEX];
    int n, u, ans = -1;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> array[i];
        dp[i] = INF;
    }

    for(int i=0;i<n;++i)
    {
        u = lower_bound(dp, array[i], n);
        dp[u] = array[i];
        ans = max(ans, u + 1);
    }
    cout << ans << endl;
}

