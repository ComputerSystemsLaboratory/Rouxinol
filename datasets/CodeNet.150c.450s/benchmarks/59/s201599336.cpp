#include<iostream>
using namespace std;

int main(){
    const int n=1000;
    int A[n],i,j,v,size,count;
    cin>>size;
    for(i=0;i<size;++i){
        cin >> A[i];
    }
    for(count=0;count<size;++count){
        if(count!=size-1) cout<<A[count]<<" ";
        else cout<<A[count];
    }
    cout << endl;
    for(i=1;i<size;++i){
        v=A[i];
        j=i-1;
        while(j>=0 && A[j]>v){
            A[j+1]=A[j];
            --j;
            A[j+1]=v;
        }
        for(count=0;count<size;++count){
            if(count!=size-1) cout<<A[count]<<" ";
            else cout<<A[count];
        }
        cout<<endl;
    }

    return 0;
}