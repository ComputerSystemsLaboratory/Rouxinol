#include <iostream>
using namespace std;

int main()
{
    int n;
    int a,b,c,d;
    cin>>n;
    int floor[4][3][10];
    for(int i=0;i<4;i++){
        for(int s=0;s<3;s++){
            for(int t=0;t<10;t++){
                floor[i][s][t]=0;
            }
        }
    }

    for(int i=0; i<n; i++) {
        cin>>a>>b>>c>>d;
        floor[a-1][b-1][c-1]+=d;
    }
    for(int i=0;i<4;i++){
        for(int s=0;s<3;s++){
            for(int t=0;t<10;t++){
                cout<<" "<<floor[i][s][t];
            }
            cout<<endl;
        }
        if(i!=3)
        cout<<"####################"<<endl;
    }
}