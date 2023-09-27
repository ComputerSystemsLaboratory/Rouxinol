#include <algorithm>
#include <iostream>

using namespace std;

#define reps(i,f,n) for(int i=f; i<int(n); ++i)
#define rep(i,n) reps(i,0,n)

struct Rect
{
    int h, w;

    int d() const {
        return h*h + w*w;
    }

    bool operator< (const Rect& r) const {
        return d() < r.d() || (d() == r.d() && h < r.h);
    }
};


int main()
{
    Rect s;

    while(cin >> s.h >> s.w, s.h && s.w){
        Rect ans{1000, 1000};

        reps(i, 1, 151){
            reps(j, i+1, 151){
                Rect tmp{i, j};
                if(s < tmp){
                    ans = min(tmp, ans);
                }
            }
        }

        cout << ans.h <<' ' << ans.w << endl;
    }
}