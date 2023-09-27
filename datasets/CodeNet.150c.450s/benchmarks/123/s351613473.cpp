#include <iostream>
#include <cmath>
using namespace std;
 

 
 
int main() {
int n;
    cin>>n;
    int A[n],count=0;
    for(int i=0;i<n ;i++){
        cin>>A[i];
    }
    for(int i=0;i<n ;i++){
       int L = A[i];
        int M =sqrt(L);
        for(int x=2;x<=M;x++){
            if(L%x==0){
                count--;
                break;
            }
           
    }count++;
    }
    cout<<count<<endl;
    return 0;
}