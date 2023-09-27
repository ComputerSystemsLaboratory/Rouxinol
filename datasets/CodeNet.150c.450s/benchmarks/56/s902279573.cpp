#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v(N);
    long sum = 0;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        v.at(i) = a;
        sum += (long)a;
    }
    sort(v.begin(), v.end());
    cout << v.at(0) << " " << v.at(v.size()-1) << " " << sum <<endl;
}
