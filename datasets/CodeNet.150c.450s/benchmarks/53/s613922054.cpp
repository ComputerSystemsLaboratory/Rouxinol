#include<iostream>
#include<math.h>

using namespace std;
typedef long long int lli;

int soinsu[100000],soinsui=0;

void soinsu_bunkai(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            soinsu[soinsui++]=i;
            soinsu_bunkai(n/i);
            return;
        }
    }
    soinsu[soinsui++]=n;
}

int main(int argc,char *argv[]){
    int n;

    cin>>n;
    soinsu_bunkai(n);
    cout<<n<<":"<<flush;
    for(int i=0;i<soinsui;i++)cout<<" "<<soinsu[i]<<flush;
    cout<<endl;
    return 0;
}
