#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long * input_num = new long long[n];
    for(int i = 0; i < n; i++) cin >> input_num[i];

    long long min = input_num[0];
    long long max = input_num[0];
    long long sum = 0;

    for(int i = 0; i < n; i++) {
        if(input_num[i] < min) min = input_num[i];
        if(input_num[i] > max) max = input_num[i];
        sum += input_num[i];
    }

    cout << min << " " << max << " " << sum << endl;
    
    delete[] input_num;
    return 0;
}