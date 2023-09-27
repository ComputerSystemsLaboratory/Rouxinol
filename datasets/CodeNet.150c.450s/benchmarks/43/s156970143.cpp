#include <iostream>
using namespace std;

int main(){
    int n;

    while(cin >> n, n != 0){
        int a_point = 0, b_point = 0;
        for(int i=1; i<=n; i++){
            int tmp1, tmp2;
            cin >> tmp1 >> tmp2;
            if(tmp1 > tmp2){
                a_point += tmp1 + tmp2;
            }else if (tmp1 < tmp2){
                b_point += tmp1 + tmp2;
            }else{
                a_point += tmp1;
                b_point += tmp2;
            }
        }
        cout << a_point << " " << b_point << endl;
    }
    return 0;
}