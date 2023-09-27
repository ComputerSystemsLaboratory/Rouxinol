#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,HP=0,TP=0;
    string HC,TC;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>HC>>TC;
        if(HC>TC){
            TP=TP+3;
        }else if(HC<TC){
            HP=HP+3;
        }else{
            TP++;
            HP++;
        }
    }
    cout<<TP<<" "<<HP<<endl;
}

