#include<iostream>
#include<stdio.h>
#include<math.h>
#include    <iomanip>
#include    <map>
#include    <set>
#include    <bitset>
using namespace std;
#define FR(i,k,N) for(int i=k;    i<N;i++)
#define REP(i,N) for(int i=0;    i<N;i++)
int a,b;

int main(){
    int sen[10][10001];
    auto maa=0;
    while(cin>>a>>b&&a!=0){
        REP(i, a)REP(j, b) cin>>sen[i][j];
        REP(i, pow(2, a)) {
            bitset<10> senbei(i);
            //cout<<i<<" "<<senbei<<endl;
            bitset<10> ichi(1);
            REP(j, a){
                if ((((senbei >> j) & ichi)==1)){
                    REP(k, b) {sen[j][k]=(sen[j][k]+1)%2;}
                }
            }
            auto sum=0;
            REP(jj, b){
                auto temp=0;
                REP(ii, a){
                    temp+=(sen[ii][jj]+1)%2;
                }
                sum+=max(temp,(a-temp));
            }
            REP(j, a){
                if ((((senbei >> j) & ichi)==1)){
                    REP(k, b) {sen[j][k]=(sen[j][k]+1)%2;}
                }
            }
            maa=(max(maa,sum));
            
            //cout<<i<<" "<<maa<<endl;
        }
        cout<<maa<<endl;
    }
    return 0;
}