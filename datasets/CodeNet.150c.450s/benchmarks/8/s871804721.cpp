#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,taro_point=0,hanako_point=0;
    string taro,hanako;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>taro>>hanako;
        if(taro>hanako) taro_point+=3;
        if(taro==hanako){
            taro_point+=1;
            hanako_point+=1;
        }
        if(taro<hanako) hanako_point+=3;
    }
    cout<<taro_point<<" "<<hanako_point<<endl;
    return 0;
}
