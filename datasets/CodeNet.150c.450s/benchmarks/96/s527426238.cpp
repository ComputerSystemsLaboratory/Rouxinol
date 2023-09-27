#include <iostream>
using namespace std;

int table_r[10]={0,5,3,3,3,3,3,4,3,4};
char t[10][5] = {{0,0,0,0,0},{'.', ',', '!', '?', ' '},};

int main(){
    char abc='a';
    for(int i=2; i<=9; i++){
        for(int j=0; j<table_r[i]; j++){
            t[i][j]=abc++;
        }
    }

    int n;
    cin >> n;
    char buf[1025];
    for(int i=0; i<n; i++){
        cin >> buf;
        for(int j=0; buf[j]!=0; j++){
            char tmp = buf[j];
            if(tmp=='0') continue;
            int ct;
            for(ct=0; buf[j+ct]!=0; ct++){
                if(buf[j+ct]=='0'){
                    int k = tmp-'0';
                    cout << t[k][(ct-1)%table_r[k]];
                    j+=ct;
                    break;
                }
            }
        }
        cout << endl;
    }
            
    return 0;
}