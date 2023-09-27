#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    
    while(A != B){
        if (A < B) {
            swap(A,B);
        }
        A = A - B;
    }
    cout << A << endl;
    return 0;
}