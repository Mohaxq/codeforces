#include <bits/stdc++.h>
using namespace std;
/* at least 2 know to increament counter*/
int main()
{
    int num1,num2,num3,counter = 0;
    int x;
    cin>>x;
    for(int i = 0; i<x;i++){
        cin>>num1>>num2>>num3;
        if(num1+num2+num3 >= 2){
            counter++;
        }
    }
    cout<<counter<<endl;
}
