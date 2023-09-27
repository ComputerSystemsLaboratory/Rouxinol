#include <iostream>
#include <stdio.h>
int main(void){
    int month,day,chek;
    while(std::cin >> month >> day,month){ int year = 2004;
    if(month == 1 || month == 2){year--;month+=12;}
    chek = ((year+ year/4-year/100+year/400+(13*month+8)/5+day)%7);
    switch (chek) {case 0:puts("Sunday");break; case 1:puts("Monday");break; case 2:puts("Tuesday");break; case 3:puts("Wednesday");break;
        case 4:puts("Thursday");break; case 5:puts("Friday");break; case 6:puts("Saturday");break; }}return 0;}