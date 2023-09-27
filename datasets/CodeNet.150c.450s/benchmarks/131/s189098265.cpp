/*
 * Author:heroming
 * File:heroming.cpp
 * Time:2012-7-17 12:58:36
 */
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

#define SZ(v) ((int)(v).size())

int n, l, t;
vector<int> V;
map<int, int> mp;

int main()
{
        while (scanf("%d%d", &n, &l) != EOF && n + l != 0)
        {
                t = 0;
                mp.clear();
                do
                {
                        mp[n] = ++ t;
                        V.clear();
                        for (int i = 0; i < l; ++ i)
                        {
                                V.push_back(n % 10);
                                n /= 10;
                        }
                        sort(V.begin(), V.end());
                        int a = 0, b = 0;
                        for (int i = l - 1; i >= 0; -- i)
                                a = a * 10 + V[i];
                        for (int i = 0; i < l; ++ i)
                                b = b * 10 + V[i];
                        n = a - b;
                } while (mp[n] == 0);
                printf("%d %d %d\n", mp[n] - 1, n, t - mp[n] + 1);
        }
        return 0;
}