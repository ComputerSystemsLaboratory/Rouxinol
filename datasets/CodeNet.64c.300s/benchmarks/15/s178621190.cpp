#include <iostream>
using namespace std;
void swap(int *a,int *b) {
    int tmp=*a;
    *a = *b;
    *b = tmp;
}
int main(void){
    const int N = 100;
    int lp;
    int val[N]={0};
    int min;
    int count =0;
    cin >> lp;
    for(int i=0;i<lp;i++) {
        cin >> val[i];
    }
    for(int i=0;i<lp;i++) {
        min=i;
        for(int j=i+1;j<lp;j++) {
            if(val[min] > val[j]) {
                min = j;
            }
        }
        if(min!=i) {
            swap(val[i],val[min]);
            count++;
        }
    }
    for(int i=0;i<lp;i++) {
        if(i!=lp-1)
            cout << val[i] << " ";
        else
            cout << val[i] << endl;
    }
    cout << count << endl;
}