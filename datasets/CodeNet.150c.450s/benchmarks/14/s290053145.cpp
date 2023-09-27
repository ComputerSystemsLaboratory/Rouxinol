#include <iostream>
using namespace std;
 
int main() {
    int i,n,k;
	cin >> n;
    for(i=1;i<=n;i++){
        if(i % 3 == 0){
            cout << " " << i;
        }
        else{
            for(k=i;k !=0;k /=10){
                if(k % 10 == 3){
                    cout << " " << i;
                    break;
                }
            }
        }
    }
    cout << endl;
    return 0;
}