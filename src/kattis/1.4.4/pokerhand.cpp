/*
https://open.kattis.com/problems/pokerhand
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> lkp;
    string card;
    lkp['A'] = 0;
    lkp['2'] = 0;
    lkp['3'] = 0;
    lkp['4'] = 0;
    lkp['5'] = 0;
    lkp['6'] = 0;
    lkp['7'] = 0;
    lkp['8'] = 0;
    lkp['9'] = 0;
    lkp['T'] = 0;
    lkp['J'] = 0;
    lkp['Q'] = 0;
    lkp['K'] = 0;
    
    for(int i =0;i<5;i++)
    {
      cin>>card;
      lkp[card[0]]++;
    }
    
    int max= lkp['A'];
    
    for(auto it = lkp.begin();it!=lkp.end();it++)
    {
      //cout<<it->first<<":"<<it->second<<" ";
      if(max<it->second)
        max = it->second;
    }

    cout<< max;
    
    return 0;
}