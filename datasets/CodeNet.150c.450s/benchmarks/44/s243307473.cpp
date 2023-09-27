#include <iostream>
using namespace std;

int main(void){
    int a[4];
    int b[4];
    int hit, blow;
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]){
        cin>>b[0]>>b[1]>>b[2]>>b[3];
        hit=0;
        blow=0;
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(a[i]==b[j]){
                    if(i==j){
                        hit+=1;
                    }
                    else{
                        blow+=1;
                    }
                }
            }
        }
        cout<<hit<<" "<<blow<<endl;
    }
    return 0;
}

