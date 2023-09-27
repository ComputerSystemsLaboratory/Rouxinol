#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 1000000

int main() {
    int num,L,result[MAX]={};
    while(cin>>num>>L, (num||L)){
        int i=0, at = num, t[6];
        for(int i=0 ; i<MAX ; i++) result[i] = -1;
        while(result[at] == -1){
            result[at] = i;
            for(int j=0 ; j < L ; j++){
                t[j] = at % 10;
                at = at / 10;
            }
            sort(t,t+L);
            int max_num=0, min_num=0, mul=1;
            for(int j=0; j < L ; j++){
                max_num += t[j] * mul;
                min_num += t[L-j-1] * mul;
                mul *= 10;
            }
            at = max_num - min_num;
            i++;
        }
        cout << result[at] << " " << at << " " << i-result[at] << endl;
    }
    return 0;
}