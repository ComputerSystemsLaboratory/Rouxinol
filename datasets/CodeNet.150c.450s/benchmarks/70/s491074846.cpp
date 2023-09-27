#include <iostream>
#include <string>
using namespace std;
 
string week[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
 
int main(){
    int m, d, y;
    while(cin>>m>>d&&m!=0){
        y=2004;
        if(m<3){
            y--;
            m=m+12;
        }
        cout<<week[(y+(y/4)-(y/100)+(y/400)+(((13*m+8)/5)+d))%7]<<"\n";
// ツェラーの公式
    }
}