#include<iostream>
using namespace std;
 
int main () {
    int n, i,A,B, resa, resb;
    while(cin >> n,n){
        resa=0;resb=0;
        for(i=0;i<n;i++){
             cin >> A >> B;
             if(A>B) resa += A+B;
             else if (A<B) resb += A+B;
             else {resa += A; resb +=B;};
        }
    cout << resa << " " << resb << endl;
    }
}