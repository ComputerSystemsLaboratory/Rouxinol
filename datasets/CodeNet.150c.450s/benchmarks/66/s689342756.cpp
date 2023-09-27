#include<iostream>
#include<string>
using namespace std;

int main(){
    int N,M,openflag=0,flag = 0;
    string baf_U,baf_T;
    string U[256];
    string T[256];
    cin >> N;
    for(int i= 0;i<N;i++){
        cin >> baf_U;
        U[i] = baf_U;
    }
    cin >> M;
    for(int i=0;i<M;i++){
        cin >> baf_T;
        T[i] = baf_T;
    }
    for(int i=0;i<M;i++){
        for(int k = 0;k<N;k++){
            if(U[k]==T[i]){
                flag = 1;
            }
        }
        if(flag ==1){
            if(openflag==0){
                cout <<"Opened by "<<T[i]<<endl;
                openflag = 1;
            }else{
                cout <<"Closed by "<<T[i]<<endl;
                openflag = 0;
            }
        }else{
            cout <<"Unknown "<<T[i]<<endl;
        }
        flag = 0;
    }
    return 0;
}
