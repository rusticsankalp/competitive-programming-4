/*
https://open.kattis.com/problems/mia
*/
#include<iostream>
using namespace std;
int main()
{ 
  int s0,s1,r0,r1;
  cin >>s0>>s1>>r0>>r1;
  int matrix [6][6] = {
      { 6, 0,20,18,15,11},
      { 0, 5,19,17,14,10},
      {20,19, 4,16,13, 9},
      {18,17,16, 3,12, 8},
      {15,14,13,12, 2, 7},
      {11,10, 9, 8, 7, 1},
  };
  bool flag = false;
  while(! (s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0))
  {
      if(flag) {cout<<endl;}
      flag = true;
      
      if(matrix[s0-1][s1-1] < matrix[r0-1][r1-1])
        cout<<"Player 1 wins.";
      else if(matrix[s0-1][s1-1] > matrix[r0-1][r1-1])
        cout<<"Player 2 wins.";
      else 
        cout<<"Tie.";
      cin >>s0>>s1>>r0>>r1;
  }
  return 0;
}
