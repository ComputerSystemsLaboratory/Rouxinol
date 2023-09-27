#include <iostream>
#define ARY_SIZE(array) (sizeof(array) / sizeof(array[0]))
using namespace std;
void swap(int* ogn,int* cpy) {
    int tmp = *ogn;
    *ogn = *cpy;
    *cpy = tmp;
}
void print(int* ary,size_t len) {
    for(size_t i=0;i < len;i++) {
        cout << ary[i];
        if(i==len-1)
            cout << "\n";
        else
            cout << " ";
    }
}
int main(void){
    /* initialize */
    int loop=0;
    cin >> loop;
    int iVal[loop];//input_value
    for(int i=0;i<loop;i++) {
        cin >> iVal[i];
    }
    /* logic phase */
    int j;
    for(int i=0;i<loop;i++) {
        j=i;
        while((j > -1) && (iVal[j-1] > iVal[j])) {
            swap(iVal[j-1], iVal[j]);
            j--;
        }
        print(iVal,ARY_SIZE(iVal));
    }
}