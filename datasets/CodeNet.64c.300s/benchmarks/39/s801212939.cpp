#include <iostream>
using namespace std;

int main()
{
	int n[50],i = 0, inp = 0, out[50]={0}, a = 0, b = 0, c = 0, d = 0;

	//??\???
	while( cin >> inp){
		if(inp >= 1 && inp <= 50){
	  		n[i] = inp;
			i++;
	  }
	}

	//??????
	for(int j = 0;j < i;j++){

		//?§£
		for(a = 0;a <= 9;a++){
			if(n[j] == (a + b +c +d) && (b <= 9 || c <= 9 || d <= 9)){
				out[j]++;
				//cout << a << " " << b << " "  << c << " "  << d << endl;
			}

			for(b = 0;b <= 9;b++){
				if(n[j] == (a + b +c +d) && (c <= 9 || d <= 9)){
					out[j]++;
					//cout << a << " " << b << " "  << c << " "  << d << endl;
				}

				for(c = 0;c <= 9;c++){
					if(n[j] == (a + b +c +d) && (d <= 9)){
						out[j]++;
						//cout << a << " " << b << " "  << c << " "  << d << endl;
					}

					for(d = 0;d <= 9;d++){
						if(n[j] == (a + b +c +d)){
							out[j]++;
							//cout << a << " " << b << " "  << c << " "  << d << endl;
						}
					}
				}
			}
		}

		cout << out[j] << endl;
	}	

	return 0;
}