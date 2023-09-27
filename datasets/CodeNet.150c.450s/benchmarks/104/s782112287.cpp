#include<iostream>
using namespace std;

int main(){
    int w,n;
    cin>>w>>n;
    int vec[30];
    for(int i=0;i<w;i++)
        vec[i]=i+1;
    for(int i=0;i<n;i++){
        int x,y;char m;
        cin>>x>>m>>y;
        swap(vec[x-1],vec[y-1]);
    }
    for(int i=0;i<w;i++)
        cout<<vec[i]<<endl;
}