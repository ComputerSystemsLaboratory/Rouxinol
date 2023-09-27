#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >>  a[i];
    }
    long long int sum=0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }
    long long int min = *min_element(a.begin(), a.end());
    long long int max = *max_element(a.begin(), a.end());

    printf("%ld %ld %lld\n", min, max, sum);
}
