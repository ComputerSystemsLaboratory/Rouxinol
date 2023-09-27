#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

string chengeWord(int n){
    string str;
    if(n >= 1000){
        if(n / 1000 > 1) str+= ('0' + n / 1000);
        str+= 'm';
        n%=1000;
    }
    if(n >= 100){
        if(n / 100 > 1) str+= ('0' + n / 100);
        str+= 'c';
        n%=100;
    }
    if(n >= 10){
        if(n / 10 > 1) str+= ('0' + n / 10);
        str+= 'x';
        n%=10;
    }
    if(n >= 1){
        if(n > 1) str+= ('0' + n);
        str+= 'i';
    }
    return str;
}

int chengeNum(string a){
    int num = 0;
    rep(i,a.size()){
        if(a[i] >= '1' && a[i] <= '9'){
            if(a[i + 1] == 'm') num+= (a[i] - '0') * 1000;
            else if(a[i + 1] == 'c') num+= (a[i] - '0') * 100;
            else if(a[i + 1] == 'x') num+= (a[i] - '0') * 10;
            else num+= (a[i] - '0') * 1;
            i++;
        }else{
            if(a[i] == 'm') num+= 1000;
            else if(a[i] == 'c') num+= 100;
            else if(a[i] == 'x') num+= 10;
            else num+= 1;
        }
    }
    return num;
}

int main(){
    int n;
    string a, b;
    cin >> n;
    rep(i,n){
        cin >> a >> b;
        int sum = chengeNum(a) + chengeNum(b);
        cout << chengeWord(sum) << endl;
    }
}