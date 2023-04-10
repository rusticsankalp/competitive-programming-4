/*
https://open.kattis.com/problems/hissingmicrophone
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin>>word;
    bool hiss = false;
    
    if(word.size()<=1)
    {
        hiss = false;
    }
    else
    {
        for (int i =1;i<word.size();i++)
        {
            if(word[i-1] == 's' && word[i] == 's')
            {hiss = true; break;}
        }
        
    }
    
    if(hiss)
      cout<<"hiss";
    else
      cout <<"no hiss";
    
    return 0;
}