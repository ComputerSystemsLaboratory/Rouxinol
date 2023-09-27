#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<string> vs;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef pair<int, int> pii;
typedef long long ll;
typedef unsigned long long ull;

#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair

#define loop(i,a,b) for(int i=(a);i<ull(b);++i)
#define rep(i,n) loop(i,0,n)

const double eps = 1e-10;
const double pi  = acos(-1.0);
const double inf = (int)1e8;

int main(){
    int n;
    while(cin >> n, n){
        string s;
        int count = 0;

        int l = 0, r = 0;
        rep(i, n){
            cin >> s;
            if(s == "lu") l++;
            else if(s == "ru") r++;
            else if(s == "ld") l--;
            else r--;

            if(!(r^l)){
                if(!(count%2) && r) count++;
                else if(count%2 && !r) count++;
            }
        }
        cout << count << endl;
    }
}