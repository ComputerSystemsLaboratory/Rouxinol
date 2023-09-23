#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int N,balls[1000][10];
string result[1000];

void saiki(int Bnow,int Cnow,int next,int roop)
{
	if(next == 10)
	{
		result[roop] = "YES";
	}
	else
	{
		if(Bnow < balls[roop][next])
		{
			saiki(balls[roop][next],Cnow,next+1,roop);
		}
		if(Cnow < balls[roop][next])
		{
			saiki(Bnow,balls[roop][next],next+1,roop);
		}
	}
}

int main()
{
	for(int a = 0;a<1000;a++)
	{
		result[a] = "NO";
	}

	cin >> N;

	for(int i = 0;i<N;i++)
	{
		for(int a = 0;a<10;a++)
		{
			cin >> balls[i][a];
		}

		saiki(0,0,0,i);

		cout << result[i] << endl;
	}

}