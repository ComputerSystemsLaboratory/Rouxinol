#include<iostream>

using namespace std;

int main(void){
    int N,A,B,C,X;
    N =1;
    C =1;
    while(N != 0 && C != 0 ){
        int cnt = 0,lop3=0;
        cin>>N>>A>>B>>C>>X;
        if(N == 0 && C == 0 ){
            break;
        }
        int Y[N];
        for(int lop=0 ;lop< N;lop++){
            cin>>Y[lop];
        }
        for(int lop2=0 ;lop2< 10009;lop2++){
            if(Y[lop3] == X){
                cnt++;
                lop3++;
            }
            if(cnt == N){
                cout << lop2<<endl;
                break;
            }else if(lop2 == 10000){
                cout<<-1<<endl;
                break;
            }
            X = (A * X + B)%C; 
        }
    }

    return 0;
}
