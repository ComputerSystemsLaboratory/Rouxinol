#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
        int i ,N, M, P, sum;

        while(1){
                cin >> N >> M >> P;
                if(N == 0 && M == 0 && P == 0){
                        break;
                }

                sum = 0;
                vector<int> rate(N);
                for(i = 0; i < N; i++){
                        cin >> rate[i];
                        sum += rate[i];
                }
                sum = sum * (100 - P);

                if(rate[M - 1] == 0){
                        cout << "0" << endl;
                }else{
                        cout << sum / rate[M - 1] << endl;
                }
        }
        return 0;
}