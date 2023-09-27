#include <iostream>

using namespace std;

void init(char*);

int main(){
    int n, m, i;
    char a, b, convert[128];
    while(cin >> n){
        if(n == 0){
            break;
        }
        init(convert);
        for(i = 0; i < n; ++i){
            cin >> a >> b;
            convert[a] = b;
        }
        cin >> m;
        for(i = 0; i < m; ++i){
            cin >> a;
            if(convert[a] != 0){
                cout << convert[a];
            }else{
                cout << a;
            }
        }
        cout << endl;
    }
}

void init(char* ary){
    int i;
    for(i = 0; i < 128; ++i){
        ary[i] = 0;
    }
}