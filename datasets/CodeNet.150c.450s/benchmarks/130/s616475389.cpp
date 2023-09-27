#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int x[100][100],y[1000],a,b,c;
    cin>>a>>b;
    for(int i=0;i<a;i++){
        for(int o=0;o<b;o++){
            cin>>x[i][o];
        }
    }
    for(int o=0;o<b;o++){
        cin>>y[o];
    }
    for(int i=0;i<a;i++){
        c=0;
        for(int o=0;o<b;o++){
            c=c+(x[i][o]*y[o]);
        }
        cout<<c<<endl;
    }
}

