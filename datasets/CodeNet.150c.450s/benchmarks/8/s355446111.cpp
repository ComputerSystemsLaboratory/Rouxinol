#include <iostream>
#include <string>

using namespace std;

int main(){
    string taro,hanako;
    int n;
    cin>>n;
    int taroP=0,hanakoP=0;
    for (int i=0;i<n;i++){
        cin>>taro>>hanako;
        if (taro>hanako){
            taroP+=3;
        }
        else if (taro<hanako){
            hanakoP+=3;
        }
        else{
            taroP++;
            hanakoP++;
        }
    }
    cout<<taroP<<" "<<hanakoP<<endl;
    return 0;
}