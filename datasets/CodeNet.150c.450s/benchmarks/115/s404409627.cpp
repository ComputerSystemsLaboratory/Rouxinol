#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    {
        string t;
        getline(cin, t);
    }
    for(int i=0;i<n;i++) {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        vector<int> v1(s2.size()+1, 0);
        vector<int> v2(s2.size()+1, 0);
        for(auto c1=s1.cbegin(); c1!=s1.cend(); ++c1) {
            int i = 1;
            for(auto c2=s2.cbegin(); c2!=s2.cend(); ++c2,i++) {
                auto m = max(v1[i], v2[i-1]);
                m = max(m, v1[i-1] + (*c1 == *c2 ? 1 : 0));
                v2[i] = m;
            }
            /*
            for(auto t=v1.begin();t!=v1.end();++t) {
                cout << *t << " ";
            }
            cout << endl;
            */
            swap(v1, v2);
        }
        cout << v1[s2.size()] << endl;
    }
}