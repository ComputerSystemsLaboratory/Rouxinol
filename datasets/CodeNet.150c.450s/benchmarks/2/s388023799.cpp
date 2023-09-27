#include<iostream>
using namespace std;

int A[100100];
int n;

void replace(int i,int j){
    int temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}

int partition(int p,int r){
    int x=A[r];
    int i=p-1;
    for(int j=p;j<r;++j){
        if(A[j]<=x){
            //++i;
            replace(++i,j);
        }
    }
    //replace(i+1,r);
    //return i+1;
    replace(++i,r);
    return i;
}

int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>A[i];
    }
    int result=partition(0,n-1);

    for(int i=0;i<n;++i){
        if(i==result){
            cout<<"[";
        }
        cout<<A[i];
        if(i==result){
            cout<<"]";
        }
        if(i!=n-1){
            cout<<" ";
        }
        else{
            cout<<"\n";
        }
    }
}
