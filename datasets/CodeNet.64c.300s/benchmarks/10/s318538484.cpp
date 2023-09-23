#include <iostream>
using namespace std;
int main (int argc, const char * argv[])
{
    int x,y;
    while(1){
        cin >>x>>y;
        if(x==0&&y==0)break;
        
         else if (x<y){
             cout << x <<" "<<y<<endl;
        }else{
            cout << y <<" "<<x<<endl;
            
        }
    }
    // insert code here...
   // std::cout << "Hello, World!\n";
    return 0;
}