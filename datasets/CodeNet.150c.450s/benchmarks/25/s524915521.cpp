#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    char ch;
    int an[26];
    for(int i=0;i<27;i++){
        an[i]=0;
    }
    while(cin>>ch){
        
        int chi=tolower( ch);
        int num=chi-'a';
        if(0<=num&&num<=25){
        an[num]=an[num]+1;}
    }
        cout<<"a : "<<an[0]<<"\n";
        cout<<"b : "<<an[1]<<"\n";
         cout<<"c : "<<an[2]<<"\n";
          cout<<"d : "<<an[3]<<"\n";
           cout<<"e : "<<an[4]<<"\n";
            cout<<"f : "<<an[5]<<"\n";
             cout<<"g : "<<an[6]<<"\n";
              cout<<"h : "<<an[7]<<"\n";
               cout<<"i : "<<an[8]<<"\n";
                cout<<"j : "<<an[9]<<"\n";
                 cout<<"k : "<<an[10]<<"\n";
                  cout<<"l : "<<an[11]<<"\n";
                   cout<<"m : "<<an[12]<<"\n";
                    cout<<"n : "<<an[13]<<"\n";
                     cout<<"o : "<<an[14]<<"\n";
                      cout<<"p : "<<an[15]<<"\n";
                       cout<<"q : "<<an[16]<<"\n";
                        cout<<"r : "<<an[17]<<"\n";
                         cout<<"s : "<<an[18]<<"\n";
                          cout<<"t : "<<an[19]<<"\n";
                           cout<<"u : "<<an[20]<<"\n";
                            cout<<"v : "<<an[21]<<"\n";
                             cout<<"w : "<<an[22]<<"\n";
                              cout<<"x : "<<an[23]<<"\n";
                               cout<<"y : "<<an[24]<<"\n";
                                cout<<"z : "<<an[25]<<"\n";
return 0;
}