#include <iostream>
using namespace std;
int main(void){
    
    int n;
    cin >> n;
    
    int taroScore=0;
    int hanakoScore=0;
    
    for(int i=0;i<n;i++){
        string taro;
        string hanako;
        cin >> taro;
        cin >> hanako;
        
        if(taro>hanako){
            taroScore+=3;
        }else if(taro<hanako){
            hanakoScore+=3;
        }else{
            taroScore+=1;
            hanakoScore+=1;
        }
    }
    
    cout << taroScore << " " << hanakoScore << endl;

    
}