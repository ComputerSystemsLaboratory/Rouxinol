#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    int tmp;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    bool flag=true;
    while(flag){
        flag = false;
        for(int j=n-1;j>0;j--){
            if(a[j]<a[j-1]){
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
                flag = true;
                cnt++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << a[i];
        if(i!=n-1){
            cout << " ";
        }
    }
    cout << endl << cnt << endl;
}
