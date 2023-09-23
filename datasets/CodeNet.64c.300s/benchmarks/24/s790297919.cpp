#include <iostream>
using namespace std;

int main(){
    const int MAX_N = 10000;
    int n;
    int a[MAX_N];
    int b[MAX_N];
    int aPoint=0;
    int bPoint=0;
    
    
    while(true){
        cin >> n;
        if(n==0){
            break;
        }
        for(int i=0;i<n;i++){
            cin >> a[i];
            cin >> b[i];
            if (a[i] > b[i]){
                aPoint += a[i]+b[i];
            }else if (a[i]<b[i]){
                bPoint += a[i]+b[i];
            }else{
                aPoint += a[i];
                bPoint += b[i];
            }
        }
        cout << aPoint << " ";
        cout << bPoint << "\n";
        aPoint = 0;
        bPoint = 0;
    }
}