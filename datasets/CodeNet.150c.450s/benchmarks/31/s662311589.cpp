#include <iostream>
#include <climits>
#include <array>
using namespace std;
          
long int A[200001];  
    
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];
    
    long int a=INT_MIN;
    long int m=INT_MAX;
    for(int i=0;i<n;i++){
       a=max(a,A[i]-m);
       m=min(m,A[i]);
    }
    cout<<a<<endl;
    return 0;
}