#include <bits/stdc++.h>
using namespace std;
typedef float fl;
typedef long long ll;
int n, a[100001];

int partition(int a[], int p, int r){
    int x = a[r];
    int i = p - 1; // xより小さい数の先頭を指す
    for (int j = p; j < r; j++){
        if(a[j] <= x){
            int tmp = a[j];
            a[j] = a[++i];
            a[i] = tmp;
        }
    }
    int tmp = a[r];
    a[r] = a[++i];
    a[i] = tmp;
    return i;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    int id = partition(a,0,n-1);
    for(int i = 0; i < n; i++){
        if(i) cout << " ";
        if(i == id){
            cout << "[" << a[i] << "]";
            }else{
                cout << a[i];
            }
    }
    cout << endl;
    return 0;
}
