#include <iostream>
#include <cmath>
// the question asks to find the maximum capacity
using namespace std;
int main (){

int t,cap=0,maxe=0;

cin>>t;                      // enter test case

while (t--){
        int i,o;

    cin>>o>>i;             // enter number for people in and out
    cap +=i;
    cap -=o;

    maxe = max(maxe,cap); // compare between the cap and maxe
                         // and found the max value

}

cout<<maxe;
}
