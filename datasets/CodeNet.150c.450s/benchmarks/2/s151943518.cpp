#include <bits/stdc++.h>
using namespace std;

int partition(int a[],int p,int r){
    int x = a[r];
    int i = p-1;

    for(int j=p;j<=r-1;j++){
        if(a[j]<=x){
            i++;

            int tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
    }

    int tmp = a[i+1];
    a[i+1] = a[r];
    a[r] = tmp;

    return i+1;
}


int main(){
    int n;
    cin >> n;

    int a[100000];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int q = partition(a,0,n-1);

    for(int i=0;i<n;i++){
        if(i==q){
            cout << '[' << a[i] << ']';
        }else{
            cout << a[i];
        }

        if(i<n-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }

    return 0;
}
