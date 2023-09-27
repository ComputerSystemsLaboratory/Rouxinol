
#include <iostream>
#include <math.h>
using namespace std;

bool isPrime (int num)
{
    if (num <=1)
        return false;
    else if (num == 2)         
        return true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        return prime;
    }
}
int main()
{
	unsigned int  n,j;
	cin >> n;
	unsigned  int num[n],count = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(isPrime(num[i])) count++;
  }
	cout << count << endl;
	return 0;
}