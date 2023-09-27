#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,q;
    cin >> N >> q;
    int Q1[100000]={};
    string Q2[100000]={};
    int T=0;
    int head=0;
    int tail=N;
    for(int i=0;i<N;i++){
        cin >> Q2[i] >> Q1[i];
    }
    while(head!=tail || Q1[head]!=0 || Q1[tail]!=0){
        if(Q1[head]<=q){
            T+=Q1[head];
            cout << Q2[head] << " " << T << endl;
            Q1[head]=0;
            Q2[head]=" ";
            if(head==N){
                head=0;
            }
            else{
                head++;
            }
        }
        else{
            T+=q;
            Q1[head]-=q;
            Q1[tail]=Q1[head];
            Q2[tail]=Q2[head];
            Q1[head]=0;
            Q2[head]=" ";
            if(tail==N){
                head++;
                tail=0;
            }
            else{
                 if(head==N){
                head=0;
            }
            else{
                head++;
            }
                tail++;
            }
        }
    }
}
