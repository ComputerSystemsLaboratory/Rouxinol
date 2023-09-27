#include<iostream>

using namespace std;
int A[20];

bool BorteForce(int t, int p, int n){
        if(p==A[t])return true;
        if(t==n-1)return false;

        else return BorteForce(t+1, p-A[t], n) | BorteForce(t+1, p, n);
    }


int main(){
    int n, q;
    int M[200];

    cin >>n;
    for(int i=0; i<=n-1;i++)cin >> A[i];
    cin >> q;
    for(int i=0; i<=q-1;i++)cin >> M[i];


    for(int i=0 ;i<=q-1;i++){
        if(BorteForce(0, M[i], n)){
            cout << "yes\n";
        }
        else cout << "no\n";
    }
}
