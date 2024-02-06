#include<iostream>
using namespace std;
int calculateArea(int a,int b){
    return a*b;
}
int calculatePerimeter(int a,int b){
    return 2*(a+b);
}
int main(){

    // euclidian algo to find gcd
    int a,b;
    cout<<"Enter length and width\n";
    cin>>a>>b;
    if (a<0 || b<0){
        cout<<"Negative integers..\n";
        main();
        return 0;
    }
    cout<<"Area is: "<<calculateArea(a,b)<<endl;
    cout<<"Perimeter is: "<<calculatePerimeter(a,b);
    return 0;
}
