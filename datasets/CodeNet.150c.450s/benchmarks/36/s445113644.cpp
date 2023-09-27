#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int c,d;
    while(cin>>d){
        int sum=0;
        for(int i=1; i*d<600; i++) {
            int res=i*d;
            if(i==1)
              c=d*d*d;
            else
                c=(res*res)*d;
            sum+=c;
        }
        cout<<sum<<endl;
    }
    return 0;
}