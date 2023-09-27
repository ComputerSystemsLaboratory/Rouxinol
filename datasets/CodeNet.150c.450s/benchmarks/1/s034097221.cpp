#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int main() {
    cin >> n;
    int b;
    cin >> b;
    a.push_back(b);
    for (int i = 1; i < n; i++)
    {
        cin >> b;
        if(b > a[a.size()-1]) a.push_back(b);
        else{
            auto c = lower_bound(a.begin(), a.end(), b);
            a[c - a.begin()] = b;
        }
    }

    cout << a.size() << endl;
}
