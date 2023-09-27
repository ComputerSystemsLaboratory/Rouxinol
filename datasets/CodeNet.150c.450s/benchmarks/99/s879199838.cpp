#include <iostream>
#include <string>
using namespace std;

int num[] = {1000, 100, 10, 1};
char chr[] = {'m', 'c', 'x', 'i'};

int frommcxi(string x){
    int res = 0, n = 1;
    for(int i=0; i<x.size(); i++){
        int j;
        for(j=0; j<4; j++){
            if(x[i] == chr[j]){
                res += n*num[j];
                n = 1;
                j = 10;
            }
        }
        if(j < 10)
            n = x[i] - '0';
    }
    return res;
}

string tomcxi(int n){
    string res = "";
    int m;
    for(int i=0; i<4; i++){
        m = n/num[i];
        if(m >= 2)
            res += (char)(m + '0');
        if(m >= 1)
            res += chr[i];
        n -= m*num[i];
    }
    return res;
}

int main(){
    int n;
    cin >> n;

    string a, b;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        cout << tomcxi(frommcxi(a) + frommcxi(b)) << endl;
    }
    
    return 0;
}