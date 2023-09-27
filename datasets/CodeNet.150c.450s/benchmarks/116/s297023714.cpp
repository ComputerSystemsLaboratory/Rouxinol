#include <iostream>
using namespace std;

int data[1001000]={0};

int main(){
    int n,k;
    int sum = -10000000;
    int tmp;
    while(1){
        cin >> n >> k;
        tmp = 0;
        if(n == 0 && k == 0) break;
        for(int i=0;i<n;i++) cin >> data[i];
        for(int i=0;i<k;i++) tmp += data[i];
        sum = max(sum,tmp);
        for(int i=k;i<n;i++){
            tmp -= data[i-k];
            tmp += data[i];
            sum = max(tmp,sum);
        }
        cout << sum << endl;
    }
}