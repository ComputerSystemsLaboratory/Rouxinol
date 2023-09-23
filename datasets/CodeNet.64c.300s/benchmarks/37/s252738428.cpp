#include <iostream>

using namespace std;

int main(void){

        int n;

        cin >> n;

        do{
                int count = 0;
                int sum = 0;
                for(int i = 1; i <= n/2; i++){
                        sum = i;
                        for(int j = i+1; sum <= n; j++){
                                sum += j;
                                if(sum == n){
                                        count++;
                                        break;
                                }
                        }
                }
                cout << count << endl;
                cin >> n;
        }while(n != 0);

        return 0;
}