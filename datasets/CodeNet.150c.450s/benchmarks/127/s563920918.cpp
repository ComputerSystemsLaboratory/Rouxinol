#include <bits/stdc++.h>
 
#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int main()
{
    int m;
    cin >> m;
    loop(m, i) {
        string t;
        cin >> t;

        set<string> set;
        set.insert(t);
        for (int j = 1; j < t.length(); j++) {
            string f1, f2, b1, b2;
            f1 = f2 = t.substr(0,j);
            b1 = b2 = t.substr(j);
            reverse(all(f2));
            reverse(all(b2));
            set.insert(f1+b2);
            set.insert(f2+b1);
            set.insert(f2+b2);
            set.insert(b1+f1);
            set.insert(b1+f2);
            set.insert(b2+f1);
            set.insert(b2+f2);
        }
        cout << set.size() << endl;
    }
    return 0;
}