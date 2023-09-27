#include<iostream>
using namespace std;
int main(){
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int count=0;
    
    for (int x=a; x<=b; x++){
        
        if(c%x ==0){
            count ++;
        }else{
            continue;
        }
        
        
    }
    cout << count << endl;
    
    return 0;
}
