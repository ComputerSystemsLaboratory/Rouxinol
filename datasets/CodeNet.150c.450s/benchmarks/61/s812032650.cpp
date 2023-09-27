#include<iostream>

using namespace std;
int A, B, C;

int f(int x){

    return (A*x+B)%C;
}

int main(){

    while(1){
        int N, X;
        cin>> N>> A>> B>> C>> X;
        if(!(N||A||B||C||X)) break;
        int Y[N];
        for(int i=0; i<N; i++) cin>> Y[i];

        int cnt=0, over=0;
        for(int i=0; i<N; i++){
            while(1){
                if(cnt>10000){
                    over=1;
                    cout<< -1<< endl;
                    break;
                }
                if(X==Y[i]) {X=f(X); cnt++; break;}
                X=f(X);
                cnt++;
            }
            if(over) break;
        }

        if(!over) cout<< cnt-1<< endl;
        
    }

    return 0;
}