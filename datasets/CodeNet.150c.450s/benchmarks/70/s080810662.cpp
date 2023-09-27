#include <iostream>
using namespace std;

int month[13]={0, 31,29,31,30,31,30,31,31,30,31,30,31};
string week[7]={"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};

int main(){
    while(1){
        int mm,dd;
        cin >> mm >> dd;
        if(mm==0) break;
        
        int m=1,d=1,w=0;
        while(m!=mm || d!=dd){
            if(month[m]==d){
                d=1;
                m++;
            }else{
                d++;
            }
            w = (w+1)%7;
        }
        cout << week[w] << endl;
    }
    return 0;
}