#include <iostream>
using namespace std;

int selectionsort (int a[],int n){
    int ans = 0;
    for (int i = 0; i <  n ; ++i) {
        int m = i;
        for (int j = i+1 ; j < n ; ++j) {
            if(a[j]<a[m]) m=j;
        }
            if(m!=i)
            ans++;
        swap(a[m],a[i]);
    }
    return ans;
}

int main(){
    int a[100],n,count;
    cin >> n;
    for (int i = 0; i < n ; ++i) {
        cin >> a[i];
    }
    count = selectionsort(a,n);

    for (int i = 0; i < n-1 ; ++i) {
        cout << a[i] << " ";
    }
    cout << a[n-1] << endl;
    cout << count << endl;

    return 0;
}