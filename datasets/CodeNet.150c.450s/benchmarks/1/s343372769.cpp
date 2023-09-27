#include <iostream>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <cmath>
#include <vector>
#include <numeric>
#include <cstdio>
#include <bitset>
#include <map>
#include <string>
#include <valarray>
#include <queue>
#include <utility>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> sequence(n+1);

    for (int i = 1; i <= n; i++)
        cin >> sequence[i];

    //verify the input
    // for (auto x: sequence)
    //     cout << x << ' ' << (x==sequence.back()? "\n": "");


    //misunderstand the question, the following algorithm deals with the longest succesive subsequence 
    // int length = 1, max_length = 1;
    // for (int i = 1; i < n; i++)
    // {
    //     if (sequence[i] > sequence[i-1])
    //         ++length;
    //     else
    //     {
    //         max_length = max(max_length, length);
    //         length = 1;
    //     }
    // }

    // cout << max_length << endl;

    //dynamic programming, with time complexity of O(n^2)
    // vector<int> longest_length(n+1);
    // int length = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i-1; j >= 0; j--)
    //         if (sequence[j] < sequence[i])
    //         {
    //             longest_length[i] = max(longest_length[i], longest_length[j]+1);
    //             length = max(length, longest_length[i]);
    //         }
        
    // }

    // cout << length << endl;

    //method 2 
    vector<int> D(n+1, -1);
    int length = 0;
    for (int i = 1; i <= n; i++)
    {
        if (D[length] < sequence[i])
            D[++length] = sequence[i];
        else 
        {
            for (int j = length-1; j >=0; j--)
            {
                if (D[j] < sequence[i])
                {
                    D[j+1] = sequence[i];
                    break;
                }
            }
        }
    }

    cout << length << endl;
}


