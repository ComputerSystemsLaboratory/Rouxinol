#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<vector>
#include<list>
#include<map>
#include<algorithm>

using namespace std;

void trace(vector<int> v)
{
    for (int i = 0; i < v.size(); i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << v[i];
    }
    cout << endl;

}

void insertionSort(vector<int>& v)
{
    for (int i = 1; i < v.size(); i++) {
        int vi = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > vi) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = vi;

        trace(v);
    }
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int vi;
        cin >> vi;
        v.push_back(vi);
    }

    trace(v);
    insertionSort(v);

    return 0;
}

