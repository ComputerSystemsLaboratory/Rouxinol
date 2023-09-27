#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    
    for(int i=0;i<n;++i){
        
        bool flg=false;
        int maxB=0,maxC=0;
        
        for(int j=0;j<10;++j){
            int tmp;
            cin >> tmp;
            if(maxB<tmp)
                maxB=tmp;
            else if(maxC<tmp)
                maxC=tmp;
            else{
                flg=true;
            }
        }
        
        if(flg)
            cout << "NO" <<endl;
        else
            cout << "YES" <<endl;
        
    }
    
    
    return 0;
}