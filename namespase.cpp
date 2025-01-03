#include <iostream>
//for manually add libary
namespace first{
    int x=1;
}
namespace second {
    int x=2;
}
int main(){
    //for add all the code to 1 line is std
    using namespace std;
    int x=50;
    cout<<x;
    return 0;
}