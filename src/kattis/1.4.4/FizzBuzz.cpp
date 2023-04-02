/*
https://open.kattis.com/problems/fizzbuzz
*/
#include<iostream>
using namespace std;
int main()
{
 int x,y,n;
 cin>>x>>y>>n;
 
 for(int i =1; i<=n;i++)
 {
   string out{};
   if(i%x == 0) out = "Fizz";
   if(i%y == 0) out = out+"Buzz";
   
   if(i>1) cout <<endl;
   
   if(out.empty())
    cout <<i;
   else 
    cout <<out;
    
 }
 return 0;
}
