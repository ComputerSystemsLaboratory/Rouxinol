#include<iostream>
using namespace std;

int main(){
    int n, b, f, r, v, b1[3][10], b2[3][10], b3[3][10], b4[3][10];
    cin>>n;
    
    for( int i=0; i<3; i++)
        for( int j=0; j<10; j++)
            b1[i][j]=0;
    
    for( int i=0; i<3; i++)
        for( int j=0; j<10; j++)
            b2[i][j]=0;
    
    for( int i=0; i<3; i++)
        for( int j=0; j<10; j++)
            b3[i][j]=0;
    
    for( int i=0; i<3; i++)
        for( int j=0; j<10; j++)
            b4[i][j]=0;
    
    for( int i=0; i<n; i++){
        cin>>b>>f>>r>>v;
        if(b==1) b1[f-1][r-1]+=v;
        if(b==2) b2[f-1][r-1]+=v;
        if(b==3) b3[f-1][r-1]+=v;
        if(b==4) b4[f-1][r-1]+=v;
    }
    
    for( int i=0; i<3; i++){
        for( int j=0; j<10; j++)
            cout<<' '<<b1[i][j];
        cout<<endl;
    }
    
    for( int i=0; i<20; i++)
        cout<<'#';
    cout<<endl;
    
    for( int i=0; i<3; i++){
        for( int j=0; j<10; j++)
            cout<<' '<<b2[i][j];
        cout<<endl;
    }
    
    for( int i=0; i<20; i++)
        cout<<'#';
    cout<<endl;
    
    for( int i=0; i<3; i++){
        for( int j=0; j<10; j++)
            cout<<' '<<b3[i][j];
        cout<<endl;
    }
    for( int i=0; i<20; i++)
        cout<<'#';
    cout<<endl;
    
    for( int i=0; i<3; i++){
        for( int j=0; j<10; j++)
            cout<<' '<<b4[i][j];
        cout<<endl;
    }
    
    
    
    
    
}

