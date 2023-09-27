#include<iostream>
#include<cmath>
#include<string>

using namespace std;
int main(){
	

	

	int m,h;

	while (1)
	{
		string n;
		cin >> n;
		
		if (n == "-")break;

		cin >> m;

		for (int i = 0; i < m; i++)
		{
			cin >> h;

			string sub = n.substr(0, h);
	
			n += sub;
	
			
				n.erase(n.begin() , n.begin() + h);

			

		}


		cout << n << endl;





	}

return 0;
}