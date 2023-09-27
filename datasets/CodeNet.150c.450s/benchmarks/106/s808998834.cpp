#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a,b,c;
    cin >> a >> b >> c;
    
    int yaku = 0;
    for(int i=a;i<=b;i++){
        if(c%i==0){
            yaku++;
        }
    }
    
    cout << yaku << endl;
    
    return 0;
}