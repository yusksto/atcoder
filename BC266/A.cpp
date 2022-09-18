#include <iostream>
#include <string>

int main(){
    std::string str;
    std::cin >> str;
    std::cout << str[(str.length() + 1) / 2 - 1] << std::endl;
    return 0;
}
//AC