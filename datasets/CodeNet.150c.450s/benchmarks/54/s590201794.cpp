#include <iostream>
#include <string>
using namespace std;
int main(){
    string W,T;
    int i,a = 0;
    cin>>W;
    cin>>T;
    while(T!="END_OF_TEXT"){
        for(i = 0 ; i < T.size();i++){
            if('A'<=T[i]&&T[i]<='Z'){
                T[i]+='a'-'A';
            }
        }
        if(W==T){
            a++;
        }
        cin>>T;
    }
    cout<<a<<endl;
    return 0;
}
