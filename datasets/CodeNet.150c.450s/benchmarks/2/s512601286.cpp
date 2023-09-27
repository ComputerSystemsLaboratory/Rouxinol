#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

/*
12
13 19 9 5 12 8 7 4 21 2 6 11
*/

int partition(int A[],int n){
    int index;
    int a=0;
    int k;
    for (int i = 0; i < n; i++) {
        if (A[i] <= A[n-1]) {
            k = A[i];
            A[i] = A[a];
            A[a] = k;
            index = a;
            a++;
        }
    }
    return index;
}


int main(){
    int A[100002];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%d",&A[i]);
    }
    
    int index = partition(A,n);
    
    for (int i = 0; i < n; i++) {
        if (i != n-1) {
            if (i != index) {
                cout << A[i] << " ";
            }else{
                cout << "[" << A[i] << "]" << " ";
            }
        }else{
            if (i != index) {
                cout << A[i] << endl;
            }else{
                cout << "[" << A[i] << "]" << endl;
            }
        }
    }
    
    return 0;
}