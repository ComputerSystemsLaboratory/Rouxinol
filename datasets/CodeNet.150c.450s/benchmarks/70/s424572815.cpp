#include <iostream>
#include <string>
#include <map>

using namespace std;

string today(int month, int day){
    string today;
    int startMonth=1, startDay=1, total=0;
    
    for(int i=startMonth; i<month; i++){
        switch(i){
            case 4:
            case 6:
            case 9:
            case 11:
                total += 30;
                break;
            
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                total += 31;
                break;
            case 2:
                total += 29;
                break;
        }
    }
    total += day;
    //cout << total%7 << endl;
    
    switch(total%7){
        case 1:
            today = "Thursday";
            break;
        case 2:
            today = "Friday";
            break;
        case 3:
            today = "Saturday";
            break;
        case 4:
            today = "Sunday";
            break;
        case 5:
            today = "Monday";
            break;
        case 6:
            today = "Tuesday";
            break;
        case 0:
            today = "Wednesday";
            break;
    }
    
    
    return today;
}


int main (int argc, char const* argv[]){
    int month, day, n;
    
    cin >> month >> day;
    while(month!=0 && day!=0){
        
        cout << today(month,day)<< endl;
        cin >> month >> day;
    }
    return 0;
}