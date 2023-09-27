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
        int n;
        vector<int> vec;
        cin >> n;
        rep(i,n){
            vec.push_back(n-i);
        }
        int r;
        cin >> r;
        if(n == 0){
            break;
        }
        rep(i,r){
            int a,b;
            cin >> a >> b;
            vector<int> up;
            vector<int> bf;
            for(int i = a-1;i<a+b-1;i++){
                up.push_back(vec[i]);
            }
            rep(i,up.size()){
                bf.push_back(up[i]);
            }
            rep(i,a-1){
                bf.push_back(vec[i]);
            }
            for(int i = a+b-1;i < n;i++){
                bf.push_back(vec[i]);
            }
            vec.clear();
            vec = bf;
        }
        cout << vec[0] << "\n";
    }
	return 0;
}