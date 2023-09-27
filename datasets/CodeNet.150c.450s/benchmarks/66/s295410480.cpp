#include<iostream>
#include<set>

using namespace std;

int main(){

    
        int N;
        cin>> N;
        string U[N];
        for(int i=0; i<N; i++) cin>> U[i];
        int M;
        cin>> M;
        string T[M];
        for(int i=0; i<M; i++) cin>> T[i];

        set<string> user;
        for(int i=0; i<N; i++) user.insert(U[i]);
        int open=0;
        for(int i=0; i<M; i++){
            if(user.count(T[i])){
                if(open){
                    cout<< "Closed by "<< T[i]<< endl;
                    open=0;
                }else{
                    cout<< "Opened by "<< T[i]<< endl;
                    open=1;
                }
            }else{
                cout<< "Unknown "<< T[i]<< endl;
            }
        }

    

    return 0;
}