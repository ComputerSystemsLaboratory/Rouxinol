// 2011/07/02 Tazoe

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string frqW = "";
	int frqM = 0;
	string lenW = "";
	int lenM = 0;

	map<string, int> frq;

	while(true){
		string wrd;
		cin >> wrd;
		if(cin.eof())
			break;

		if(frq.find(wrd)==frq.end())
			frq[wrd] = 1;
		else
			frq[wrd]++;

		if(frq[wrd]>frqM){
			frqW = wrd;
			frqM = frq[wrd];
		}

		if(wrd.size()>lenM){
			lenW = wrd;
			lenM = wrd.size();
		}
	}

	cout << frqW << ' ' << lenW << endl;

	return 0;
}