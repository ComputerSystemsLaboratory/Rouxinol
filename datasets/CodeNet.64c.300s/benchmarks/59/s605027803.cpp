#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n,m,i,count;
    cin >> n;
    count = 0;

    for (int j = 0; j < n ; ++j){
        cin >> m;
        if (m == 2) ++count;
        else if (m < 2 || m%2 ==0){
            continue;
        }
        else{
            i = 3;
            while(i <= sqrt(m)){
                if(m%i == 0) break;
                i = i+2;
            }
            if(i > sqrt(m)) {
                ++count;
            }
        }
    } 
    cout << count << endl;
    return 0;
}