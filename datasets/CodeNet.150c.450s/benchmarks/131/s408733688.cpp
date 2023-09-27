#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int a0, l, pos, pos_j, big, sma, tmp, pwr;
    bool fin;
    while(1){
        int a[21];
        cin >> a[0] >> l;
        if(l == 0)
            break;

        vector<int> list(l);
        pos = 0;
        fin = false;
        while(true){
            tmp = a[pos];
            pwr = pow(10, l-1);
            for(int i=0; i<l; i++){
                list[i] = tmp / pwr;
                tmp -= list[i] * pwr;
                pwr /= 10;
            }
            sort(list.begin(), list.end());

            big = 0;
            sma = 0;
            pwr = pow(10, l-1);
            for(int i=0; i<l; i++){
                big += list[l-i-1] * pwr;
                sma += list[i] * pwr;
                pwr /= 10;
            }
            a[++pos] = big - sma;

            for(int i=0; i<pos; i++){
                if(a[i] == a[pos]){
                    pos_j = i;
                    fin = true;
                    break;
                }
            }
            if(fin){
                cout << pos_j << ' ' << a[pos] << ' ' << pos - pos_j << endl;
                break;
            }
        }
    }
  
    return 0;
}