#include<iostream>
using namespace std;

int main()
{
    int i, n, d, min, max, R_t[200000];
    cin >> n >> R_t[0] >> R_t[1];
    min = R_t[0];
    max = R_t[1] - R_t[0];
    if(R_t[0] > R_t[1]) min = R_t[1];

    for(i = 2; i < n; i++){
        cin >> R_t[i];
        d = R_t[i] - min;
        if(max < d) max = d;
        if(min > R_t[i]) min = R_t[i];
    }

    cout << max << endl;

    return 0;
}