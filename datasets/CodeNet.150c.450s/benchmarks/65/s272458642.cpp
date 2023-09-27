#include <iostream>
using namespace std;

int main(void){
    int n;
    char c[36][3],d[36][3];
    cin>>n;
    int i,j;
    for(i=0;i<n;i++){
        cin>>c[i];
        for(j=0;j<3;j++)d[i][j]=c[i][j];
    }
    char swap[3];
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(c[j-1][1]>c[j][1]){
                swap[0]=c[j][0];
                c[j][0]=c[j-1][0];
                c[j-1][0]=swap[0];
                
                swap[1]=c[j][1];
                c[j][1]=c[j-1][1];
                c[j-1][1]=swap[1];
            }
        }
    }
    
    for(i=0;i<n-1;i++){
        cout<<c[i]<<" ";
    }
    cout<<c[n-1]<<endl;
    cout<<"Stable"<<endl;
    
    char min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i;j<n;j++){
            if(d[min][1]>d[j][1]){
                min=j;
            }
        }
        if(min!=i){
            swap[0]=d[min][0];
            d[min][0]=d[i][0];
            d[i][0]=swap[0];
                
            swap[1]=d[min][1];
            d[min][1]=d[i][1];
            d[i][1]=swap[1];
        }
    }
    
    bool isstable=1;
    for(i=0;i<n;i++){
        if(c[i][0]!=d[i][0]){
            isstable=0;
        }
    }
    for(i=0;i<n-1;i++){
        cout<<d[i]<<" ";
    }
    cout<<d[n-1]<<endl;
    if(isstable)cout<<"Stable"<<endl;
    else cout<<"Not stable"<<endl;
}
