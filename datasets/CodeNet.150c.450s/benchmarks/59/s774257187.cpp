#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void disp(vector<int>& v) {
    for (int i=0; i<v.size()-1; i++) {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
}

int main()
{
    int i, j;
    int inp, tmp, N;
    vector<int> v;

    cin >> N;
    for (i=0; i<N; i++) {
        cin >> inp;
        v.push_back(inp);
    }

    if (v.size() == 1) {
        cout << v[0] << endl;
        return 0;
    }

    disp(v);
    for (i=1; i<v.size(); i++) {
        tmp = v[i];
        j = i - 1;
        while (j>=0 && v[j]>tmp) {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = tmp;
        disp(v);
    }
    return 0;
}