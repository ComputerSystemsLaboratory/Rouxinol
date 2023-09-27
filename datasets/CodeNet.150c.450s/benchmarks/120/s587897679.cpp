#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>
using namespace std;
int main(){
    int h,w;
    while(cin>>h>>w,h||w){
        bitset<10000>bs[10];
        for(int i=0;i<h;i++)
            for(int j=0;j<w;j++){
                int f;
                cin>>f;
                bs[i][j]=f;
            }
        int Max=0;

        for(int i=0;i<(1<<10);i++){
            for(int j=0;j<10;j++){
                if((i>>j)&1)bs[j]=~bs[j];
            }

            int sum=0;
            for(int j=0;j<w;j++){
                int z=0,o=0;
                for(int k=0;k<h;k++){
                    if(bs[k][j])z++;
                    else o++;
                }
                sum+=max(z,o);
            }


            for(int j=0;j<10;j++){
                if((i>>j)&1)bs[j]=~bs[j];
            }
            Max=max(Max,sum);
        }
        cout<<Max<<endl;
    }
}