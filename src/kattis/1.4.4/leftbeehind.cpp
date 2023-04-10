/*
https://open.kattis.com/problems/leftbeehind
*/
#include<iostream>
using namespace std;
int main()
{
  int x{0},y{0};
  string out{};
  do 
  {
    cin>>x>>y;
    if(x==0 && y==0)
      break;
    
    if(!out.empty()) cout <<endl;
    if((x+y) == 13)
      out = "Never speak again.";
    else if(x>y)
      out = "To the convention.";
    else if(x<y)
      out = "Left beehind.";
    else
      out = "Undecided.";
      
    cout<<out;
    
  }while(true);
  return 0;
}
