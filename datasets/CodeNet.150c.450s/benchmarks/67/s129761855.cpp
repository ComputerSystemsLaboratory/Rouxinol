#include <iostream>
using namespace std;
int main(){

    int input,count;
    

    while(cin>>input,input){
        count=0;
        for(int i=1;i<input;i++){
            int sum = 0;
            for(int j=i;j<input;j++){
                sum += j;
                if(input == sum){
                    count++;
                    break;
                }
            }
        }

        cout<<count<<endl;

    }

    return 0;
}
