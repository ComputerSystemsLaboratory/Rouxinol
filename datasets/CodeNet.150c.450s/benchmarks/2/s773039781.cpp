#include<iostream>
#include<utility>

using namespace std;

int n;
int A[100100];


int partition(int A[], int p, int r){
    int x = A[r];
    int i = p - 1;
    int temp = 0;
    for(int j = p; j < r; j++){
        if(A[j] <= x){
            i = i + 1;
            swap(A[i], A[j]);
            //temp = A[i];
            //A[i] = A[j];
            //A[j] = temp;
        }
    }
    swap(A[i + 1], A[r]);
    //temp = A[i + 1];
    //A[i + 1] = A[r];
    //A[r] = temp;
    return i + 1;
}


int main(){
    cin >>n;
    for(int i = 0; i < n; i++){
        cin >>A[i];
    }
    //int p = A[n - 1];
    int t = partition(A, 0, n - 1);
    for(int i = 0; i < n; i++){
        if(i){
            cout << " ";
        }
        if(i == t){
            cout << "[" << A[i] << "]";
        }else{
            cout << A[i];
        }
    }
    cout << endl;

}
