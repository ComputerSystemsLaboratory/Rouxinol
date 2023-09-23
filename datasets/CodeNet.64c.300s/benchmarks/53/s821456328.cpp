#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int i;
    int count = 0;
    cin >> a >> b >> c ;
    
    for( i = a ; i <= b ; i++){
        if( c % i == 0){
            count++;
            
        }
        
    }
    cout << count << endl;
    return 0;
    
}
