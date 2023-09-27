#include<iostream>
using namespace std;
int main(){
    int n, minj, esc, count=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    for(int i=0;i<n;i++){
        minj = i;
        for(int j=i;j<n;j++){
            if(a[j] < a[minj]){
                minj = j;
            }
        }
        esc = a[i];
        a[i] = a[minj];
        a[minj] = esc;
        if(i != minj){
            count++;
        }
    }
    
    for(int i=0;i<n;i++){
        cout << a[i];
        if(i != n-1){
            cout << " ";
        }
    }
    
    cout << endl << count << endl;
    
    
    return 0;
}
