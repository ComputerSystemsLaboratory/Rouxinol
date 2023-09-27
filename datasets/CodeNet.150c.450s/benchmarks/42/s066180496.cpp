#include <iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
    int n,m;
    int time=0;
    int bre=1;
    int res[100005];
    string str[100005];
    int num[100005];
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>str[i]>>num[i];
    }
    while(bre){
        bre=0;
    for(int i=0; i<n; i++){
        if(num[i]==-1) continue;
       else if(num[i]<=m){
            time+=num[i];
            res[i]+=time;
            cout<<str[i]<<" "<<res[i]<<endl;
            num[i]=-1;
        }
        else {
            time+=m;
            num[i]=num[i]-m;
            bre=1;
        }
    }
    }
    return 0;
}