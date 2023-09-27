
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int S;
    cin >> S;
    
    cout << S / 3600 << ":" << (S % 3600) / 60 << ":" << (S % 3600) % 60 <<  endl;
    return 0;
}