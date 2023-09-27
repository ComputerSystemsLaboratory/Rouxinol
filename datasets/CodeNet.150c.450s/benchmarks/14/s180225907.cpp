#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    
    int n,x;
    cin >> n;
    for (int i = 1; i<=n ; i++) {
        x=i;
        if (x%3 == 0) {
            cout << " " << i;
        }
        else{
            do  {
                if  (x%10 == 3) {
                    cout << " " << i;
                    break;
                }else{
                x /=10;
                }
            
            }while (x);
            }
    }
            cout << endl;
  
    return 0;
}