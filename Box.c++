#include<iostream>
#include"boxArea.h"
#include"boxVolume.h"
using namespace std;
int main (){
    float length,width,height;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter width : ";
    cin >> width;
    cout << "Enter height : ";
    cin >>  height;
    boxArea(length,width,height);
    boxVolume(length,width,height);

}