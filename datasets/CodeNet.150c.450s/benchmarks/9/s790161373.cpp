#include <iostream>
using namespace std;
int main(void){
    
    while(true){
        string txt;
        cin >> txt;
        if(txt=="-")break;
        
        int m;
        cin >> m;

        for(int i=0;i<m;i++){
            int n;
            cin >>n;
            txt = txt.substr(n) + txt.substr(0,n);
        }
        cout << txt << endl;
    }
    
    
}