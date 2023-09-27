#include<iostream>
using namespace std;
int main(){
    int n, esc, count=0;
    bool flag;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    flag = 1;
    while(flag){
        flag = 0;
        for(int j=n-1;j>0;j--){
            if(a[j]<a[j-1]){
                esc = a[j];
                a[j] = a[j-1];
                a[j-1] = esc;
                count++;
                flag = 1;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        cout << a[i];
        if(i!=n-1){
            cout << " ";
        }
    }
    cout << endl << count << endl;
    
    return 0;
}
