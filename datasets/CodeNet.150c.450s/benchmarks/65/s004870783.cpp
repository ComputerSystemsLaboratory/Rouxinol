#include <iostream>
#include <vector>
#include <string>

using namespace std;
 
int main()
{
    int n;
    cin>>n;
     
    vector<string> A(n),A2(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
        A2[i]=A[i];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(A[j][1]>A[j+1][1]){
                swap(A[j],A[j+1]);
            }
        }
    }
     
    for(int i=0;i<n-1;i++) cout<<A[i]<<" ";
    cout<<A[n-1]<<endl<<"Stable"<<endl;

    for(int i=0;i<n;i++){
        int minj=i;
        for(int j=i;j<n;j++){
            if(A2[j][1]<A2[minj][1]){
                minj=j;
            }
        }
        swap(A2[i],A2[minj]);
    }
     
    for(int i=0;i<n-1;i++) cout<<A2[i]<<" ";
    cout<<A2[n-1]<<endl;
    if(A==A2) cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
    
    return 0;
}