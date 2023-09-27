#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    
    for(int i=0;i<n;i++){
        
        int j=i;
        while(j>0 && A[j-1]>A[j]){
            swap(A[j-1],A[j]);
            j--;
        }
     
        for(int j=0;j<n-1;j++) cout<<A[j]<<" ";
        cout<<A[n-1]<<endl;
    }
    
    return 0;
}