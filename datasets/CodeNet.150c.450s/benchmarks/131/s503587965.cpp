#include<cstdio>
#include<algorithm>
#include<vector>
#include<functional>

using namespace std;

int l;

vector<int> split(int d) {
    vector<int> res;

    for(int i=0; i<l; i++) {
        res.push_back(d%10);
        d /= 10;
    }
    return res;
}

int join(vector<int> d) {
    int res=0,w=1;
    for(int i=0; i<l; i++) {
        res += w*d.back(); d.pop_back();
        w *= 10;
    }
    return res;
}

int main(void) {
    while(true) {
        vector<int> hist;

        int a;
        scanf("%d%d", &a, &l);
        if(!l) break;

        hist.push_back(a);

        for(int i=0; i<30; i++) {
            vector<int> sp = split(a);
            sort(sp.begin(), sp.end(), greater<int>());
            a = join(sp);
            sort(sp.begin(), sp.end());
            a -= join(sp);
            vector<int>::iterator it;
            if((it = find(hist.begin(), hist.end(), a)) != hist.end()) {
                printf("%d %d %d\n",it-hist.begin(), a, i-(it-hist.begin())+1);
                break;
            }
            hist.push_back(a);
        }
    }
    return 0;
}