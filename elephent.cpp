#include<bits/stdc++.h>
// I tried while loop but it was to0 long and unnecessary
// And the answer was wrong as well :(
using namespace std;
int main ()
{
 int  n , res = 0  ;
 cin>>n;
 res = n/5;
 if(n%5!=0)
 {
     res +=1;
 }
 cout<<res<<endl;
}
