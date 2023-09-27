#include<iostream>
using namespace std;
 
int main()
{
    int m, f, r;
 
    do{
        cin >> m >> f >> r;
        if((m < 0) && (f < 0) && (r < 0)) break;

        if((m < 0) || (f < 0)){
            cout << "F" << endl;
        }else if(m + f >= 80){
            cout << "A" << endl;
        }else if(m + f >= 65){
            cout << "B" << endl;
        }else if(m + f >= 50){
            cout << "C" << endl;
        }else if(m + f >= 30){
            if(r >= 50){
                cout << "C" << endl;
            }else{
                cout << "D" << endl;
			}
        }else{
            cout << "F" << endl;
	    }
 
    }while(1);
 
    return 0;
}