
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int> A(n);
    for(int i=0;i<n;i++) cin>>A[i];
    
    int num=0;
    for(int i=0;i<n;i++){
        int minj=i;
        for(int j=i;j<n;j++){
            if(A[j]<A[minj]){
                minj=j;
            }
        }
        swap(A[i],A[minj]);
        if(i!=minj) num++;
    }
    
    for(int i=0;i<n-1;i++) cout<<A[i]<<" ";
    cout<<A[n-1]<<endl<<num<<endl;
    
    return 0;
}