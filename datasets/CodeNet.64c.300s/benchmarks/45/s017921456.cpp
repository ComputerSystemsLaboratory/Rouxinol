#include <iostream>
using namespace std;

int main(){
    int N,M,P;
    while(1){
        cin >> N >> M >> P;
        if(N==0) break;

        int total=0,win,tmp;
        for(int i=1; i<=N; i++){
            cin >> tmp;
            total+=tmp;
            if(i==M){
                win = tmp;
            }
        }
        
        if(win==0){
            cout << 0 << endl;
            continue;
        }
        cout << total*(100-P)/win << endl;
    }    
    return 0;
}