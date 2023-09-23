#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x, y;
    cin >> x >> y;
    int dai = x > y ? x : y;
    int sho = x > y ? y : x;
    int ama;
    
    while(sho){
        ama = dai % sho;
        dai = sho;
        sho = ama;
    }
    
    cout << dai << endl;
    return 0;
}