#include<iostream>
#include<string>
int main(int argc,char **argv)
{
    std::string fullname;
    std::cout<<"hola, escribe tu nombre, por favor:\n";
    std::getline(std::cin, fullname);
    std::cout<<"hola,"<<fullname<<std::endl;
    return 0;
}
