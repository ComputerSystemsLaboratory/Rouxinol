#include<iostream>
using namespace std;

int main(){
    while(true){
    int n, getA = 0, getB = 0;
    cin >> n;
    if(n == 0) break;
    int A,B;
    for(int i = 0; i < n; i++){
        cin >> A >> B;
        if( A > B ) getA += A + B;
        else if( A < B ) getB += A + B;
        else{
            getA += A;
            getB += B;
        }
    }
    cout << getA << " " << getB << endl;
    }
    return 0;
}
