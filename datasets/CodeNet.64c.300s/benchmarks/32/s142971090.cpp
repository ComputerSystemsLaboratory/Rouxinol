#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int count=0;
    cin >> count;
    
    int value=0, min=INT_MAX, max=INT_MIN;
    long long sum=0;
    for (int i=0; i<count; ++i)
    {
        cin >> value;
        if (value < min)    min = value;
        if (value > max)    max = value;
        sum += value;
    }
    cout << min << " " << max << " " << sum << endl;
    
    return 0;
}