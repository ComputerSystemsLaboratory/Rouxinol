#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;

struct BIT{
    // 1-origin
    vector<int> v;
    int n;

    BIT(int _n):
        v(vector<int>(_n+1, 0)), n(_n) {}

    int sum(int i){
        int s = 0;
        while(i > 0){
            s += v[i];
            i -= lsb(i);
        }
        return s;
    }
    
    int sum(int l, int r){
        return sum(r) - sum(l-1);
    }

    void add(int i, int x){
        while(i <= n){
            v[i] += x;
            i += lsb(i);
        }
    }

private:
    // least significant bit
    int lsb(int i){
        return i & -i;
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)  cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    auto f = [&](int val)->int{
        return lower_bound(b.begin(), b.end(), val)-b.begin();
    };
    BIT bit(n);
    ll ret = 0;
    for(int i = 0; i < n; i++){
        ret += i-bit.sum(f(a[i])+1);
        bit.add(f(a[i])+1, 1);
    }
    cout << ret << endl;
    return 0;
}
