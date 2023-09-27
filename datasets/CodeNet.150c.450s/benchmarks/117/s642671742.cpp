#include <iostream>
#include <vector>

#define vi vector<int>
using namespace std;

int cnt = 0;

vi helper;
void mergeSort(vi &a,int left,int right){
    if(left < right){
        int mid = (left + right) / 2;
        mergeSort(a,left,mid);
        mergeSort(a,mid+1,right);

        for (int i = left; i <= right; ++i) {
            helper[i] = a[i];
        }
        int i = left;
        int j = mid + 1;
        for (int k = i; k <= right; ++k){
            cnt++;
            if ( i > mid || j <= right && helper[i] > helper[j]){
                a[k] = helper[j++];
            }else {
                a[k] = helper[i++];
            }
        }
        //???????????§??????
    }
}

int main(){
    //freopen("in", "r", stdin);
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    helper.resize(n);
    mergeSort(a,0,n-1);

    for (int i = 0; i < n; ++i) {
        if(i) cout << " ";
        cout << a[i];
    }
    cout << endl << cnt << endl;
    return 0;
}