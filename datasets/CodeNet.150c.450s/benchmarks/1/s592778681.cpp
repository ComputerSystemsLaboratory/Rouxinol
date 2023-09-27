#include <iostream>
#include <algorithm>
#include <vector>
#define REP(i,n) for(int i=0;i<n;i++)
#define REP3(i,s,n) for(int i=s;i<n;i++)
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    REP(i,N){
        cin >> a[i];
    }
    vector<int> v;
    vector<int>::iterator it;
    v.reserve(N);

    REP(i,N){
        if(i==0 || a[i] > *(v.end()-1))
            v.push_back(a[i]);
        else {
            it = lower_bound(v.begin(), v.end(), a[i]);
            *it = a[i];
        }
    }
    cout << v.size() << '\n';
}