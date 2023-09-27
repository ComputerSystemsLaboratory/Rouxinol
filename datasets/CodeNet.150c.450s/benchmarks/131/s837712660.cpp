#include <bits/stdc++.h>
using namespace std;

map<int,int> m;
int a,L,mi,ma;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> a >> L,L){
        vector<int> num(L);
        m.clear();
        m[a]=1;
        for (int i=2;;++i){
            mi=ma=0;
            for (int j=0;j<L;++j){
                num[j]=a%10; a/=10;
            }
            sort(num.begin(),num.end());
            for (int j=0;j<L;++j)
                mi+=(int)pow(10,L-1-j)*num[j];
            reverse(num.begin(),num.end());
            for (int j=0;j<L;++j)
                ma+=(int)pow(10,L-1-j)*num[j];
            a=ma-mi;
            if (m[a]){
                cout << m[a]-1 << ' ' << a << ' ' << i-m[a] << '\n';
                break;
            } else m[a]=i;
        }
    }
}
