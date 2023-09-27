#include<iostream>
#include<vector> 

using namespace std;
 
 
int data[10];
 
bool searchB (int a){
    vector<int >sea;
 
    for(int i=0;i<10;i++){
        if(a>>i & 1)sea.push_back(data[i]);
    }
    if(sea.size()>1){
    for(int i=0;i<sea.size()-1;i++){
        if(sea[i]>sea[i+1])return false;
    }
    }
    return true;
}
 
int main(){
 
    int n=0;
    cin>>n;
 
    for(int i=0;i<n;i++){
         
 
    for(int j=0;j<10;j++){
        cin>>data[j];
    }
    bool suc=false;
    for(int i=0;i<1024;i++){
        if(searchB(i) && searchB(~i)){
            cout<<"YES"<<endl;
            suc=true;
            break;
        }
    }
    if(!suc)cout<<"NO"<<endl;
    }
    return 0;
}