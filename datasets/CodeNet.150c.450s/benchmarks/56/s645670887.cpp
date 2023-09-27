#include <iostream>
using namespace std;

int main() {
    int n, m, Min=1000001, Max=-1000000;
    long Sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        if(m < Min){
            Min = m;
        }
        if(m > Max){
            Max = m;
        }
        Sum += m;
    }
    cout << Min << " " << Max << " " << Sum << endl;
    return 0;
}