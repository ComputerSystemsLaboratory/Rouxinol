#include <iostream>
#include <string>
using namespace std;

int main(void){
    string tCard,hCard;
    int n,tScore=0,hScore=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>tCard>>hCard;
        if(tCard==hCard){
            tScore++;hScore++;
        }else if(tCard>hCard){
            tScore+=3;
        }else{
            hScore+=3;
        }
    }
    cout<<tScore<<" "<<hScore<<endl;
    return 0;
}