/*
*         ****FOX****
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <limits>
//freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#include <utility>
#include <list>
#include <cstdio>
#include<forward_list>
#include<algorithm>
#include<string>
#define Omar_Hafez ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi 3.1415926536
#define ll long long
#define ull unsigned long long
#define lli long long int
using namespace std;
int main()
{
    Omar_Hafez
   int n; cin >> n;
    vector<int> v(n,0); 
    for (int i = 1; i < 99; i++)
    {
        for (int j = 1; j < 99; j++)
        {
            for (int z = 1; z < 99; z++)
            {
                int res = (i * i) + (j * j) + (z * z) + (i * j) + (j * z) + (i * z);  
                if (res <= n)  v[--res]++;
                else break;
            }
        }
    }
    for (int i = 0; i< v.size(); i++) cout << v[i] << "\n";
    return 0;
}
