#include<iostream>
#include<algorithm>
using namespace std;
int main(){
        int t[2];
        while(1){
                cin>>t[0]>>t[1];
                if(t[0]==0&&t[1]==0)break;
                sort(t,t+2);
                cout<<t[0]<<" "<<t[1]<<endl;
        }
}