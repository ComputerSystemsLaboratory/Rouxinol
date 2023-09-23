#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int set;
    int num[3];
    int a,b,c;
    
    if(set < 1000)
        cin >> set;
        
    for(int i = 0; i < set; i++){
        for(int j =0; j < 3; j++){
            cin >> num[j];
        }
        sort(num, num+3);
        if(num[0] * num[0] + num[1] * num[1] == num[2] * num[2]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}