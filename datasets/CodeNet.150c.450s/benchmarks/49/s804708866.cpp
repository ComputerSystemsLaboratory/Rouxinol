#include <iostream>
using namespace std;

int main(){
        int i = 0;
        
        while(cin >> i && !(i == 0)){
                int a[i];
                int j = 0;              

                for(j=0; j<i; j++){
                        cin >> a[j];
                }
        
                //sum
                int sum = 0;
                for (j=0; j<i; j++) {
                        sum += a[j];
                }
        
                //largest,smallest
                int largest = 0;
                int smallest = 1000;
                for (j=0; j<i; j++){
                        if (a[j] > largest)
                                largest = a[j];
                        if (a[j] < smallest)
                                smallest = a[j];
                }
                
                //average
                int average = 0;
                average = (sum - largest - smallest) / (i - 2);
                cout << average << endl;
        }

}