#include<iostream>
using namespace std;

int main(){
    int S[10000] = {0};
    int T[500] = {0};
    int n = 0;
    int q = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> S[i];
    cin >> q;
    for (int i = 0; i < q; i++) cin >> T[i];
    
    int count = 0;
    for (int i_t = 0; i_t < q; i_t++){
        for (int i_s = 0; i_s < n; i_s++){
            if (T[i_t] == S[i_s]){
                count++;
                break;
            }
        }
    }
    cout << count << endl;
}
