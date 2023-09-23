//
//  main.cpp
//  atCoder
//
//  Created by Lynn Zhou on 10/19/15.
//
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a,b;
    while (1) {
        cin>>a>>b;
        if(a==0 && b==0)
            break;
        int sum=0;
        for(int i=1;i<=a;i++){
            for(int j=i+1;j<=a;j++){
                for(int k=j+1;k<=a;k++){
                    if((i+j+k)==b)
                        sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
    
}