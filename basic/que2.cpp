// program to find the volume of cylinder 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,h;
    cout<<"enter the value of radius and height";
    cin>>r>>h;
    int volume;
    volume = 3.14*r*r*h;
    cout<<"the volume of cylinder having radius "<< r <<"and height "<< h<<"is " << volume;

return 0;
}