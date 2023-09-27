
 
//                                     ```..-------..```...``                                         
//                                  ``.-:::/://:::::::--.-----.`                                      
//                                `.-:://+++ooooooo++/:--:--.----.                                    
//                              `.--:/++oosyyyyyyso+//+o+/://----:-`                                  
//                             `.-:/++osyyhhddddddhhhhhyyysoo+++///-                                  
//                            `-::/+osyyhhhdddddmmmmmmmddddddhhyss+/.                                 
//                           `.-:+ossyyhhdddddddmmmmmmmmmddmdddhhyso/`                                
//                           `-:/+syyhhhhhhhhhhhhdmmmmmmmmmmmddddhys+.                                
//                          `.-:/osyhhyyssoo+oooosyhdmmmmmmmmmmmmdhso:                                
//                          .-:/+oyyso/////:://///++oydhhhhddddmmdhyo-`                               
//                          .-/+oss+/::::::::::::////+o+++oosshdddhy+`                                
//                          .:/+oo+:------------:::://////++++oshdhs/                                 
//                          `:/+/--.............----::::///+++++ohho.                                 
//                           -::-....-::://:---:------:::/+++++//os:                                  
//                         ```:/:--::://::/+++so+//+ossyyhhhhhys+:+`                                  
//                        ``..:/..--://o++oooooshyydhoossyyyssso+/+/.                                 
//                         ..---..-:/+:osyossooyyoshysyyydhysyo/:::o.                                 
//                         `.-..``.--:://+++ooyo-.-+hsssssysoo+/:-::                                  
//                         `.-.``````..---::/+/`  `.+s///++++/::--/.                                  
//                          `..``````````.-:/-`     `/+:::::----.-:`                                  
//                           `-``````````.-:.`      `.::::::::-----                                   
//                            ..`.```.....-:...````...--...-----.-`                                   
//                            `-........-..-/oso::+o+/-..------.-.                                    
//                             .-.....-:::-:oyhhoshhso:-----..--:                                     
//                             `---...:+oooo+oososssssosso:-.-::.                                     
//                              `--...-://++++++/++++soooo:--:/.                                      
//                               .::-.-:::::://///////::/:--::`                                       
//                               `-/////::::/++oo++/:::::://-`                                        
//                               `.:/+++//::://+///:://+++/.                                          
//                             ``..-://ooo++/++o+++++ooo+-`                                           
//                           ````..--::/+ooooooooooooo+/-.                                            
//                             `....--:::///+++++++//:::---                                           
//                             ``...---::::::///////::::::.`                                          
//                               `...----::::::::::::::::.````                                        
//                                 `...--::::::::/:::::-`````                                         
//                                   ``..------:::::---.````                                     .--.`
//                                     ``..-----..-:-```                                        .:++++
//                                        `````..``.`                                         `-://///
//                                             ``                                             --:///++
//                                                                                           `-:://+++
//                                                                                            `-:///++
//                                                                                             `-::/++
//                                                                                               .-:/+
//                                                                                                `.:/
//                                                                                                    
//                                                                                                    
//                                                                                                    
//                                      ````                                                          
//`````````                          ```````````                          ````````                    
//``````````````````````````       ```````````````````````````````  ``````......```                   
//
#include<bits/stdc++.h>
 
 
using namespace std;
 
#define int long long 
#define pb push_back
#define FAST   ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define TIC 	int tt = (int) clock();
 
#define TOK   cerr << "TIME = " << (double)(clock() - tt) / CLOCKS_PER_SEC << endl;
 
int kiran_bhanushali[29][7][20];
 
using graph = vector<vector<int>>;



int32_t main(){
 
	int t=1;
    //cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> mp;
        int sum= 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum+= x;
            mp[x]++;
        }


        int q;
        cin>>q;
        while(q--){
            int x,y;
            cin>>x>>y;

            if(mp[x]){
                int  c= mp[x];
                sum+= y*c - x*c;
                mp[y]+= c;
                mp[x] =0 ;
            }
            cout<<sum<<endl;
        }


    }
 
    return 0;
}
