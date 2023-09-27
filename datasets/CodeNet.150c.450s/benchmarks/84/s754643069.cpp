#include <iostream>

using namespace std;
template<class T>
long merge(T* xs, int l, int m, int r){
    long cnt = 0;
    auto temp = new T[r-l];
    int c1 = l, c2 = m;
    int idx = 0;

    while(c1 < m || c2 < r){
        if(c1 == m){
            temp[idx] = xs[c2++];
        } else if(c2 == r){
            temp[idx] = xs[c1++];
        } else if(xs[c1] <= xs[c2]){
            temp[idx] = xs[c1++];
        } else {
            cnt += m-c1;
            temp[idx] = xs[c2++];
        }
        ++idx;
    }
    for(int i = l; i < r; ++i){
        xs[i] = temp[i-l];
    }
    return cnt;
}

template<class T>
long inversion(T* xs, int l, int r){
    long cnt = 0;
    if(l+1 < r){
        int m = (l+r)/2;
        cnt += inversion(xs, l, m);
        cnt += inversion(xs, m, r);
        cnt += merge(xs, l, m, r);
    }
    return cnt;
}

int main(){
    int n;
    cin >> n;
    int xs[n];
    for(int i = 0; i < n; ++i){
        scanf("%d", &xs[i]);
    }
    cout << inversion(xs, 0, n) << endl;
}