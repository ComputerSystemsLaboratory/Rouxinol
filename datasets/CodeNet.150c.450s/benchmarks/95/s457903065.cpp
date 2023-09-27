#include <iostream>
#include <string>
using namespace std;

int main(void)
{
        int i,num, count;
        bool l, r;
        string lu = "lu", ru = "ru", ld = "ld", rd = "rd";
        string input;

        while(1){
                count = 0;
                l = false, r = false;
                cin >> num;
                if(num == 0){ 
                        break;
                }   

                for(i = 0; i < num; i++){
                        cin >> input;
                        if(input == lu || input == ld){
                                l = !l; 
                        }else{
                                r = !r; 
                        }   

                        if(l && r){ 
                                count += 1;
                                l = false, r = false;
                        }   
                }   

                cout << count << endl;
        }   
        return 0;
}