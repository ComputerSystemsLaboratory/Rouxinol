#include <bits/stdc++.h>
using namespace std;

int main() {

    while(true) {

        int n;

        cin >> n;

        if(n==0) break;

        int a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a, a+n);

        priority_queue<int> q;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                q.push(a[i] - a[j]);
            }
        }

        cout << -q.top() << endl;

    }

    return 0;
}