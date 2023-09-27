#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;


int main(){
    int input[3];
    int N;
    
    cin>>N;
    
    for(int i=0;i<N;i++){
        cin>>input[0]>>input[1]>>input[2];
        sort(input,input+3);
        cout<<((input[2]==sqrt(pow(input[1],2)+pow(input[0],2)))?"YES":"NO")<<endl;
    }
    return 0;
}