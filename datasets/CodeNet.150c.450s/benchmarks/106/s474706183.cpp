#include<iostream>
using namespace std;
int main(){
    int a,b,c,ai,count = 0;
    
    cin >> a >> b >> c;
    
    for(ai = a; ai <= b; ai++){
        if(c % ai == 0){
            count++;
        } 
    }
    
    cout << count << endl;
    
    return 0;
}
