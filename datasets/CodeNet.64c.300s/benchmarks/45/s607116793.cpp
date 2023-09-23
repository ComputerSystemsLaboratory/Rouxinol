#include <iostream>
using namespace std;



int main(){
    int n,m,p,i;
    while( cin >> n >> m >> p, n||m||p ){
        m--;
        int x[100], sum=0;
        for(i=0;i<n;i++){
            cin >> x[i];
            sum += x[i] * 100;
        }
        cout << (x[m]?sum*(100-p)/100/x[m]:0) << endl;
    }
    return 0;
}