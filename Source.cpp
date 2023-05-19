#include<iostream>
#include <fstream>
#include <string>
#include<ostream>
using namespace std;
int main() {
    std::string filename;
    std::cout << "Input name of file: ";
    std::cin >> filename;
    std::ifstream file(filename);
    if (!file) {
        std::cout << "Error." << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }
    file.close();
    return 0;
}