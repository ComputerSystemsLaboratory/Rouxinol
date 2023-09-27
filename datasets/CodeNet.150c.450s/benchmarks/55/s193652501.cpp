
#include<iostream>
#include<cctype>

using namespace std;
int main(){
    string x;
    
    while(1){
       
        int sum = 0;
        cin >> x;
        if(x == "0")break;
        
        for (int i = 0; i < x.size(); i++){
            int a = x[i] - '0';
            sum += a;
        }
        
        cout << sum << endl;
        
     
        
        
    }return 0;
}
