/*
https://open.kattis.com/problems/licensetolaunch
*/
#include<iostream>
using namespace std;
int main()
{
 int N,mini = 0;
 unsigned long  long d;
 cin >>N>>d;
 unsigned long long min = d;
 for(int i =1;i<N;i++)
 {
   cin >>d;
     if(min > d)
      { min =d; mini= i;}
 }
 cout <<mini;
 return 0;
}
