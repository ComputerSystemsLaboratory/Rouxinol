#include <bits/stdc++.h>
using namespace std;

#define rep(i,N) for(int i=0;i<(int)(N);i++)
#define REP(i,k,N) for(int i=k;i<(int)(N);i++)
#define rrep(i,N) for(int i=N-1;i>=(int)0;i--)

#define vi vector<int>
#define pb push_back

int main(){
//    ifstream in("a_in.txt");
//    cin.rdbuf(in.rdbuf());

    int n,r;
    int cd[51];
    int p,c;
    int tmp[51];
    while(cin>>n>>r,n!=0){
        rep(i,n){
            cd[i]=n-i;
        }
        rep(i,r){
            cin >> p >>c;
            rep(j,c){
                tmp[j]=cd[p+j-1];
            }
            rrep(j,p){
                cd[j+c-1] = cd[j-1];
            }
            rep(j,c){
                cd[j]=tmp[j];
            }

        }
        cout << cd[0] << endl;
    }

    return 0;
}
