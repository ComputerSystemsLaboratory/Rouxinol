#include<iostream>
using namespace std;
int main(){
    int A[4] = {0};
    int Asum = 0;
    int B[4] = {0};
    int Bsum = 0;
    for(int i = 0;i < 4;i++){
        cin >> A[i];
        Asum+=A[i];
    }
    for(int i = 0;i < 4;i++){
        cin >> B[i];
        Bsum+=B[i];
    }
    if(Asum >= Bsum){
        cout << Asum << endl;
    }
    else if(Asum < Bsum){
        cout << Bsum << endl;
    }
    return 0;
}