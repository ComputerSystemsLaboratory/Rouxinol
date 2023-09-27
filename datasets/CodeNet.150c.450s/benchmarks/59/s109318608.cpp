#include <iostream>
#include <string>
using namespace std;
int main(void){
    int a,b,j,v;
    cin>>a;
    int A[a];
    for(int i=0;i<a;i++){
        cin>>A[i];
    }
    for(int i=0;i<a;i++){
        if(i==a-1){
            cout<<A[i]<<endl;
        }else{
        cout<<A[i]<<" ";
        }
    }
    for(int i=1;i<a;i++){
        b=A[i];
        j=i-1;
        while(j>=0&&A[j]>b){
            A[j+1]=A[j];
            j--;
            //A[j+1]=b;
        }
        A[j+1]=b;
        for(int i=0;i<a;i++){
            if(i==a-1){
                cout<<A[i]<<endl;
            }else{
            cout<<A[i]<<" ";
            }
        }
    }
    /*for(int i=0;i<a;i++){
        if(i==a-1){
            cout<<A[i]<<endl;
        }else{
        cout<<A[i]<<" ";
        }
    }*/
    return 0;
}

