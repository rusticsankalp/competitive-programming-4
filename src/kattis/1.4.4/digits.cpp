/*
https://open.kattis.com/problems/digits
*/
#include<bits/stdc++.h>

using namespace std;

int Digits(int num)
{
  return (num <=1) ? 1 : floor(log10(num))+1;
}

int main()
{
 string inp;
 cin >>inp;
 bool newline = false;
 while(inp != "END")
 {
  if(newline) 
  {cout <<endl;} 
   else 
  {newline = true;}
  
  int val = inp.size();
  
  if(val == 1) 
  {
   if(inp =="1") cout <<1;
   else cout <<2;
  }
  else
  {
	  int i = 2;
	  while(Digits(val) != val)
	  {
	   val = Digits(val);
	   i++;
	  }

	  cout << i;
  }
  cin>>inp;
 }
}
