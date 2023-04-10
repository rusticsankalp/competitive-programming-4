/*
https://open.kattis.com/problems/lineup
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<string> team;
    string player;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>player;
        team.push_back(player);
    }
    
    vector<string> team_asc(team.begin(),team.end());
    sort(team_asc.begin(),team_asc.end());
    
    vector<string> team_desc(team.begin(),team.end());
    sort(team_desc.begin(),team_desc.end(),greater<string>());
    
    if(team_asc == team)
      cout<<"INCREASING";
    else if(team_desc ==team)
      cout<<"DECREASING";
    else
      cout<<"NEITHER";

    return 0;
}
