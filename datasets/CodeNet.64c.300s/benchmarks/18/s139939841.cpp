#include <algorithm>
#include <iostream>

using namespace std;


int main(){
        
        int A[128], N;
        A[0] = 1;
        for(int i=1; i<=32; i++){
                A[i] = A[i-1];
                if(i>=1) A[i] += A[i-2];
                if(i>=2) A[i] += A[i-3];
        }
        while (cin >> N  && N)  cout << (((A[N] + 9)/ 10) + 364) / 365 << endl;

}