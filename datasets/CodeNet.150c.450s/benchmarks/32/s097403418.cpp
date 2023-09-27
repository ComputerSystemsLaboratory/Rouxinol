#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    int m,n1,n2,a[201];
    cin >> m >> n1 >> n2; 
    do{
        int maxg=n2;
        for (int i=1;i<=m;i++)
            cin >> a[i];
        for (int i=0;i<n2-n1+1;i++){
            if (a[maxg]-a[maxg+1]<a[n2-i]-a[n2-i+1])
                maxg=n2-i;
       }
       cout << maxg << endl;
       cin >> m >> n1 >> n2; 
    }while(!(m==0 && n1==0 && n2==0));
    return 0;
}
