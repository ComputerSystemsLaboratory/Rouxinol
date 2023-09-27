#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<algorithm>
#include<string>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<list>
#include<utility>
#include<climits>

#define INF INT_MAX/2
#define EPS 1.0e-7

using namespace std;

typedef long long ll;
typedef pair<int,int> PII;
typedef pair<int,PII> PIII;

int N;

vector<PII> compress(vector<PIII> &v, vector<PIII> &s, vector<PIII> &e){

    vector<PIII> cv(v.size());

    for(unsigned int i=0;i<v.size();++i)cv[i] = v[i];
    sort(cv.begin(),cv.end());
    int n = unique(cv.begin(),cv.end()) - cv.begin();

    vector<PII> ret(v.size()/2);
    for(unsigned int i=0;i<v.size()/2;++i){
        int si = lower_bound(cv.begin(),cv.begin()+n,s[i]) - cv.begin();
        int ei = lower_bound(cv.begin(),cv.begin()+n,e[i]) - cv.begin();
        ret[i] = make_pair(si,ei);
    }

    return ret;

}

int main(){

    cin.sync_with_stdio(false);

    while(cin >> N,N){

        vector<PIII> v(2*N);
        vector<PIII> s(N);
        vector<PIII> e(N);

        for(int i=0;i<N;++i){

            int h,m,sec;
            string st,et;

            cin >> st >> et;

            sscanf(st.c_str(),"%d:%d:%d",&h,&m,&sec);
            v[2*i] = make_pair(h,make_pair(m,sec));
            s[i] = v[2*i];

            sscanf(et.c_str(),"%d:%d:%d",&h,&m,&sec);
            v[2*i+1] = make_pair(h,make_pair(m,sec));
            e[i] = v[2*i+1];

        }

        vector<PII> p = compress(v,s,e);

        vector<int> cnt(2*N);

        for(int i=0;i<N;++i){
            cnt[p[i].first]++;
            cnt[p[i].second]--;
        }

        for(int i=1;i<2*N;++i)
            cnt[i] += cnt[i-1];

        int ans=0;

        for(int i=0;i<2*N;++i)
            ans = max(ans,cnt[i]);

        cout << ans << endl;

    }

    return 0;

}