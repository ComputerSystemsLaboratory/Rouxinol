#include <iostream>
using namespace std;

const int M = 1000000001;

int main()
{
    int n, s;
    int Min = M, Max = -M, ans = -M;
    cin >> n;
    cin >> s;
    Min = s;
    for(int i=1; i<n; i++)
    {
        cin >> s;
        ans = s - Min;
        if(ans > Max)
            Max = ans;
        if(s<Min)
            Min = s;
    }
    cout << Max << endl;
    return 0;
}

