#include <iostream>

int main(){
    using namespace std;

    int number = 0;
    int count  = 1;
    while( true ){
        cin >> number;
        if( number == 0 ) break;
        cout << "Case " << count << ":" << " " << number << endl;
        ++count;
    }
    
    return 0;
}