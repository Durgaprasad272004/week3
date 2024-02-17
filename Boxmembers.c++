/*Write a C++ class 'Box' and its members as the following :
* void boxArea(float length, float width) : as a member function defiend inside class
* void boxVolume(float length, float width, float height) : as a member function defined oustide class
* void displayBoxDimensions() : as a friend function
* void displayWelcomeMessage() : as an inline function
Note: Take the input from the user*/
#include<iostream>
using namespace std;
//inline function
inline void displayWelcomeMessage(){
    cout<<"Hello welcome to Box members"<<endl;
}
class Box{
    public:
        float length,width,height;
    //member function
    void boxArea(){
        cout<<"Box area :"<<2*(length*width+width*height+height*length)<<endl;
    }
    //non member function
     void boxVolume();

     //friend function
    friend void displayBoxDimensions(Box cuboid);

};
void Box :: boxVolume(){
    cout<<"Box Volume :"<<length*width*height<<endl;
}
void displayBoxDimensions(Box cuboid){
    cout<<"length :"<<cuboid.length<<endl;
    cout<<"width :"<<cuboid.width<<endl;
    cout<<"height :"<<cuboid.height<<endl;
}

int main(){
    float length,width,height;
    Box cuboid;
    cout<<"Enter length :"<<ends;
    cin>>cuboid.length;
    cout<<"Enter width :"<<ends;
    cin>>cuboid.width;
    cout<<"Enter height :"<<ends;
    cin>>cuboid.height;
    cuboid.boxArea();
    cuboid.boxVolume();
    displayWelcomeMessage();
    displayBoxDimensions(cuboid);

}