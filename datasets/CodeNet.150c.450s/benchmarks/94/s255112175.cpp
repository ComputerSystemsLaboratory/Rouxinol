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
        if (i) {
            cout << " ";
        }
        cout << v[i];
    }
    cout << endl;

}

int bubbleSort(vector<int>& v)
{
    int count = 0;
    bool flag = true;
    for (int i = 0; flag; i++) {
        flag = false;
        for (int j = v.size() - 1; j >= i + 1; j--) {
            if (v[j] < v[j - 1]) {
                swap(v[j], v[j - 1]);
                flag = true;
                count++;
            }
        }
    }

    return count;
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

    int count;
    count = bubbleSort(v);

    trace(v);
    cout << count << endl;

    return 0;
}

