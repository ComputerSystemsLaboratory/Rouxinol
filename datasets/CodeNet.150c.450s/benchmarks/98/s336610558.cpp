#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>
using namespace std;
int m, nmin, nmax;

int main() {
    int n, m;
    while(cin >> n >> m, n&&m){
        vector<int> v;
        int sumA=0, sumB=0, sum=0;
        for(int i=0; i<n+m; ++i){
            int a; cin >> a;
            v.push_back(a);
            sum += a;
        }
        bool ok=false;
        pair<int, int> ans;
        int minV = 10000;
        sumA = accumulate(v.begin(), v.begin()+n, 0);
        sumB = sum - sumA;
        if(sumB>sumA){
            for(int i=0; i<n; ++i){
                for(int j=0; j<m; ++j){
                    if(sumB-sumA == 2*(v[j+n]-v[i])){
                        if(minV >= v[j+n]+v[i]){
                            minV = v[j+n]+v[i];
                            ans.first=v[i]; ans.second=v[j+n];
                        }
                        ok = true;
                    }
                }
            }
        }else if(sumA > sumB){
            for(int i=0; i<n; ++i){
                for(int j=0; j<m; ++j){
                    if(sumA-sumB == 2*(v[i]-v[j+n])){
                        if(minV >= v[j+n]+v[i]){
                            minV = v[j+n]+v[i]; 
                            ans.first=v[i]; ans.second=v[j+n];
                        }
                        ok = true;
                    }
                }
            }
        }else if(sumA==sumB){
            for(int i=0; i<n; ++i){
                for(int j=0; j<m; ++j){
                    if(v[i]==v[j+n]&&minV > v[i]+v[j+n]){
                        minV = v[i]+v[j+n];
                        ans.first=v[i]; ans.second=v[j+n];
                    }
                }
            }
            ok = true;
        }
        if(!ok||ans.first==0&&ans.second==0) cout << -1 << endl;
        else cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}
