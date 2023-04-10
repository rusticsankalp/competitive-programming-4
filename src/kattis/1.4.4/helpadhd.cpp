/*
https://open.kattis.com/problems/helpaphd
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{ 
  int N;
  string cn;
  
  cin >>N;
  for(int i =0 ;i<N;i++)
  {
    cin >> cn;
    if(i>0) cout <<"\n";
    auto cmp = cn.find("+");
    if(cmp==string::npos)
     cout <<"skipped";
    else {
     cout<<stoi(cn.substr(0,cmp)) + stoi(cn.substr(cmp+1,cn.size()));
    }
  }
  return 0;
}
