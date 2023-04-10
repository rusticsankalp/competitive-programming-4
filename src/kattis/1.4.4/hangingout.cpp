/*
https://open.kattis.com/problems/hangingout
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int limit,nEvents,p,current =0 ,deny=0;
    string event;
    
    cin>>limit>>nEvents;
    
    for(int i =0;i<nEvents;i++)
    {
        cin>>event >> p;
        if(event == "enter")
          {
              if(p+current > limit)
                {
                    deny++;
                    continue;
                }
              else current +=p;
          }
        else if (event == "leave")
        {
            current = current<p ?0:current-p;
        }
    }
    cout <<deny;
    return 0;
}