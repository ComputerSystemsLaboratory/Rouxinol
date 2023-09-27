#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a[5],b[5];
    int s=0;
    int t=0;
    
    for(int i=0;i<4;i++){
        cin >> a[i];
    }
    for(int i=0;i<4;i++){
        cin >> b[i];
    }
    
    for(int i=0;i<4;i++){
        s=s+a[i];
        t=t+b[i];
    }
    
    if(s>=t){
        cout << s << endl;
    }
    else{
        cout << t << endl;
    }
    
    
    return 0;
}