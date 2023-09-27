#include<iostream>

using namespace std;

int main(){
        int n; cin >> n;
        string taro,hanako;
        int tp=0;
        int hp=0;
    
        for (int i = 0;i < n; i++){
                cin >> taro >> hanako;
                if (taro > hanako ){
                        tp += 3;
                }else if(hanako > taro){
                        hp += 3;
                }else{
                        hp++;
                        tp++;
                }   
        }   
        cout << tp << " " << hp << endl;    

return 0;
}