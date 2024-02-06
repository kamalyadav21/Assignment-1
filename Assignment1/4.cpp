#include<iostream>
using namespace std;
float calculateSurfaceArea(float r,float h){
    return 2*3.14159265359*r*(r+h);
}
float calculateVolume(float r,float h){
    return 3.14159265359*r*r*h;
}
int main(){
    float a,b;
    cout<<"Enter radius and height\n";
    cin>>a>>b;
    if (a<0 || b<0){
        cout<<"Negative integers..\n";
        main();
        return 0;
    }
    cout<<"Surface area is: "<<calculateSurfaceArea(a,b)<<endl;
    cout<<"Volume is: "<<calculateVolume(a,b);
    return 0;
}
