#include <iostream>
#include <algorithm>
 
using namespace std;

int main()
{
    int n, s, sum, ans;

    while(true) {

        cin >> n >> s;

        if(n == 0 && s == 0)
            break;

        int arr[10] = {0};

        for(int i = 0; i < n; i++)
            arr[9-i] = 1;

        ans = 0;

        do {
            sum = 0;
            for(int i = 0; i < 10; i++) {
                if (arr[i])
                    sum += i;
            }
            if (sum == s)
                ans++;
        } while(next_permutation(arr, arr+10));

        cout << ans << endl;
    }
    return 0;
}