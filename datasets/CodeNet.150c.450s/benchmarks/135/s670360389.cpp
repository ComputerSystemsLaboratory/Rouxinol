#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int N = 1500 * 1000;
    while(1){
        cin >> n; cin >> m;
        if(n * m == 0){
            break;
        }
        int v_interval[n], h_interval[m];
        for (int i = 0; i < n; i++) {
            cin >> v_interval[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> h_interval[i];
        }
        
        
        short v_length_num[N+1];
        for(int i = 0; i < N+1; i++){
            v_length_num[i] = 0;
        }
        int v_length = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(i == j){
                    v_length = v_interval[i];
                } else {
                    v_length += v_interval[j];
                }
                v_length_num[v_length]++;
            }
        }


        short h_length_num[N+1];
        for(int i = 0; i < N+1; i++){
            h_length_num[i] = 0;
        }
        int h_length = 0;
        for(int i = 0; i < m; i++){
            for(int j = i; j < m; j++){
                if(i == j){
                    h_length = h_interval[i];
                } else {
                    h_length += h_interval[j];
                }
                h_length_num[h_length]++;
            }
        }


        int count = 0;
        for(int i = 0; i < N+1; i++){
            count += v_length_num[i] * h_length_num[i];
        }
        cout << count << endl;
    }
    return 0;
}