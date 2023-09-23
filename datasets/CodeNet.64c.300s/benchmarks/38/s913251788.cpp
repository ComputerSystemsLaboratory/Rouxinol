#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a[10];
        for (int j=0;j<10;j++)
            cin >> a[j];
        int left,right;
        left = a[0];
        right = 0;
        for (int j=1;j<10;j++){
            if(a[j]<left && a[j]<right){
                cout << "NO" << endl;
                break;
            }
            else{
                if(j==9){
                    cout << "YES" << endl;
                    break;
                }
                else{
                if(a[j]>left && a[j]<right)
                    left = a[j];
                else{
                    if(a[j]<left && a[j]>right)
                        right = a[j];
                    else{
                        if(left<right)
                            right = a[j];
                        else
                            left = a[j];
                    }
                }
            }
        }
        }
    }
}