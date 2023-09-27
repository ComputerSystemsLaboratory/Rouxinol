#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
#define ll long long
#define pb push_back

int main()
{
    int n;
    vector<int> x;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        int min = 1000000;
        vector<int> a(n);
        for(int i=0; i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        for(int i=0; i<n-1;i++){
            int diff = abs(a[i] - a[i+1]);
            if(diff < min){
                min = diff;
            }
        }
        x.push_back(min);
    }
    for (int i = 0; i < x.size(); i++)
    {
        cout << x[i] << endl;
    }
}

