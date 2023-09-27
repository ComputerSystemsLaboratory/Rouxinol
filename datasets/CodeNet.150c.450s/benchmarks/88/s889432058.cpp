#include <bits/stdc++.h>
using namespace std;

struct rectangle{
    int h,w,d;
    rectangle(int h,int w):h(h),w(w),d(h*h+w*w){}
    bool operator<(const rectangle &rhs) const{
        if (d!=rhs.d) return d<rhs.d;
        else return h<rhs.h;
    }
};

const int MAX=151;

int h,w;
vector<rectangle> rs;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    for (int i=1;i<MAX;++i)
        for (int j=i+1;j<MAX;++j)
            rs.emplace_back(i,j);
    sort(rs.begin(),rs.end());
    while(cin >> h >> w,h){
        rectangle ans=*upper_bound(rs.begin(),rs.end(),rectangle{h,w});
        cout << ans.h << ' ' << ans.w << '\n';
    }
}
