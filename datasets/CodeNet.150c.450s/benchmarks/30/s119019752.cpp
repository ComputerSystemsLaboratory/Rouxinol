#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int sw=0;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        int minj=i;
        for (int j=i; j<n; j++){
            
            if (a[j]<a[minj]){
                minj=j;
            }
        }
        if (i!=minj){
            sw++;
        }
        swap(a[i],a[minj]);
    }
    for (int i=0; i<n-1; i++){
        cout << a[i] << " " ;
    }
    cout <<a[n-1] <<endl;
    cout << sw <<endl;
}
