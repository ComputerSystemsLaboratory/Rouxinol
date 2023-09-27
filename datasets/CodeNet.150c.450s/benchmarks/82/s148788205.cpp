#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int sfc[6];
    int wkSfc[2];
    int cnt;
    
    for(int i=0; i<6; i++){
        cin >> sfc[i];
    }
    
    cin >> cnt;
    
    for(int j=0; j<cnt; j++){
        for(int k=0; k<2; k++){
            cin >> wkSfc[k];
        }
        
        if((wkSfc[0]==sfc[3] && wkSfc[1]==sfc[1])||
           (wkSfc[0]==sfc[4] && wkSfc[1]==sfc[3])||
           (wkSfc[0]==sfc[2] && wkSfc[1]==sfc[4])||
           (wkSfc[0]==sfc[1] && wkSfc[1]==sfc[2])){
    
            cout << sfc[0] << endl;
        
        }else if((wkSfc[0]==sfc[2] && wkSfc[1]==sfc[0])||
           (wkSfc[0]==sfc[5] && wkSfc[1]==sfc[2])||
           (wkSfc[0]==sfc[3] && wkSfc[1]==sfc[5])||
           (wkSfc[0]==sfc[0] && wkSfc[1]==sfc[3])){
        
           cout << sfc[1] << endl;
            
        }else if((wkSfc[0]==sfc[0] && wkSfc[1]==sfc[1])||
           (wkSfc[0]==sfc[1] && wkSfc[1]==sfc[5])||
           (wkSfc[0]==sfc[5] && wkSfc[1]==sfc[4])||
           (wkSfc[0]==sfc[4] && wkSfc[1]==sfc[0])
           ){
        
            cout << sfc[2] << endl;
        
        }else if((wkSfc[0]==sfc[1] && wkSfc[1]==sfc[0])||
           (wkSfc[0]==sfc[5] && wkSfc[1]==sfc[1])||
           (wkSfc[0]==sfc[4] && wkSfc[1]==sfc[5])||
           (wkSfc[0]==sfc[0] && wkSfc[1]==sfc[4])
           ){
        
            cout << sfc[3] << endl;
        
        }else if((wkSfc[0]==sfc[0] && wkSfc[1]==sfc[2])||
           (wkSfc[0]==sfc[2] && wkSfc[1]==sfc[5])||
           (wkSfc[0]==sfc[5] && wkSfc[1]==sfc[3])||
           (wkSfc[0]==sfc[3] && wkSfc[1]==sfc[0])
           ){
        
            cout << sfc[4] << endl;
        
        }else if((wkSfc[0]==sfc[1] && wkSfc[1]==sfc[3])||
           (wkSfc[0]==sfc[3] && wkSfc[1]==sfc[4])||
           (wkSfc[0]==sfc[4] && wkSfc[1]==sfc[2])||
           (wkSfc[0]==sfc[2] && wkSfc[1]==sfc[1])
           ){
        
            cout << sfc[5] << endl;
        
        }
           
    }

}

