#include <iostream>
#include <cstdlib>
#include <string>
#include <typeinfo>
#include <cstring>
#include <iostream>
#define MAX 100000
using namespace std;
int A[MAX],n;

int partition(int p,int r){
    int x,i,j,t;
    x = A[r];
    i = p - 1;
    for(j = p;j < r;j++){
        if(A[j] <= x){
        i++;
        t = A[i];A[i] = A[j];A[j] = t;
        }
    }
    t = A[i+1];A[i+1] = A[r];A[r] = t;
    return i+1;
}

int main(){
    int q,i;
    cin >> n;
    for(i = 0; i < n; i++)cin >> A[i];
    q = partition(0,n - 1);
    for(i = 0;i < n; i++){
        if(i)cout << " ";
        if(i == q)cout << "[";
        cout << A[i];
        if(i == q)cout << "]";
    }
    cout << endl;
    return 0;
}

