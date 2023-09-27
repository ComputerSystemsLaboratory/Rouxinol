#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <iomanip>
#include <fstream>
#include <stdint.h>
#include <cmath>
#include <algorithm>
#include <utility>
#include <numeric>
using namespace std;

constexpr int INF       = 1000000000;/* 1e+9a */
constexpr int MODULO    = 1000000007;

constexpr int evx[4] = { 1, 0, -1, 0 };
constexpr int evy[4] = { 0, 1, 0, -1 };

//----------------------------------
//----------------------------------

constexpr int Sup = 5000;
bool number[Sup];
vector<int> primes;

void era()
{
        for(int i = 0; i < Sup; ++i)
        {
                number[i] = true;
        }

        primes.push_back(2);
        primes.push_back(3);
        int prime = 1; // 2n + 1 -> n
        while(true)
        {
                int add = 2 * prime + 1;
                for(int i = prime + add; i < Sup; i += add)
                {
                        number[i] = false;
                }
                int j = prime + 1;
                while(true)
                {
                        if(j >= Sup)
                                return;
                        else
                                if(number[j])
                                {
                                        prime = j;
                                        primes.push_back(2* prime + 1);
                                        break;
                                }
                        j++;
                }
        }
}

inline bool test_divid(int n)
{
        if(n < 10000)
                return binary_search(primes.begin(),primes.end(), n);
        else
                for(auto p : primes)
                {
                        if(n % p == 0)
                                return false;
                }
                return true;
}

signed main()
{
    ios::sync_with_stdio(false);
        era();
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 0; i < n; ++i)
        {
                int tmp;
                cin >> tmp;
                ans += test_divid(tmp);

        }
        cout << ans << '\n';


}