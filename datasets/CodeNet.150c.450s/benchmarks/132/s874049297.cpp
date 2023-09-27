#include <iostream>
#include <vector>
using namespace std;

int main(void){
    while(true){
        int n, p;
        cin >> n >> p;

        if(n == 0 && p == 0){ break; }

        int bucket = p;
        vector<int> stone(n, 0);
        for(int i = 0; ; i = (i + 1) % n){
            if(bucket ==0){
                bucket += stone[i];
                stone[i] = 0;
            }
            else{
                --bucket;
                ++stone[i];

                if(stone[i] == p){
                    cout << i << endl;
                    break;
                }
            }
        }
    }

    return 0;
}