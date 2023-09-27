#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char *argv[])
{
        for(;;) {
                int n;
                cin >> n;
                if(n==0) break;
                vector<int> vs;
                for(int i = 0; i < n; i++) {
                        int k;
                        cin >> k;
                        vs.push_back(k);
                }
                sort(vs.begin(), vs.end());
                int a = abs(vs[0]-vs[1]);
                for(int i = 0; i < n-1; i++) a = min(a, abs(vs[i]-vs[i+1]));
                cout << a << endl;
        }
        return 0;
}