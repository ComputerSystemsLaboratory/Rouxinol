#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <map>
#include <numeric>
#include <stack>
#include <string>
#include <vector>
#define _GLIBCXX_DEBUG
using namespace std;
using ll = long long;
 
int main()
{
    int n,k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = k-1; i < n-1; i++)
    {
        if (A[i-k+1] >= A[i+1])
        {
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
        
    }
    return 0;
}