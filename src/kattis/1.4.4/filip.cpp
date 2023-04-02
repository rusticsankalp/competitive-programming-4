/*
https://open.kattis.com/problems/filip
*/
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string a, b;
    cin >> a >>b;
    /*
    if(a.size() > b.size()) cout a;
    else if ( b.size() > a.size()) cout b;
    else 
    {
    */
    
    string ar(a), br(b);
    reverse(ar.begin(),ar.end());
    reverse(br.begin(),br.end());
        
    if(ar>br) cout << ar;
    else cout <<br;
    
    
    return 0;
}
