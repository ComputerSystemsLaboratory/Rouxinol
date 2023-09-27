#include <bits/stdc++.h>
using namespace std;

struct Rect {
    int h, w, d;
    Rect(int _h, int _w) : h(_h), w(_w) {
        d = _h * _h + _w * _w;
    }
    bool operator>(const Rect y) const {
        return (this->d > y.d) || (!(this->d > y.d) && (this->h > y.h));
    }
    bool operator<(const Rect y) const {
        return (this->d < y.d) || (!(this->d < y.d) && (this->h < y.h));
    }
};

int main() {
    vector<Rect> List;
    for (int h = 1; h <= 150; ++h) {
        for (int w = h + 1; w <= 150; ++w) {
            List.push_back(Rect(h, w));
        }
    }
    sort(List.begin(), List.end());

    /*
    for (auto &p : List) {
        cout << p.h << " " << p.w << " " << p.d << endl;
    }
    */

    while (true) {
        int h, w;
        cin >> h >> w;
        if (h == 0) break;

        for (int i = 0; i < List.size(); ++i) {
            if (h == List[i].h && w == List[i].w) {
                cout << List[i + 1].h << " " << List[i + 1].w << endl;
                break;
            }
        }
    }

    return 0;
}
