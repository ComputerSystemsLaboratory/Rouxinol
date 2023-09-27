#include<bits/stdc++.h>
using namespace std;
bool a[31];
int k;

int main(){
    for(int y=1;y<29;y++){
        cin>>k;
        a[k]=true;
    }
    for(int y=1;y<31;y++){
        if(a[y]==false){cout<<y<<endl;}
    }

}