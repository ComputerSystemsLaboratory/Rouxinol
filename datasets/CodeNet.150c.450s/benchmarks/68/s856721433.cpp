#include <iostream>
#include <vector>
using namespace std;

int a[1010];

void sort(int l, int r) {
    if (l >= r) return;
    int p = l;
    int k = l+1;
    while (k <= r) {
        if (a[k] < a[l]) {
            swap(a[k], a[p+1]);
            p++;
        }
        k++;
    }
    swap(a[l], a[p]);
    sort(l, p);
    sort(p+1, r);
}

int main(void){
    int n;
    while (1) {
        cin >> n;
        if (!n) break;
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(0,n-1);
        //for (int i = 0; i < n; i++) cout << a[i] << " "; cout << endl;
        
        int ans = 10101010;
        for (int i = 0; i < n-1; i++) if (ans > a[i+1] - a[i]) ans = a[i+1] - a[i];
        cout << ans << endl;
    }    
}