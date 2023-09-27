#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
//#define int long long
#define INF 10000000
using namespace std;
bool check(char x){
    for(int i=48; i<=57; i++){
        if(x == i) return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    rep(i,n){
        string a,b;
        cin >> a >> b;
        int flag = 1;
        int tmp,sum = 0;
        rep(j,a.size()){
            if(check((int)a[j])) flag = a[j]-'0';
            else {
                if(a[j] == 'm') tmp = 1000;
                else if(a[j] == 'c') tmp = 100;
                else if(a[j] == 'x') tmp = 10;
                else if(a[j] == 'i') tmp = 1;
                sum += tmp*flag;
                flag = 1;
            } 
        }
        rep(j,b.size()){
            if(check(b[j])) flag = b[j]-'0';
            else {
                if(b[j] == 'm') tmp = 1000;
                else if(b[j] == 'c') tmp = 100;
                else if(b[j] == 'x') tmp = 10;
                else if(b[j] == 'i') tmp = 1;
                sum += tmp*flag;
                flag = 1;
            }
        }
        //cout << sum << endl;
        if(sum/1000 !=0) {
            if(sum/1000 == 1) cout << 'm';
            else cout << sum/1000 << 'm';
            sum -= 1000*(sum/1000);
        }
        if(sum/100 !=0) {
            if(sum/100 == 1) cout << 'c';
            else cout << sum/100 << 'c';
            sum -= 100*(sum/100);
        }
        if(sum/10 !=0) {
            if(sum/10 == 1) cout << 'x';
            else cout << sum/10 << 'x';
            sum -= 10*(sum/10);
        }
        if(sum/1 !=0) {
            if(sum/1 == 1) cout << 'i';
            else cout << sum/1 << 'i';
        }
        cout << endl;
    }
    return 0;
}

