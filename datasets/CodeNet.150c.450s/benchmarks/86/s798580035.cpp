#include <iostream>
using namespace std;

int main(){
    int n, m, p, x;
    int s, winner;
    int result;
    cin >> n >> m >> p;
    while(n || m || p){
        s = 0;
        for(int i=0;i<n;++i){
            cin >> x;
            if(i+1==m) winner = x;
            s += x;
        }
        if(winner){
            result = (s * (100-p)) / winner;
        }else{
            result = 0;
        }
        cout << result << endl;
        cin >> n >> m >> p;
    }
}