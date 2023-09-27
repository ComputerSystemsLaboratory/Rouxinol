#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct rect {
    int h,w;
} rect;

bool compr(const rect & a, const rect & b){
    int sa = a.w*a.w + a.h*a.h;
    int sb = b.w*b.w + b.h*b.h;
    if(sa != sb) return sa < sb;
    return a.h < b.h;
}

int main(){
    vector<rect> dic;
    dic.reserve(150*75);
    for(int h=1; h<=150; h++){
        for(int w=h+1; w<=150; w++){
            rect r = {h,w};
            dic.push_back(r);
         }
    }
    sort(dic.begin(), dic.end(), compr);
    int h,w;
    while(cin >> h >> w, h||w){
        rect r = {h,w};

        vector<rect>::iterator it = upper_bound(dic.begin(), dic.end(), r, compr);
        cout << (it->h) << " " << (it->w) << endl;
    }
    return 0;
}