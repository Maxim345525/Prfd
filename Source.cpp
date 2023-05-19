#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
int countWords(const std::string& line) {
    std::stringstream ss(line);
    std::string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}
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
    int totalWords = 0;
    while (std::getline(file, line)) {
        totalWords += countWords(line);
    }
    std::cout << "The number of words in the file: " << totalWords << std::endl;
    file.close();
    return 0;
}