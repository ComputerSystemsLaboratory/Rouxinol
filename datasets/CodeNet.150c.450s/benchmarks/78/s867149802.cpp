#include <iostream>
#include <vector>
using namespace std;
int main(void){
    int i;
    int n;
    int j = 0;
    int a[202];
    int b[202];
    vector<int> t1(1000010, 0),t2(1000010, 0);
    for(i = 0; i < 200; i++){
        a[i] = (i+1)*(i+2)*(i+3)/6;
        if(a[i] % 2 == 1){
            b[j] = a[i];
            j++;
        }
    }
    /*cout << a[82] << b[20] << endl;
    for(i = 0; i < 200; i++){
        cout << "a[" << i << "] = " << a[i] << endl;
    }
    for(i = 0; i < 200; i++){
        cout << "b[" << i << "] = " << b[i] << endl;
    }*/

        for(i = 0; i <= 1000005; i++){
            t1[i] = i;
        }

        for(i = 0; i <= 179; i++){
            for(j = a[i]; j <= 1000005; j++){
                if(t1[j] > t1[j - a[i]] + 1){
                    t1[j] = t1[j -a[i]] + 1;
                }
            }    
        }        

        for(i = 0; i <= 1000005; i++){
            t2[i] = i;
        }
        
        for(i = 0; i <= 44; i++){
            for(j = b[i]; j <= 1000005; j++){
                if(t2[j] > t2[j - b[i]] + 1){
                    t2[j] = t2[j - b[i]] + 1;
                }
            }
        }
            


    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        cout << t1[n] << " " << t2[n] << endl;
    }
    return 0;
}