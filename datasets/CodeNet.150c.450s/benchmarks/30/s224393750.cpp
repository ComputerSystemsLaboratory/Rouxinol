#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int ai;
        cin >> ai;
        a.push_back(ai);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int minj = i;
        for (int j = i; j < n; j++) {
            if (a[j] < a[minj]) {
                minj = j;
            }
        }
        if (minj != i) {
            swap(a[i], a[minj]);
            count++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (i) {
            cout << " ";
        }
        cout << a[i];
    }
    cout << endl;

    cout << count << endl;

    return 0;
}

