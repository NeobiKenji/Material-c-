#include<iostream>

int main(){
    double num=(int)2.5;
    std::cout<<num;
    int correct=10;
    int question=30;
    double score=correct/(double)question*100;
    std::cout<<score<<'%';
    return 0;
}