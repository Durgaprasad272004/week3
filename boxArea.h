#include<iostream>
using namespace std;
void boxArea(float length, float width,float height){
    cout << "Box Area : " << 2 * (length*width + width*height +height*length)<<endl;
}