#include <bits/stdc++.h>
using namespace std;


int main()
{
   int n,nxt=0;
   cin>>n;
   int a=0,b=1;
   cout<<a<<" "<<b<<" ";
   nxt=a+b;
   while(nxt<=n)
   {
      cout<<nxt<<" ";
      a=b;
      b=nxt;
      nxt=a+b;   
       
   }
   return 0;    
    
    
}