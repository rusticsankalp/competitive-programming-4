/*
https://open.kattis.com/problems/eligibility
*/
#include<iostream>
#include <string_view>
#include <string>
using namespace std;
int main()
{
  int N;
  cin>>N;
  string name,ms, bday;
  int nc;
  
  string eligible = " eligible";
  string ineligible = " ineligible";
  string petition = " coach petitions";
  for(int i =0;i<N;i++)
  {
      if(i>0) cout <<endl;
      cin>>name>>ms>>bday>>nc;
      
      if(ms>"2010"|| (ms.rfind("2010", 0) == 0))
       cout<<name<<eligible;
      else if(bday>"1991" || (ms.rfind("1991", 0) == 0))
       cout<<name<<eligible;
      else if(nc>=41)
       cout<<name<<ineligible;
      else
       cout<<name<<petition;
      
  }
  return 0;
}
