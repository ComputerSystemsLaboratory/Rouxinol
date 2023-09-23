#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int size;

    cin >> size;
    long long a[size];
    int i;

    for(i=0; i<size; i++){
       cin >> a[i];
    }

    long long max=0;

    for(i=0; i<size; i++){
        if(max < a[i] || i==0){
            max = a[i];
        }
        else{
        }
    }

    long long min=0;

    for(i=0; i<size; i++){
        if(min > a[i] || i==0){
            min = a[i];
        }
        else{
        }
    }

    long long sum=0;

    for(i=0; i<size; i++){
        sum+= a[i];
    }

    cout << min << " " << max << " " << sum << endl;
    return 0;
}

