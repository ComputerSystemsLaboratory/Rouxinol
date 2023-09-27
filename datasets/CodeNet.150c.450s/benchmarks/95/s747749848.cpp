#include <iostream>
using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
        if(n==0) break;

        char str[3];
        bool state[2]={false,false};
        bool prev=false;
        int cnt=0;
        for(int i=0; i<n; i++){
            cin >> str;
            int lr;
            if(str[0]=='l') lr=0;
            else lr=1;
            if(str[1]=='u') state[lr]=true;
            else state[lr]=false;

            if(state[0]!=prev && state[1]!=prev){
                prev =state[0];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}