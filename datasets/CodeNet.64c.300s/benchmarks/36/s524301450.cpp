#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int temp;
    int x[3];
    string str;
   
    for(int i=0; i< sizeof(x)/sizeof(x[0]); i++){
        cin >> x[i];
    }
    
    for(int i=0; i< (sizeof x)-1; i++){
        for(int j=0; j< 2;j++){
            if(x[j]> x[j+1]){
                temp = x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }

        cout << x[0] << " " << x[1] << " " << x[2]  << endl;
return 0;
}