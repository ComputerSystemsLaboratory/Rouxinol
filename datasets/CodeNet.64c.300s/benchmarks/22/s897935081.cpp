#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int tri[3] = {0};
        cin>>tri[0]>>tri[1]>>tri[2];
        sort(tri, tri+3);
        if(tri[0]*tri[0] + tri[1]*tri[1] == tri[2]*tri[2]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}