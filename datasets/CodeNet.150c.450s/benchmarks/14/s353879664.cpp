#include<iostream>
#include<cstdio>
using namespace std;
#define nMAX 10000

int main(void)
{ 
    int n;
    int i = 1;

    do{
        cin >> n;
    }while(n < 3 || n > nMAX);

    do{

        if(i % 3 == 0) cout << " " << i;

        else{
            int x = i;
            while(x > 0){
                if(x % 10 == 3){
                    cout << " " << i;
                    break;
                }
                x /= 10;
            }
        }   
    }while(i++ != n);

    cout << endl;
    
    return 0;
}

    