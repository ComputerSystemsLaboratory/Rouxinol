#include<iostream>
using namespace std;
int A[100009];
int temp;


int Partition(int p, int r){
    int x=A[r];
    int i =p-1;
    temp;
    for(int j=p; j<=r-1; j++){
        if(A[j]<=x){
            i++;
            temp = A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;
    return i+1;
}


int main(){
    int n;
    cin >> n;
    for(int i=0;i<=n-1;i++)cin >> A[i];
    int _index=Partition(0, n-1);
    for(int i=0;i<=n-1;i++){
        if(i==_index){
            cout << "[";
        }
        cout << A[i];
        if(i==_index){
            cout << "]";
        }
        if(i!=n-1) cout << " ";
        else cout << "\n";
        
    }   
}
