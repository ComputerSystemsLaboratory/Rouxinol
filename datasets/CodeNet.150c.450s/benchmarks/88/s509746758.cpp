#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

#define all(c) (c).begin(), (c).end()
#define loop(i,a,b) for(int i=(a); i<int(b); i++)
#define rep(i,b) loop(i,0,b)

using namespace std;

struct rect {
    int h, w;
};

int main(){
    vector<rect> dic;
    dic.reserve(150 * 75);
    for (int h = 1; h <= 150; h++){
        for (int w = h + 1; w <= 150; w++){
            rect r = { h, w };
            dic.push_back(r);
        }
    }

    auto f = [](const rect & a, const rect & b){
        int sa = a.w*a.w + a.h*a.h;
        int sb = b.w*b.w + b.h*b.h;
        if (sa != sb) return sa < sb;
        return a.h < b.h;
    };

    sort(dic.begin(), dic.end(), f);
    int h, w;
    while (cin >> h >> w, h || w){
        rect r = { h, w };
        auto it = upper_bound(dic.begin(), dic.end(), r, f);
        cout << (it->h) << " " << (it->w) << endl;
    }
}