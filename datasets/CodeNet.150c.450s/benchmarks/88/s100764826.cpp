#include <bits/stdc++.h>

#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int compare(int h, int w, int x, int y) {
    return (h*h+w*w) == (x*x+y*y) ? h-x : (h*h+w*w) - (x*x+y*y);
}

int main() {
    int h, w, d;
    while (cin >> h >> w) {
        if (h==0) break;
        int ans_h = 150, ans_w = 150;
        for (int i=1; i < 150; i++) {
            for (int j=i+1; j < 150; j++) {
                if (compare(h,w,i,j) < 0 && compare(ans_h,ans_w,i,j) > 0) {
                    ans_h = i;
                    ans_w = j;
                }
            }
        }
        cout << ans_h << ' ' << ans_w << endl;
    }

}