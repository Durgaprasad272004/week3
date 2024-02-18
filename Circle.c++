#include<iostream>
#ifndef PI
#define PI 3.14
#endif
#include"Areaofcircle.h"
using namespace std;
int main(){
    float radius;
    cout<<"Enter radius :"<<endl;
    cin>>radius;
    Area(radius);
}