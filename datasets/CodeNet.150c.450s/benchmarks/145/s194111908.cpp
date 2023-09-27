#include <iostream>
using namespace std;

class sentenceClass{
public:
    string character="";
    int numOccurrence=1;
};

int main(void){
    string maxNumSentence="";
    sentenceClass sentence[1000];
    
    int sentenceNum = 0;
    int loop = 0;
    while( cin >> sentence[sentenceNum].character )
    {
        /* Serch Max Sentence */
        if( maxNumSentence.size() < sentence[sentenceNum].character.size() )
        {
            maxNumSentence = sentence[sentenceNum].character;
        }
        
        /* Update Frequent Appearance */
        for( loop=0; loop < sentenceNum; loop++ )
        {
          if( sentence[loop].character == sentence[sentenceNum].character )
          {
            sentence[loop].numOccurrence = sentence[loop].numOccurrence + 1;
          }
        }
        sentenceNum++;   /* next sentence */
    }
    
    int maxNumOccurrence=0;
    string frequentAppearanceSentence="";
    /* Serch Max Sentence */
    for( loop=0; loop < sentenceNum; loop++ )
    {
        if( maxNumOccurrence < sentence[loop].numOccurrence )
        {
            maxNumOccurrence = sentence[loop].numOccurrence;
            frequentAppearanceSentence = sentence[loop].character;
        }
    }
    cout << frequentAppearanceSentence << " " << maxNumSentence << endl;

    return 0;
}