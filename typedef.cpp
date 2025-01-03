#include<iostream>
#include<vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;
typedef int num_t;
int main(){
    text_t Name="Deni Kusuma Wijaya";
    num_t x=50;
    num_t y=100;
    std::cout<<Name<<'\n';
    std::cout<<x*y<<'\n';
    return 0;
}