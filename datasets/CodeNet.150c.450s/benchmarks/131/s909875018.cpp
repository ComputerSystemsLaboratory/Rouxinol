#include "bits/stdc++.h"
#define pb push_back
#define all(a) (a).begin(),(a).end()
using namespace std;
int main()
{
    int a, l;
    while(cin >> a >> l, a | l) {
        vector<int> seq = {a};
        
        while(1) {
            a = seq.back();
            ostringstream oss;
            oss << setw(l) << setfill('0') << a;
            
            string maxi = oss.str();
            string mini = oss.str();
            
            sort(all(maxi), greater<char>());
            sort(all(mini));
            
            int na = stoi(maxi) - stoi(mini);
            
            auto it = find(all(seq), na);
            if (it != seq.end()) {
                int j = distance(seq.begin(), it);
                int i = seq.size();
                cout << j << " " << na << " " << (i - j) << endl;
                break;
            }
            seq.pb(na);
        }
    }
}