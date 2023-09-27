#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    bool A[num+1][num+1];
    
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            A[j][i] = false;
        }
    }
    
    for(int i=1; i<=num; i++){
        int node;
        int n;
        cin >> node >> n;
        for(int j=1; j<=n; j++){
            int a;
            //cin >> A[i][j];
            cin >> a;
            A[node][a] = true;
            }
    }
    
    for (int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            if(j-1!=0) {
            cout << ' ';
            }
            if(A[i][j]){
            cout << '1' ;
            }
            else{
            cout << '0';
            }
        }
        cout << endl;
    }
    
    return 0;
}