#include <iostream>
using namespace std;
int main(){
        int start,end,number;
        cin >> start >> end >> number ;
        int counter=0;
        for(int i=start ; i<=end ; i++ ){
                if(number%i==0)
                        counter++;
        }
        cout << counter << endl;
        return 0;
}