#include<iostream>
using namespace std;

int main(){

    int a;
    cin >> a;
    int total=0;
    
    for(int i=0; i<a; i++){
        int y, m, d;
        cin >> y >> m >> d;
        total = 0;
        
        for(int j=1; j<y; j++){
            
            if(j%3 == 0){
                total = total + 200;
            }else{
                total = total + 195;
            }
        }//ここまで年
        
        if(y%3 == 0){
            total = total + ((m-1)*20);
        }else{
            for(int j=1; j<m; j++){
                if(j%2 == 0){
                    total = total + 19;
                }else{
                    total = total + 20;
                }
            }
        }//ここまで月
        
        total = total + d;//ここ日
        
      total = 196471 - total;
      cout << total << endl;
      }         
}
