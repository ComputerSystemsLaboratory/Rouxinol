#include<iostream>
#include<string.h>
using namespace std;

void trace(string A[], int N){
    int i;
    string s;
    for(i=0; i<N; i++){
        if(i>0) cout<<" ";
        cout<<A[i];
    }
    cout<<endl;
}

void bubbleSort(string A[], int N){
    int i, j;
    string tmp;
    for(i=0; i<N; i++){
        for(j=1; j<N-i; j++){
            if((int)A[N-j][1] < (int)A[N-j-1][1]) {
                tmp = A[N-j];
                A[N-j] = A[N-j-1];
                A[N-j-1] = tmp;
            }
        }
    }
}

void sellectionSort(string A[], int N){
    int i, j, minj, swp_num=0, flag=0;
    string tmp;
    for(i=0; i<N; i++){
        minj = i;
        for(j=i; j<N; j++){
            if((int)A[j][1] < (int)A[minj][1]){
                minj = j;
                flag=1;
            }
        }
        if(flag==1){
            tmp = A[i];
            A[i] = A[minj];
            A[minj] = tmp;
            swp_num++;
        }
        flag=0;
    }
}

string stableCheck(string A[], string B[], int N){
    int i;
    for(i=0; i<N; i++){
        if(A[i] != B[i]){
            return "Not stable";
        }
    }
    return "Stable";
}

int main(){
    int num, i;
    string s;
    cin>>num;
    string arr1[num], arr2[num], val;
    for(i=0; i<num; i++){
        cin>>val;
        arr1[i]=val;
        arr2[i]=val;
    }
    bubbleSort(arr1, num);
    trace(arr1, num);
    cout<<"Stable"<<"\n";
    sellectionSort(arr2, num);
    trace(arr2, num);
    s=stableCheck(arr1, arr2, num);
    cout<<s<<endl;
    return 0;
}