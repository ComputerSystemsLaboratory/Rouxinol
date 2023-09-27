#include<iostream>
#include<algorithm>

using namespace std;

void dice2(){
        int d1,d2,d3,d4,d5,d6;
        cin >> d1 >> d2 >> d3 >> d4 >> d5 >> d6; 
        int q; cin >> q;
            
        for ( int i = 0; i < q; i++){
                int top,front;
                cin >> top >> front; 
                int tmp;
                        while (true){
                                if(d1 == top)break;
                                tmp = d1; d1 = d4; d4 = d6; d6 = d3; d3 = tmp;  //E    
                                if(d1 == top)break;
                                tmp = d1; d1 = d2; d2 = d6; d6 = d5; d5 = tmp;  //N 
                        }   
                        while (true){
                                if(d2 == front) break;
                                tmp = d2; d2 = d3; d3 = d5; d5 = d4; d4 = tmp;
                        }   
                cout << d3 << endl;
        }           

}
int main(){
        dice2();
return 0;
}