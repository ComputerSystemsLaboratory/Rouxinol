#include <iostream>
using namespace std;

int main(){
    //input
    int n; 
    cin >> n;
    int A[n];
    for(int i=0;i<n;i++){
        cin >> A[i];
    }
    
    //first output
    for(int j=0;j<n-1;j++){
        cout << A[j] << " ";
    }
    cout << A[n-1] << endl;
    
    //calculation and output
    for(int i=1;i<n;i++){
        int key = A[i];
        int j = i-1;
        while(j>=0 & A[j]>key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
        
        //output
        for(int j=0;j<n-1;j++){
            cout << A[j] << " ";
        }
        cout << A[n-1] << endl;
    }
}