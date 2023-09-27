#include <iostream>
#include <string>
using namespace std;

bool match(string &s, string &t)
{
	for(int i = 0; i < t.length(); i++)
		t[i] = tolower(t[i]);
	return s == t;
}

int main()
{
    string w, t;

	cin >> w;
    int count = 0;
    while(true)
    {
		cin >> t;
        if(t == "END_OF_TEXT")
            break;
        if(match(w, t))
			count++;
    }
	cout << count << endl;

    return 0;
}