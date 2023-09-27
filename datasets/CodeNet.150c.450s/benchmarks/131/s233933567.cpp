#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include <functional>

using namespace std;

int INF = 10000000;


string cast(string a,int l)
{
	int len = a.length();
	int array[8];

	for(int i = 0;i < l;i++)
	{
		if(i < len)
		{
			array[i] = a[i] - '0';
		}else
		{
			array[i] = 0;
		}
	}

	string max = "             ",min = "              ";

	sort(array,array+l,greater<int>());
	
	for(int i = 0;i < l;i++)
	{
		max[i] = array[i] + '0';
	}

	sort(array,array+l);
	
	for(int i = 0;i < l;i++)
	{
		min[i] = array[i] + '0';
	}

	

	return to_string( atoi(max.c_str()) - atoi(min.c_str()) );;

}




int main()
{
	int l;

	while(1)
	{
		string array[21];

		cin >> array[0] >> l;

		if(!l)break;

		bool flag =false;

		for(int i = 1;i < 21;i++)
		{
			array[i] = cast(array[i-1],l);

			for(int j = 0;j < i;j++)
			{
				if(array[i] == array[j])
				{
					cout << j << " ";
					cout << array[i] << " ";
					cout << i-j << endl;
					flag = true;
					break;
				}
			}
			if(flag)break;
		}
	
	}

  return 0;
}