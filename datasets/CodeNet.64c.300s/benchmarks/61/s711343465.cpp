#include <iostream>

using namespace std;

int main(){

        int r,c,lsum,tmp;
        cin >> r >> c;
        int num[101] = {};

        for(int i = 0; i < r; i++){
                lsum = 0;
                for(int j = 0; j < c; j++){
                        cin >> tmp;
                        lsum += tmp;
                        num[j] += tmp;
                        num[c] += tmp;
                        
                        cout << tmp << " ";

                        if(j == (c - 1)) cout << lsum << "\n";

                }
        }

        for(int k = 0; k <= c; k++){
                cout << num[k];
                if(k != c) cout << " ";
                else cout << "\n";
        }

        return 0;
}