#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

struct rect{
    int h, w, len;
};

int main(){
    int h, w;
    while(cin >> h >> w, h||w){
        struct rect ans;
        ans.h = ans.w = 150;
        ans.len = 150 * 150 + 150 * 150;
        range(i,1,150){ // i:width
            range(j,1,i){ //j:height
                if((h * h + w * w < j * j + i * i && j * j + i * i < ans.len) || (h * h + w * w < j * j + i * i && j * j + i * i == ans.len && j < ans.h) || (h * h + w * w == j * j + i * i && h < j && j < ans.h)){
                    if(i == w && j == h) continue;
                    ans.h = j;
                    ans.w = i;
                    ans.len = i * i + j * j;
                }
            }
        }
        cout << ans.h << ' ' << ans.w << endl;
    }
}