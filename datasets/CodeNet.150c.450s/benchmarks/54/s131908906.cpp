#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

void CheckSameString(string w, char *q, int *count)
{
	if (w.size() == strlen(q) && strncmp(w.c_str(), q, w.size()) == 0)
		(*count)++;
}

int main()
{
	string w, t;
	getline(cin, w);
	
	while (1) 
	{
		string buf;
		getline(cin, buf);
		t += (buf + "\n");
		//cout << "*" << buff << "*" << endl;
		if (buf == "END_OF_TEXT")
			break;
	}
	
	std::transform(w.begin(), w.end(), w.begin(), ::tolower);
	std::transform(t.begin(), t.end(), t.begin(), ::tolower);
	//cout << w << endl;
	//cout << t << endl;
	
	char *TOKEN = " \t\n";
	
	char buff[256];
	memset(buff, 0, sizeof(char) * 256);
	
	char *q = strtok((char *)t.c_str(), TOKEN);
	if (q == NULL)
		return -1;
	int count = 0;
	CheckSameString(w, q, &count);
	
	while (1)
	{
		q = strtok(NULL, TOKEN);
		if (q == NULL)
			break;
		
		CheckSameString(w, q, &count);
		
	}
	
	cout << count << endl;
	
	return 0;
}