#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long int load_arr[1000001];

int check(long long int P, int car_num, int load_num)
{
    int res = 0;    //货物标记
    
    for (int i = 0; i < car_num; i++)
    {
        long long int tmp = 0;
        while ((tmp + load_arr[res]) <= P)
        {
            tmp += load_arr[res];
            res++;
            if (res == load_num)
            {
                return load_num;
            }
        }
    }
    
    return res;
}

long long int solve(int car_num, int load_num)
{
    long long int left = 0;
    long long int right = 100000 * 10000;
    long long int mid;
    
    while ((right - left) > 1)
    {
        mid = (right + left) / 2;
        int val = check(mid, car_num, load_num);
        if (val >= load_num)    //当前的P能够装下全部获取
        {
            right = mid;
        }
        else    //当前的P不能装下全部货物
        {
            left = mid;
        }
    }
    
    return right;
}

int main(int argc, const char * argv[]) {
    int load_num;
    int car_num;
    long long int ans;
    
    cin >> load_num >> car_num;
    for (int i = 0; i < load_num; i++)
    {
        cin >> load_arr[i];
    }
    
    ans = solve(car_num, load_num);
    cout << ans << endl;
    
    return 0;
}

