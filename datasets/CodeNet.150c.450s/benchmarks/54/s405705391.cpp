#include <iostream>
#include <string>

using namespace std;

int main()
{
 	int count = 0;
  
  	string w;
  	cin >> w;
	for (int i = 0 ; i < w.size() ; i++ ){
		if (isupper(w[i])){
			w[i] = tolower(w[i]);
		}


	}

	string t;

	while(1){
		cin >> t;

		if (t == "END_OF_TEXT")break;

		for (int j = 0 ; j < t.size() ; j++ ){
			if ( isupper(t[j])){
				t[j] = tolower(t[j]);
			}
		}
		

		if (t == w )count++;

	}


    cout << count << endl;
	return 0;
}