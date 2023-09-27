#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;
using ui64 = unsigned long long int;

////////////////////////////////

int main()
{
    int n,p;
    while(cin >> n >> p,n&&p){
        int cur = 0;
        int incup = p;
        vector<int> s(n,0);
        int ret = -1;
        while(true){
            if(incup > 0){
                incup--;s[cur]++;
                if(incup==0 && s[cur] == p){
                    ret = cur;break;
                }
            }else{
                incup+=s[cur];s[cur] = 0;
            }
            cur = (cur + 1) % n;
        }
        cout << ret << endl;
    }
}


