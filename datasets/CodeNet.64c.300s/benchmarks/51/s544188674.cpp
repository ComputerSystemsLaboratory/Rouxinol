#include<iostream>

using namespace std;

int main()

{

    long long n,
	factorial=1;

    
    cin>>n;


    if (n<=20){
        for(int a=1;a<=n;a++)

    {

        factorial=factorial*a;

    }
	}
    
	
		
    cout<<factorial<<endl;

    return 0;

}