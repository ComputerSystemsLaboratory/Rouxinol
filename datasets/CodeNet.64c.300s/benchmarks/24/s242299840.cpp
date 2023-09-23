#include <iostream>
#define N 1000
using namespace std;
int main(){
    int n, scoreA, scoreB;
    while(cin >> n, n != 0){
        scoreA = 0; scoreB = 0;
        int a,b;
        for (int i = 0; i < n; i++){
            cin >> a >> b;
            if (a > b){
                scoreA += (a+b);
            }else if (b > a){
                scoreB += (a+b);
            }else{
                scoreA += a; scoreB += b;
            }
        }
        cout << scoreA << " " << scoreB << endl;
    }
    return 0;
}