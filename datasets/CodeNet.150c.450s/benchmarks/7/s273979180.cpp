#include<iostream>
using namespace std;

int number[10];
int count = 0;
int flag = 0;
int temp = 0;

int main(){

        for(count=0;count<10;count++){
                cin >> number[count];
                }
        count = 0;

        while(flag<10){
                for(count=0;count<9;count++){
                        if(number[count]<number[count+1]){
                                temp=number[count];
                                number[count]=number[count+1];
                                number[count+1]=temp;
                        }
                }
                flag++;
}
        for(count=0;count<3;count++){
                cout<<number[count]<<endl;
        }
}