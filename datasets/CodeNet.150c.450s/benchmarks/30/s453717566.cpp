#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int minj;
    int tmp;
    int cnt = 0;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        minj = i;
        for(int j=i;j<n;j++){
            if(a[j]<a[minj]){
                minj = j;
            }
        }
        if(i!=minj){
            tmp = a[i];
            a[i] = a[minj];
            a[minj] = tmp;
            cnt++;
        }
    }

    for(int i=0;i<n;i++){
        cout << a[i];
        if(i==n-1){
            cout << endl;
        }else{
            cout << " ";
        }
    }
    cout << cnt << endl;
    return 0;
}

