#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int x,y,s;
    while(cin >>x>>y>>s &&x){
        int maxvalue=0;
        for (int i=1;i<s;i++){
            for(int j=i;j<s;j++){
                int sum = floor((i+x*i/100.0))+floor((j+x*j/100.0));
                if(s==sum){
                    //cout << i<<j;
                    int sumafter = floor((i+y*i/100.0))+floor((j+y*j/100.0));
                    maxvalue=max(maxvalue,sumafter);
                    //cout<<endl;
                }
            }
        }
        cout << maxvalue <<endl;
    }
}