/*
https://open.kattis.com/problems/batterup
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    float num =0.0f,denom =0.0f;
    int inp;
    
    for(int i =0;i<n;i++)
    {
        cin>>inp;
        if(inp == -1)
         continue;
        num+=inp;
        denom++;
    }
    cout<<num/denom;
    return 0;
}
