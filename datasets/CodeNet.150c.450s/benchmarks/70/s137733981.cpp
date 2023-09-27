#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int days[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
 
    for(;;){
        int month, day;
        cin >> month >> day;
        if(month == 0) return 0;
        int num = 0;
        for(int i=0; i<month-1; ++i)
            num += days[i];
        num += day; 
        cout << week[(num+2)%7] << endl;
    }
}