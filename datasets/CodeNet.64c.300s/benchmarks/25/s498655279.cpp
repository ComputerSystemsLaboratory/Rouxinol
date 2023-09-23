#include<iostream>
using namespace std;

int main()
{
    int a[4],b[4];
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3],!cin.eof()){
        int hit=0,blow=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(b[i]==a[j] && i==j){
                    hit++;
                    break;
                }
                if(b[i]==a[j] && i!=j){
                    blow++;
                    break;
                }
            }
        }
        cout<<hit<<' '<<blow<<endl;
    }

    return 0;
}