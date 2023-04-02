/*
https://open.kattis.com/problems/statistics
*/
#include<iostream>
#include<sstream>
#include <string>
using namespace std;
int main()
{
 string inp;
 int min , max, tmp , i =1, nt;
 while( getline(cin,inp) && inp.size()>0) 
 {
    stringstream ss(inp);
    
    ss>>nt;
    ss>>min;
    tmp = max =min;
    
    for(int j = 1; j< nt;j++)
    {
     ss >>tmp;
     if(tmp<min) min = tmp;
     if(tmp>max) max = tmp;
    }
    
    if(i>0) cout <<endl;
    printf("Case %d: %d %d %d",i,min,max, max-min);
    
    
    i++;
 }
   
 return 0;
}
