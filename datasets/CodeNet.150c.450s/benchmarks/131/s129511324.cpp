#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
const int mod=924844033,MAX=1503*1503,INF=1<<30;

int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    while(1){
        string S;
        int a,L;cin>>a>>L;
        S=to_string(a);
        if(L==0) break;
        
        int cnt=2;
        map<int,int> MA;
        MA[a]=1;
        while(1){
            while(S.size()<L) S='0'+S;
            
            string T=S;
            sort(all(T));
            
            int A,B;
            B=stoi(T);
            
            reverse(all(T));
            A=stoi(T);
            
            if(MA[A-B]!=0){
                cout<<MA[A-B]-1<<" "<<A-B<<" "<<cnt-MA[A-B]<<endl;
                break;
            }
            MA[A-B]=cnt;
            
            cnt++;
            S=to_string(A-B);
        }
    }
}




