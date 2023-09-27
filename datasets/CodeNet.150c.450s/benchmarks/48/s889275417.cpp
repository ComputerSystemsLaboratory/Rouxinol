#include <iostream>
using namespace std;
int main(void)
{
    for(;;){
        int e;
        cin >> e;
        int m = 1<<26;
        if (e == 0){return 0;}
        for(int z = 0 ; z*z*z <= e ; z++){
            for(int y = 0 ; y*y + z*z*z <= e ; y++){
                int x = e - y*y - z*z*z;
                if(x + y + z < m){
                    m = x + y + z;
                }
            }
        }
        cout << m << endl;
    }
}
