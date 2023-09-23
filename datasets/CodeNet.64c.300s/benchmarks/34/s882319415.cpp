#include <iostream>
using namespace std;

int main(){
    int n, a[101];
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i; j > 0; --j){
            if(a[j-1] > a[j]){
                int b = a[j];a[j]=a[j-1];a[j-1]=b;
            }
        }
        for(int j = 0; j < n-1; ++j)
            cout << a[j] << " ";
        cout << a[n-1] << endl;
    }
}
