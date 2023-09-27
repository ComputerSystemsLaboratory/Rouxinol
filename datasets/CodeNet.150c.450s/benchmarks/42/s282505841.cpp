#include<cstdio>                                                         
#include<queue>                                                          
#include<string>                                                         
using namespace std;                                                     
                                                                         
int main() {                                                             
        queue<pair<string, int> >       tasks, completed;                
        int     nTasks, nQuant, nTime, nCurrent;                         
        char    sName[11];                                               
                                                                         
        scanf("%d %d", &nTasks, &nQuant);                                
        for(int i=0; i<nTasks; ++i) {                                    
                scanf("%s", sName);                                      
                scanf("%d", &nTime);                                     
                tasks.push(pair<string, int>(sName, nTime));             
        }                                                                
                                                                         
        nCurrent = 0;                                                    
        while(tasks.size() != 0) {                                       
                auto curTask = tasks.front();                            
                tasks.pop();                                             
                                                                         
                if(curTask.second > nQuant) {                            
                        curTask.second -= nQuant;                        
                        tasks.push(curTask);                             
                        nCurrent += nQuant;                              
                } else {                                                 
                        nCurrent += curTask.second;                      
                        curTask.second = nCurrent;                       
                        completed.push(curTask);                         
                }                                                        
        }                                                                
                                                                         
        while(completed.size() != 0) {                                   
                auto task = completed.front();                           
                                                                         
                completed.pop();                                         
                printf("%s %d\n", task.first.c_str(), task.second);      
        }                                                                
}                                                                        