#include <bits/stdc++.h>
#define ll long long
#define INF INT_MAX 
#define mod 1000000007
using namespace std;
int main(){
    ll wan;
    ll N,P,i=0;
    vector<int> people(100,0);
    while(1){
        cin >> N >> P;
        if(N==0&&P==0) return 0;
        wan = P;
        for(int i=0;i<N;i++) people[i]=0;
        i=0;
        while(1){
            if(wan>0){
                people[i]++;
                wan--;
                if(people[i]==P){
                    cout << i << endl;
                    break;
                }
            }else{
                wan = people[i];
                people[i] = 0;
            }
            i++;
            if(i==N) i=0;
        }
    } 
}                                                                                                                         
