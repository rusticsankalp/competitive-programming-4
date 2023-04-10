/*
https://open.kattis.com/problems/cetiri
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
   vector<int> arr(3,0);
   int x1,x2;
   cin>>arr[0]>>arr[1]>>arr[2];
   
   sort(arr.begin(),arr.end());
   
   //for(int i =0;i<3;i++)
   
   x1 = arr[1] - arr[0];
   x2 = arr[2] - arr[1];
  
   if(x1==x2) 
    cout<<arr[2]+x1;
   else
   {
     if(x1 ==2*x2)
      cout << arr[0]+x2;
     else if(2*x1 == x2)
      cout << arr[2] - x1;
   }

       
    
  }
