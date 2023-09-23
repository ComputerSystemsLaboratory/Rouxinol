#include <iostream>
 
using namespace std;
int main(void){
        int d;
        while(true){
                cin >>d;
                if(cin.eof())
                  break;
                int total=0;
                for(int i=d; i<600; i+=d)
                        total+=d*i*i;
                cout << total << endl;
        }
        return 0;
}