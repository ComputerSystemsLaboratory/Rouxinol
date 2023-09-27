#include <bits/stdc++.h>
#define ll long long
#define INF 1000000000
using namespace std;
int main(){
        int N;
        cin >> N;
        string key[N];
        for(int i=0;i<N;i++) cin >> key[i];
        string ID;
        int M;
        cin >> M;

        bool lock = true, find = false;
        for(int i=0;i<M;i++){
            cin >> ID;
            for(int j=0;j<N;j++){
                if(ID == key[j]){
                    if(lock){
                        cout << "Opened by " << key[j] << endl;
                        lock = false;
                        find = true;
                        break;
                    }else{
                        cout << "Closed by " << key[j] << endl;
                        lock = true; 
                        find = true;
                        break;
                    }
                }
            }
            if(!find) cout << "Unknown " << ID << endl;
            find = false;
        }
}
