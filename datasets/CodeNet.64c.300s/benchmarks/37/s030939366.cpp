#include <iostream>
using namespace std;
 
int main() {
    int n,count,total;
    while(1){
        cin >> n;
        if(n == 0)break;
        count=0;
        for(int i = 1;i < n;i++){
            total = 0;
            for(int j = i;j < n;j++){
                total += j;
                if(total == n){
                    count++;
                    break;
                }
                else if(total > n){
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}