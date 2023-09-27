#include<iostream>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int a[r][c];

    for(int h=0;h<r;h++){
        for(int w=0;w<c;w++){
            cin>>a[h][w];
        }
    }

    for(int h=0;h<r;h++){
        int sum=0;
        for(int w=0;w<c;w++){
            cout<<a[h][w]<<" ";
            sum+=a[h][w];
        }
        cout<<sum<<endl;
    }

    int finSum=0;
    for(int w=0;w<c;w++){
        int sum=0;
        for(int h=0;h<r;h++){
            sum+=a[h][w];
        }
        cout<<sum<<" ";
        finSum += sum;
    }

    cout<<finSum<<endl;

    return 0;
}
