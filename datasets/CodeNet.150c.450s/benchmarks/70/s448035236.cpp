#include<iostream>
using namespace std;

int main(){
    int Month[12] = {0,31,29,31,30,31,30,31,31,30,31,30};
    int mon, day;
    while(cin>>mon>>day){
        if(!mon) break;
        int day_year = day;
        for(int i=0; i<mon; i++){
            day_year += Month[i];
        }
        switch(day_year%7){
            case 0: cout<<"Wednesday"; break;
            case 1: cout<<"Thursday"; break;
            case 2: cout<<"Friday"; break;
            case 3: cout<<"Saturday"; break;
            case 4: cout<<"Sunday"; break;
            case 5: cout<<"Monday"; break;
            case 6: cout<<"Tuesday"; break;
        }
        cout<<endl;
    }
    return 0;
}