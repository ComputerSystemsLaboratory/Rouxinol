#include <iostream>
#include <vector>
using namespace std;


int main(){
    int a[10000];
    int total = 0;
    for(int i = 0 ;i <= 10000; i ++){
        int tmp;
        cin >> tmp;
//        if(tmp < 0 || tmp >= 10000) return -1;
        if(tmp == 0){
            break;
        }
        a[i] = tmp;
        total ++;
    }

    for(int j = 0; j <= total-1; j ++)
        cout << "Case " << j+1 << ": " << a[j] << endl;

    return 0;
}
