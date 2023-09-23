#include<iostream>



using namespace std;



int n;

int prime[1000000];

int checked[1000000];

int primesum[1000000];

int result[30];

int datasets;



int main()

{

	prime[0] = 0;

	prime[1] = 0;

	primesum[0] = 0;

	primesum[1] = 0;



	for (int a = 2; a<1000000; a++)

	{

		prime[a] = 1;

	}



	for (int a = 2; a<1001; a++)

	{

		if (checked[a] == 0)

		{

			checked[a] = 1;

			for (int b = 2; b<a; b++)

			{

				if (a%b == 0)

				{

					prime[a] = 0;

					break;

				}

			}

			if (prime[a] == 1)

			{

				for (int c = 2 * a; c<1000000; c += a)

				{

					checked[c] = 1;

					prime[c] = 0;

				}

			}

		}

	}



	for (int a = 2; a<1000000; a++)

	{

		primesum[a] = primesum[a - 1] + prime[a];

	}



	while (cin >> n)

	{

		cout << primesum[n] << endl;

	}



	return 0;

}