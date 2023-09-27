#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i<(n); i++)
class dice{
    public:
    int d[6];
    void input(){
        rep(i, 6) cin >> d[i];
    }
    void roll(char s){
        if (s == 'N'){
            int sub = d[0];
            d[0] = d[1];
            d[1] = d[5];
            d[5] = d[4];
            d[4] = sub;
        }
        if (s == 'S'){
            int sub = d[0];
            d[0] = d[4];
            d[4] = d[5];
            d[5] = d[1];
            d[1] = sub;
        }
        if (s == 'E'){
            int sub = d[2];
            d[2] = d[0];
            d[0] = d[3];
            d[3] = d[5];
            d[5] = sub;
        }
        if (s == 'W'){
            int sub = d[2];
            d[2] = d[5];
            d[5] = d[3];
            d[3] = d[0];
            d[0] = sub;
        }
      	if (s == 'R'){
          	int sub = d[1];
          	d[1] = d[2];
          	d[2] = d[4];
          	d[4] = d[3];
          	d[3] = sub;
        }
    }
    int print(){
        return d[2];
    }
    void roll_and_return(int top, int front){
      	while (d[0] != top){
          	roll('S');
          	if (d[0] != top){
            	roll('E');
            }
        }
      	rep(i, 4){
            if (d[1] == front) break;
            roll('R');
        }
    }
};
int main(){
    dice d;
    d.input();
    int n;
    cin >> n;
    rep(i, n){
        int a, b;
      	cin >> a >> b;
        d.roll_and_return(a, b);
        cout << d.print() << endl;
    }
}
