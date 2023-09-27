#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int count=0;
    int flag=1;
    while (flag==1){
        flag=0;
        for (int j=n-1; j>=1; j--){
            if (a[j]<a[j-1]){
                count++;
                int v=a[j];
                a[j]=a[j-1];
                a[j-1]=v;
                flag=1;
            }
        }
    }
    for (int i=0; i<n; i++){
        if (i==n-1){
            cout << a[i] <<endl;
        }
        else {
            cout << a[i] << " " ;
        }
    }
    cout << count << endl;
}
