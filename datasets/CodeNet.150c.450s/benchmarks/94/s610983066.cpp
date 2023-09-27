#include<iostream>
using namespace std;

int Sort(int A[], int n){
  int count = 0, flag = 1;

    while(flag){
        flag = 0;
        for(int i = n-1; i > 0; i--){
            if(A[i] < A[i-1]){
                swap(A[i], A[i-1]);
                count++;
                flag = 1;
            }
        }
    }

    return count;
}

int main(){
    int A[100], n, count;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }

    count = Sort(A,n);

    for(int i = 0; i < n; i++){
        if(i)   cout << " ";
        cout << A[i];
    }

    cout << endl;
    cout << count << endl;

    return 0;
}
