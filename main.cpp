#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    int c;
    cout<<"Enter the three lengths of the triangle rep a,b and c";
    cin>>a;
    cin>>b;
    cin>>c;
    if (a==b && b==c) {
        cout<<"The triangle is equilateral"<<endl;
    }
    else if(a!=b && b!=c) {
        cout<<"The triangle is scalene"<<endl;
    }
    else if(a==b && a!=c && b!=c ||a==c && b!=c && a!=b || b==c && a!=b && a!=c) {
        cout<<"The triangle is isosceles"<<endl;
    }
    else{
            cout<<"Invalid data"<<endl;
    }
    return 0;
}
