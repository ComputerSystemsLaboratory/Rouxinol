#include <iostream>
#include <stdio.h>
using namespace std;

double sum(int b[],int);
void bubble(int b[],int);


int main(){
    int a;
    cin >> a;
    int b[a];
    for (int i=0;i<a;i++)
        cin >> b[i];
    bubble(b,a);
    cout << b[0] << " " << b[a-1] << " " ;
    printf("%.0f\n",sum(b,a));
}

void bubble(int b[],int a){
    int x;
    for (int i=0;i< a-1 ;i++){
        for (int j=0;j<a-1 ;j++)
            if(b[j]>b[j+1]){
                x=b[j];
                b[j]=b[j+1];
                b[j+1]=x;
        }
    }
}

double sum(int b[], int a){
    double sum=0;
    for (int i=0;i<a;i++)
        sum += b[i];
    return sum;
}