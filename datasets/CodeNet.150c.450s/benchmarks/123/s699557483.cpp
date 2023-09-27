#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<int> sosu;
    bool check[10000]{false};
    for(int i=2;i<10000;++i){
        if(!check[i]){
            sosu.push_back(i);
            for(int j=i*2;j<10000;j+=i){
                check[j]=true;
            }
        }
    }
    sosu.push_back(1000000000);
    int time;
    cin>>time;
    int dummy;
    int answer=time;
    int ch;
    vector<int>::iterator place;
    for(int i=0;i<time;++i){
        cin>>dummy;
        if(dummy==2)continue;
        ch=sqrt((double)dummy)+1;
        for(place=sosu.begin();*place<=ch;++place){
            if(dummy%*place==0){
                --answer;
                break;
            }
        }
    }
    cout<<answer<<endl;
    return 0;
}