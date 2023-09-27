#include <iostream>
#include <array>

using namespace std;

int n;
int getP(int i){
    if(i/2<=n)
        return i/2;
    else
        return 0;
}
int getL(int i){
    if(2*i<=n)
        return 2*i;
    else
        return 0;
}
int getR(int i){
    if(2*i+1<=n)
        return 2*i+1;
    else
        return 0;
}

int main(){
    array<long long int,251> hp;
    cin>>n;
    hp[0]=0;
    for(int i=1;i<=n;i++)
        cin>>hp[i];
    for(int i=1;i<=n;i++){
        cout<<"node "<<i<<": key = "<<hp[i]<<", ";
        if(getP(i))
            cout<<"parent key = "<<hp[getP(i)]<<", ";
        if(getL(i))
            cout<<"left key = "<<hp[getL(i)]<<", ";
        if(getR(i))
            cout<<"right key = "<<hp[getR(i)]<<", ";
        cout<<"\n";
    }
    return 0;
}    