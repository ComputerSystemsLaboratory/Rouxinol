#include<iostream>
#include<string.h>
#include<vector>
#include<list>
#include<stdio.h>
#include<math.h>
#include<iomanip>
#include<map>
#include<stack>
#include<queue>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug " << x << endl;
using namespace std;

struct Data{
    char a;
    char b;
};

int main(){
    int n;
    while(cin >> n, n){
        Data data[1024];
        rep(i,n){
            cin >> data[i].a >> data[i].b;
        }
        int m;
        cin >> m;
        rep(i,m){
            char inp;
            bool outp = true;
            cin >> inp;
            rep(j, n){
                if(data[j].a == inp){
                    cout << data[j].b;
                    outp = false;
                    break;
                }
            }
            if(outp)
                cout << inp;
        }
        cout << endl;
    }
}