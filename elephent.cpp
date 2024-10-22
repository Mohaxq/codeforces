#include <iostream>
using namespace std;
int main(){
int x =0;
int counter;
cin>>counter;
while (counter >=5){
    x++;
    counter -=5;
}
while (counter ==4){
    x++;
    counter -=4;
}
while (counter ==3){
    x++;
    counter -=3;
}
while (counter ==2){
    x++;
    counter -=2;
}
while (counter ==1){
    x++;
    counter -=1;
}
cout<<x<<endl;
}
