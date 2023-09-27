#include<iostream>
#include<string>
using namespace std;

int main(){
    int taro=0,hanako=0;
    int n;  cin>>n;
    string tc,hc;

    for(int i=0;i<n;i++){
        int longSize;
        cin>>tc>>hc;

        if(tc.size()>hc.size())longSize = tc.size();
        else longSize = hc.size();

        if(tc==hc){
            taro++;
            hanako++;
        }

        for(int j=0;j<longSize;j++){
            if(tc[j]-hc[j]>0){
                taro+=3;
                break;
            }else if(tc[j]-hc[j]<0){
                hanako+=3;
                break;
            }
        }
    }

    cout<<taro<<" "<<hanako<<endl;

    return 0;
}

