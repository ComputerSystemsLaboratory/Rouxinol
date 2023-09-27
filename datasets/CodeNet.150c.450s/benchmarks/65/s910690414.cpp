#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define pii pair<int,int>
#define ff first
#define ss second
#define sf(a) scanf("%d",&a)
#define MX 1100010
#define inf 1e9
#define m_p make_pair
#define pb push_back
#define mem(x,val) memset(x,val,sizeof(x))
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define FAST  ios_base::sync_with_stdio(0);cout.tie(0)
#define sqr(x) ((x)*(x))
#define MOD 100000

int main() {
    int n;
    sf(n);

    vector<string> vs(n);

    map<string,int> mps;
    for(int i=0;i<n;i++){
        cin >> vs[i];
        string s = vs[i];
        mps[s] = i+1;
    }
    vector<string> vs1(n);
    vs1 = vs;

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            string s1 = vs[j];
            string s2 = vs[j+1];
            int a = s1[1];
            int b = s2[1];
            if(a>b){
                swap(vs[j],vs[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(i+1==n) cout << vs[i] << endl;
        else cout << vs[i] << " ";
    }


    bool flag1 = false;
    for(int i=1;i<n;i++){
        string s1 = vs[i];
        string s2 = vs[i-1];
        if(s1[1]==s2[1]){
            int val1 = mps[vs[i]];
            int val2 = mps[vs[i-1]];
            if(val1 < val2){
                flag1 = true;
                break;
            }
        }
    }

    if(flag1) cout << "Not stable" << endl;
    else cout << "Stable" << endl;


    for(int i=0;i<n;i++){
        int mn = i;
        string s2 = vs1[mn];
        int b = s2[1]-'0';
        for(int j=i+1;j<n;j++){
            string s1 = vs1[j];
            int a = s1[1]-'0';
            if(a < b){
                mn = j;
                b = a;
            }
        }
        swap(vs1[i],vs1[mn]);
    }

    for(int i=0;i<n;i++){
        if(i+1==n) cout << vs1[i] << endl;
        else cout << vs1[i] << " ";
    }

    bool flag2 = false;
    for(int i=1;i<n;i++){
        string s1 = vs1[i];
        string s2 = vs1[i-1];
        if(s1[1]==s2[1]){
            int val1 = mps[vs1[i]];
            int val2 = mps[vs1[i-1]];
            if(val1 < val2){
                flag2 = true;
                break;
            }
        }
    }


    if(flag2) cout << "Not stable" << endl;
    else cout << "Stable" << endl;

    return 0;
}

