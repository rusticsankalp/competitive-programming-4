/*
https://open.kattis.com/problems/acm
*/
#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n, m;
    int scores[26];
    int finalscore = 0, finalProb = 0;
    
    char prob;
    string result;
    
    for(int i =0;i<26;i++)
    {
        scores[i]=0;
    }
    
    cin>>m;
    while(m != -1)
    {
        cin>>prob>>result;
        
        if(scores[prob-'A']>=0)
        {
            if(result == "right") {
                finalscore += scores[prob-'A'] + m;
                scores[prob-'A'] == -1;
                finalProb++;
            }
            else 
            {
                scores[prob-'A'] += 20;
            }
            
        }
        
        cin>>m;
    }
    cout<<finalProb<<" "<<finalscore;
    return 0;
}
