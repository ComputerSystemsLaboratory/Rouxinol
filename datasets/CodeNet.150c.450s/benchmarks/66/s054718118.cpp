#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    string id[257];
    for(int i = 0; i < n; i++){
        cin >> id[i];
    }
    int lock = 0;
    int m;
    cin >> m;
    string x;
    for(int i = 0; i < m; i++){
        int cnt = 0;
        cin >> x;
        for(int j = 0; j < n; j++){
            if(x == id[j]){
                if(lock == 0){
                    lock = 1;
                    cout << "Opened by " << x << endl;
                }
                else{
                    lock = 0;
                    cout << "Closed by " << x << endl;
                }
                continue;
            }
            else cnt++;
        }
        if(cnt == n){
            cout << "Unknown " << x << endl;
        }
    }
        
    return 0;
}

