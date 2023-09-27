#include <iostream>
using namespace std;

const char *weeks[]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
const int days[]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(true){
        int month, day;
        cin>>month>>day;
        if(month==0) break;
        int week=3;
        for(int i=1; i<month; i++) week=(week+days[i])%7;
        week=(week+day)%7;
        cout<<weeks[week]<<'\n';
    }
    return 0;
}