#include <iostream>
using namespace std;
int main(){
    int m=100000;
    int n;
    cin >> n;
    for (int i = 0; i<n;i++){
        m = m*1.05;
        if(m%1000 != 0)
            m = m - m%1000 +1000;
        else
            m = m - m%1000;
    }
    cout << m << endl;
}