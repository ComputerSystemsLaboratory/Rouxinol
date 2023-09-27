#include <iostream>
#define MAX 300000
using namespace std;
int D[MAX];
int n = 1;

void initRSQ(int n_){
    while(n < n_) n *= 2;
    for(int i = 0; i < 2*n-1; i++) D[i] = 0; 
}

void add(int k, int a){
    k += n-1;
    D[k] += a;

    while(k > 0){
        k = (k-1)/2;
        D[k] = D[2*k+1]+D[2*k+2];
    }
}

int query(int a, int b, int k, int l, int r){
    if(r <= a || b <= l) return 0;
    if(a <= l && r <= b) return D[k];

    int vleft, vright;
    vleft = query(a,b,2*k+1,l,(l+r)/2);
    vright = query(a,b,2*k+2,(l+r)/2,r);
    return vleft + vright;
}

int getSum(int a, int b){
    return query(a,b,0,0,n);
}

int main(){
    int q, com, x, y, n_, min;
    cin >> n_ >> q;
    initRSQ(n_);
    for(int i = 0; i < q; i++){
        cin >> com >> x >> y;
        x--;
        if(com == 0) add(x,y);
        else cout << getSum(x,y) << endl;
    }
    return 0;
}
