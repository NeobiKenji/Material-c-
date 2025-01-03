#include<iostream>
using namespace std;
int main(){
    //const (for fix numbe that cannot changed)
    const double DECIMAL =3.14;
    double radius=20;
    double circumference= 2*DECIMAL*radius;
    std::cout<<circumference<<'cm'<<'\n';
    //example const
    const double PI=3.14;
    const int WIDTH=1920;
    const int HEIGHT=1080;
    std::cout<<PI<<'\n'<<WIDTH<<'\n'<<HEIGHT;
    return 0;
}