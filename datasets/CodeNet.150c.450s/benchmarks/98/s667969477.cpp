#include <bits/stdc++.h>
#define ll long long
#define INF 1000000005
#define MOD 1000000007
#define EPS 1e-10
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define all(v) (v).begin(),(v).end()

using namespace std;

typedef pair<int,int>P;

const int MAX_N = 100005;

int main()
{
    while(1){
        int n,m;
        cin >> n >> m;
        if(n == 0){
            break;
        }
        vector<int> v1(n),v2(m);
        set<int> s1,s2;
        int sm = 0;
    	rep(i,n){
    		cin >> v1[i];
            sm += v1[i];
            s1.insert(v1[i]);
    	}
        rep(i,m){
            cin >> v2[i];
            sm += v2[i];
            s2.insert(v2[i]);
        }
        int ans;
        if(sm % 2 == 0){
            int sm1 = accumulate(v1.begin(),v1.end(),0);
            int sm2 = sm - sm1;
            if(sm1 == sm2){
                bool flag = false;
                rep(i,n){
                    if(s2.find(v1[i]) != s2.end()){
                        flag = true;
                        ans = v1[i];
                        break;
                    }
                }
                if(flag){
                    cout << ans << " " << ans <<  "\n";
                }else{
                    cout << "-1\n";
                }
            }else{
                bool flag = false;
                if(sm1 > sm2){
                    int sub = (sm1 - sm2) / 2;
                    rep(i,n){
                        if(s2.find(v1[i]-sub) != s2.end()){
                            flag = true;
                            ans = v1[i];
                            break;
                        }
                    }
                    if(flag){
                        cout << ans << " " << ans-sub << "\n";
                    }else{
                        cout << "-1\n";
                    }
                }else{
                    int sub = (sm2 - sm1) / 2;
                    rep(i,n){
                        if(s2.find(v1[i]+sub) != s2.end()){
                            flag = true;
                            ans = v1[i];
                            break;
                        }
                    }
                    if(flag){
                        cout << ans << " " << ans+sub << "\n";
                    }else{
                        cout << "-1\n";
                    }
                }
            }
        }else{
            cout << "-1\n";
        }
    }
	return 0;
}