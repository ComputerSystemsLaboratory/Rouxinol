
#include <iostream>
using namespace std;
int main(){
    int a[4],b[4],hcount=0,bcount=0;
    while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
    hcount=0;
    bcount=0;
    for(int k=0;k<4;k++){
        for(int s=0;s<4;s++){
            if(a[k]==b[s]&&k==s)hcount++;
            else if(a[k]==b[s]&&k!=s)bcount++;
        }
    }
    cout<<hcount<<" "<<bcount<<endl;
    }
    return 0;
}