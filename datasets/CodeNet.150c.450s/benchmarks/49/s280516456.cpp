#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>

using namespace std;

int matrix[20][20];

int main()
{
    while(true)
    {
        int n;

        cin >> n;
        
        if(!n) break;

        vector<int> vec(n);

        for(int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        
        sort(vec.begin(), vec.end());

        int sum = 0;
        for(int i = 1; i < n - 1; i++){
            sum += vec[i];
        }
        cout << int(sum / (n - 2)) << endl;
    }

    return 0;
}
