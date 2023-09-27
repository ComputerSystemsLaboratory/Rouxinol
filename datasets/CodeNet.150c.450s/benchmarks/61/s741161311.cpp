#include <iostream>
using namespace std;
int main(void){
    int N,A,B,C,X,Y[100];
    while(cin>>N>>A>>B>>C>>X){
        if(N==0 && A==0 && B==0 && C==0 && X==0) break;
        for(int i=0; i<N; i++)
            cin>>Y[i];
        int Cn=0;
        for(int i=0; i<=10000; i++){
            if(Y[Cn]==X) Cn++;
            if(Cn>=N){
                cout<<i<<endl;
                break;
            }
            X=(A*X+B)%C;
        }
        if(Cn<N) cout<<-1<<endl;
    }
}

