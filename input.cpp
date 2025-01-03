#include<iostream>
int main(){
    std::string name;
    std::cout<<"Input your full name: ";
    std::getline(std::cin, name);
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    std::cout<<"Welcome "<<name<<'\n';
    std::cout<<"You are "<<age<<" years old"<<
    "\n";
    std::string uni;
    std::cout<<"Enter your univesity: ";
    std::cin>>uni;
    std::cout<<"Your University is "<<uni<<" Unversity"<<"\n";
    return 0;
}