#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(void){
	map<string, int> sentence;
	 
	string maxFrequentSentence="";
	string maxCharacterSentence="";
	string inputSentence;
	
	/* Input */
	while( cin >> inputSentence )
	{
		/* CountUp Sentence*/
		if( sentence.count(inputSentence) != 0 )
		{
			sentence[inputSentence] = sentence[inputSentence] + 1;
		}
		else
		{
			sentence[inputSentence] = 0;
		}
		
		/* Update Max Characters Sentence */
		if( maxCharacterSentence.size() < inputSentence.size() )
		{
			maxCharacterSentence = inputSentence;
		}
		
		/* Update Max Frequent Sentence */
		if( sentence[maxFrequentSentence] < sentence[inputSentence] )
		{
			maxFrequentSentence = inputSentence;
		}
	}
	
	/* Output */
	cout << maxFrequentSentence << " " << maxCharacterSentence << endl;
 
	return 0;
}