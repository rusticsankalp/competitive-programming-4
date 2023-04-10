/*
https://open.kattis.com/problems/vote
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,v,prev;
    cin>>T;
    int mxc =0;
    
    int all,max,maxi;
    for(int i =0;i<T;i++)
    {
        cin>>n;
        cin>>v;
        all = max = prev = v;
        maxi =0;
        mxc=1;
        for(int j=1;j<n;j++)
        {
            cin>>v;
            all+= v;
            if (max==v) mxc++;
            if(max<v) {max = v; maxi = j;mxc=1;}
            prev = v;
        }
        if(i>0) cout<<endl;
        if(mxc>1)
         cout<<"no winner";
        else if(max > all/2)
          cout<<"majority winner "<<maxi+1;
        else 
          cout<<"minority winner "<<maxi +1;
    }
    
    return 0;
}