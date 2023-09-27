#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int i,x;
    i=1;
    while (1) {
       
        cin >> x;
        if (x==0) {break;}
        else{
        cout << "Case " << i << ": " << x << endl;
        
        i++;
        }
        
    }
    
    return 0;
}