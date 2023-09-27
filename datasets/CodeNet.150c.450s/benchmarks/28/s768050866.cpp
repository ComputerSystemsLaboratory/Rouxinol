#include <iostream>
#include <algorithm>
using namespace std;
 
int n, p, k, w[100010];
 
bool judge(int p) {
    int j=1, now = 0;
 
    // while (i<n) {
 
    //     while (sum[j] <= p) {
    //         sum[j] += w[i];
    //         i++;
    //     }
    //     j++;
 
    //     if (j > k) return false;
    // }
	for(int i = 0; i < n; i++){
		if(now + w[i] <= p){
			now += w[i];
		}else if(w[i] <= p){
			now = w[i];
			j++;
		}else{
			return false;
		}
	}
 
    return j <= k;
}
 
// int max_min(int p) {
//     int sum[100010], i = 0, j = 0;
 
//     while (i<n) {
 
//         while (sum[j] <= p) {
//             sum[j] += w[i];
//             i++;
//         }
         
//         if (Max < sum[j]) {
//             Max = sum[j];
//         }
 
//             j++;
//     }
//     return Max;
// }
 
void binary_search(int k) {
    int l = 0, r = 1e9 + 1;
 
    while (r - l >= 1) {
        int m = (l + r) / 2;
 
        // if (!judge(m) && judge(m+1)) return m;
		// cout << m << endl;
    	if (judge(m)) {
            r = m;
        }else{
			l = m + 1;
		}
    }
	cout << r << endl;
}
 
int main() {
 
    cin >> n >> k;
 
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
 
    binary_search(k);
 
    // s = max_min(P);
 
    // cout << P << endl;
 
}