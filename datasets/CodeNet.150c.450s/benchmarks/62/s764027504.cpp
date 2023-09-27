#include <iostream>

using namespace std;

int main(){
    const int num=3;
    
    int x[num];
    cin >> x[0] >> x[1] >> x[2];
    
    for(int i=num-1; i>0; --i)
        for(int j=0; j<i; ++j)
        {
            if(x[j]>x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    
    
    cout << x[0] <<" "<< x[1] <<" "<< x[2] << endl;
    
    
    
    return 0;
}
