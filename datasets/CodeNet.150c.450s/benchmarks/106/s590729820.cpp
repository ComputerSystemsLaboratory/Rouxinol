#include <iostream>
 

int main(){
    using namespace std;
 
    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    for( int factor = a; factor <= b; ++factor ){
        if( (c % factor) != 0 ){ 
            continue;
        }
        ++count;
    }

    cout << count << endl;

    return 0;
}