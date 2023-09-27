#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;
    vector<int> coins(m);
    vector<int> nums(n+1);

    for (int i = 0; i < n + 1; i++)
        nums[i] = 0;
    
    for (int i = 0; i < m; i++) {
        int c;
        cin >> c;
        if (c <= n) {
            coins[i] = c;
            nums[c] = 1;
            for (int j = 1; j + c <= n; j++) {
                if (nums[j] && (!nums[c + j] || nums[c] + nums[j] < nums[c + j]))
                    nums[c + j] = nums[c] + nums[j];
            }
        }
    }

    cout << nums[n] << endl;

    return 0;
}