/*
https://open.kattis.com/problems/bubbletea
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    vector<int> tea,top;
    int cost;
    cin>>N;
    for(int i =0;i <N;i++)
    {
        cin>>cost;
        tea.push_back(cost);
    }
    
    cin>>M;
    for(int i =0 ;i<M;i++)
    {
        cin>>cost;
        top.push_back(cost);
    }
    
    int P,cmp;
    long min = std::numeric_limits<long>::max();
    for(int i =0; i<N;i++)
    {
        cin>>P;
        for(int j=0;j<P;j++)
        {
            //cout <<min <<" ";
            cin>>cmp;
            min = (min > (tea[i]+top[cmp-1])) ? tea[i]+top[cmp-1] : min;
        }
    }
    
    
    //cout <<min <<" ";
    long money;
    cin>>money;
    
    long total = money/min;
    
    total = (total <=1) ? 0 : total-1;
    
    cout <<total; 
    
}