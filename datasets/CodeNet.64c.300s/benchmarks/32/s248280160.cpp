#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long long min=0,max=0,total=0;
    
    int x,n;
    cin >>x;
    for (int i=1; i<=x; i++) {
        
        cin >> n;
        
        if(i==1){
            
            
            min =n;
            max=n;
            total=n;
        }else {
            if(n<min){
                min=n;
            }
            if(n>max){
                max=n;
            }
            
            total=total+n;
        }
    }
    cout <<min<<" "<<max<<" "<<total<<endl;
    
    // insert code here...
    //std::cout << "Hello, World!\n";
    return 0;
}