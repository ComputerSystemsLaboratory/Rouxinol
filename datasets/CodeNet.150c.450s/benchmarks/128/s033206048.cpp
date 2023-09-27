#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int main(){
    string s;
    cin>>s;
    for(int i=s.size()-1;i>=0;i--){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}