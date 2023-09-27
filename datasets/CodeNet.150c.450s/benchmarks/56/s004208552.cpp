#include<iostream>
using namespace std;

int main()
{
    int a,n,i,j,min,max;
    long long sum;
    cin >> n;
    cin >> a;
    min = max = sum = a;
    for (i = 1; i < n; i++) {
        cin >> j;
        sum += j;
        if (max < j)
            max = j;
        if(min > j)
            min = j;
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}