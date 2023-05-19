#include <iostream>
#include <fstream>
int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cout << "Usage:\n";
        return 1;
    }
    std::string inputFileName = argv[1];
    std::string outputFileName = argv[2];
    std::ifstream inputFile(inputFileName);
    if (!inputFile) {
        std::cout << "Error: Could not open input file\n";
        return 1;
    }
    std::ofstream outputFile(outputFileName);
    if (!outputFile) {
        std::cout << "Error:\n";
        return 1;
    }
    char ch;
    while (inputFile.get(ch)) {
        outputFile.put(ch);
    }
    inputFile.close();
    outputFile.close();
    std::cout << "File copied successfully!\n";
    return 0;
}