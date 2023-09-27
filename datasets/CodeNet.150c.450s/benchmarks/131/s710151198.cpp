#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define pb(a) push_back(a)
#define all(a) (a).begin(), (a).end()
#define debug(x) cout << "debug " << x << endl;
using namespace std;

string sort(string str, int len, int x){
    while(len != str.size()) str+='0';
    if(x == 1){
        rep(i,str.size() - 1){
            rep(j,str.size() - 1){
                if(str[j] > str[j + 1]){
                    char temp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = temp;
                }
            }
        }
    }else if(x == 0){
        rep(i,str.size() - 1){
            rep(j,str.size() - 1){
                if(str[j] < str[j + 1]){
                    char temp = str[j];
                    str[j] = str[j + 1];
                    str[j + 1] = temp;
                }
            }
        }
    }
    return str;
}

int changeNum(string str){
    int num = 0, K = 1;
    for(int i = str.size() - 1; i >= 0; i--){
        num+=(str[i] - '0') * K;
        K*=10;
    }
    return num;
}

string changeStr(int n, int len){
    string str;
    int K = 1;
    rep(i,len) K*=10;
    rep(i,len + 1){
        if(n / K == 0) str+= '0';
        else str+= ('0' + n / K);
        n%=K; K/=10;
    }
    return str;
}

bool checkNum(int a[25], int i){
    rep(j,i){
        if(a[i] == a[j] && i != j){
            cout << j << ' ' << a[i] << ' ' << i - j << endl;
            return 1;
        }
    }
    return 0;
}

int main(){
    string str;
    int len, A[25];
    while(cin >> str >> len, str[0] != '0'||len){
        A[0] = changeNum(sort(str, len, -1));
        range(i,1,24){
            A[i] = changeNum(sort(str, len, 0)) - changeNum(sort(str,len, 1));
            str = changeStr(A[i], len - 1);
            if(checkNum(A, i)) break;
        }
    }
}