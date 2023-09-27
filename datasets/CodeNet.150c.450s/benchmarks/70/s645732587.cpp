#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(void){
    for(;;){
        int m,d;
        int data[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
        cin>>m>>d;
        if(m==0&&d==0)break;
        for(int i=1;i<=m;i++){
            d+=data[i-1];
        }
        switch(d%7){
            case 0: cout << "Wednesday" << endl; break;
            case 1: cout << "Thursday" << endl;break;
            case 2: cout << "Friday" << endl;break;
            case 3: cout << "Saturday" << endl;break;
            case 4: cout << "Sunday" << endl;break;
            case 5: cout << "Monday" << endl;break;
            case 6: cout << "Tuesday" << endl;
        }
    }
	return 0;
}