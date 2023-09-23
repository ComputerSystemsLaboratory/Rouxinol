#include<iostream>
using namespace std;

int main(){
    int coin[]={500,100,50,10,5,1};
    int n;
    int i;
    int result;
    cin >> n;
    while(n){
        n = 1000 - n;
        i = 0;
        result = 0;
        while(n){
            if(n - coin[i] >= 0){
                n -= coin[i];
                result++;
            }else{
                i++;
                if(i > 6){
                    break;
                }
            }
        }
        cout << result << endl;
        cin >> n;
    }
}