/*
https://open.kattis.com/problems/artichoke
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
 int p,a,b,c,d,n;
 cin>>p>>a>>b>>c>>d>>n;
 

 
 double pi = p*(sin(a*1+b) + cos(c*1+d) +2);
 double drop = 0;
 double cbuy = pi, csell = pi , hi = pi, lo = pi;

 for(int i = 2;i<=n ;i++)
 {
    pi = p*(sin(a*i+b) + cos(c*i+d) +2);
    
    /*
    if(cbuy - pi > drop) drop = cbuy - pi;
    if(pi >cbuy) cbuy = pi;
    */
    
    if(hi < pi) {hi = pi ; lo = pi;continue;}
    
    if(lo > pi) { 
     lo = pi; 
     if((hi-lo) > (cbuy-csell) )
      { cbuy = hi ; csell = lo;}
    }
    
 }
 
 printf("%.7f", cbuy-csell);
 
 return 0;
}
