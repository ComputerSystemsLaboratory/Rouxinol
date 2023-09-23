#include <iostream>
using namespace std;

int main(){
    
    int a[3];
    int tmp;
    
    cin >> a[0] >> a[1] >> a[2];
    for(int ii=0;ii<3;ii++){
        for(int jj = 0;jj<3;jj++){
            if( ii != jj){
                if(a[ii] < a[jj]){
                    tmp = a[ii];
                    a[ii] = a[jj];
                    a[jj] = tmp;
                }
                
            }
        }
    }
    
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
    
    return 0;
    
}