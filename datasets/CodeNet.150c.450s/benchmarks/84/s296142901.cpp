#include    <bits/stdc++.h>
using   namespace   std;

#define INF (1<<30)

#define BIT_MAX 200000

vector<long> BIT(BIT_MAX+1);

void    add_BIT(vector<long> &BIT, long ix, const long &v) {
    while (ix<=BIT_MAX) {
        BIT.at(ix) +=v;
        ix +=ix&-ix;
    }
}

long    sum_BIT(vector<long> &BIT, long ix) {
    long S=0;
    while (ix>0) {
        S +=BIT.at(ix);
        ix -=ix&-ix;
    }
    return S;
}

int main() {
    int n;
    cin >>n;
    vector<vector<long>> a(n, vector<long> (3, 0));
    for (int i=0; i<n; i++) {
        a.at(i).at(0)=0;
        cin >>a.at(i).at(1);
        a.at(i).at(2)=i;
    }
    sort(a.begin(), a.end());
    for (int i=0; i<n; i++) {
        a.at(i).at(0)=a.at(i).at(2);
        a.at(i).at(2)=i+1;
    }
    sort(a.begin(), a.end());
    long S=0;
    for (int i=n-1; i>=0; i--) {
        add_BIT(BIT, a.at(i).at(2), 1);
        S +=sum_BIT(BIT, a.at(i).at(2)-1);
    }
    cout <<S <<endl;
    return 0;
}
