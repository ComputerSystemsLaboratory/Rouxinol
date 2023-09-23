#include <iostream>
using namespace std;
int GCD(int a, int b){
    int temp;
    while (b) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int i,j,k;
    cin>>i>>j;
    if (i>=j){
        k=GCD(i,j);
    }else{
        k=GCD(j,i);
    }
    cout<<k<<endl;
    return 0;
}