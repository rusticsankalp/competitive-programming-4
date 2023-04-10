/*
https://open.kattis.com/problems/battlesimulation
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input;
    cin>>input;
    multiset<char> elems;

    int i =0, j=0;    
    
    while(j<input.size())
    {
       if( i < input.size())
        {
          elems.insert(input[i++]);
        } 
      /*
               printf(" %c:%d %c:%d %ld ",input[i],i,input[j],j,elems.size());
       for(auto itr = elems.begin();itr!=elems.end();itr++)
        cout<<*itr<<" ";
       cout <<endl;
*/
        
       if(elems.count('R')>0 && elems.count('B')>0 && elems.count('L')>0)
       {
          cout<<"C";
          j=i;
          elems.clear();
          continue;
       }
       
       if(i-j >=3 || i>=input.size())
       {
          switch(input[j])
          {
             case 'B': cout <<'K';break;
             case 'L': cout <<'H';break;
             case 'R': cout <<'S';break;
             
           }
          if(elems.count(input[j])>0)
            elems.erase(elems.lower_bound(input[j]));
          j++;
       }
    }

    return 0;
   }