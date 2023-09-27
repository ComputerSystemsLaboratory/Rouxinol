#include <iostream>
#include <cmath>

using namespace std;

void PrimeNumSum(int& sum, unsigned int& num){
    unsigned int divisor = sqrt(num)+1;
    
    if(divisor == 2){
        sum++;
        return;
    }
    while(divisor>=2){
        if(num%divisor == 0){
            return;
        }
        divisor--;
    }
    
    sum++;
    
}

int main()
{
	int count;
    cin>>count;
    
    unsigned int* list = new unsigned int[count];
    
    for(int i = 0;i<count;i++){
        cin>>list[i];
    }
    
    int sum = 0;
    
    for(int i =0;i<count;i++){
        PrimeNumSum(sum, list[i]);
    }
    
    cout<<sum<<endl;
    
    delete[] list;
	return 0;
}