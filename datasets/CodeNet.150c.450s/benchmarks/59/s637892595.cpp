#include<iostream>
using namespace std;
int A[100];
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>A[i];
        if(i==n-1)
            cout<<A[i]<<endl;
        else
            cout<<A[i]<<" ";
    }
    for (int i = 1; i < n ; ++i) {
        int key=A[i];
        int j=i-1;
        while (j>=0&&key<A[j]){
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=key;
        for (int k = 0; k < n; ++k) {
            if(k==n-1)
                cout<<A[k]<<endl;
            else
                cout<<A[k]<<" ";
        }
    }
}
