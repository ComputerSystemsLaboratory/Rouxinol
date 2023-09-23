#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int A[N];
    
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    
    for(int i=0; i<N; i++){
        int v=A[i];
        int j = i - 1;
        
        while(j>=0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        
        for(int k=0; k<N; k++){
            cout << A[k];
            if(k==N-1){
                cout <<endl;
            }else{
                cout << " ";
            }
        }
    }
    
    return 0;
}
