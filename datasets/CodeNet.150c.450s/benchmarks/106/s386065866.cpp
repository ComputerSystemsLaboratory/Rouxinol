#include <iostream>
using namespace std;
int main (int argc, const char * argv[])
{
    int a,b,c;
    int z=0;
    cin >>a >>b >>c;
    for(int x = a; x <= b; x++){
        if(c%x==0){
        //cout << x <<endl;
            z++;
        }
    }
    // insert code here...
   // std::cout << "Hello, World!\n";
    cout << z<<endl;
    return 0;
}