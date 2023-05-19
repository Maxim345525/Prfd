#include <iostream>
#include <fstream>
using namespace std;
int findMaxNumber(const std::string& fileName) {
    ifstream inputFile(fileName);
    if (!inputFile) {
        cout << "Error: Could not open the file.\n";
        return -1;
    }
    int maxNumber = INT_MIN;
    std::string line;
    while ((inputFile, line)) {
        std::string numberStr;
        int number;
        bool hasNumber = false;
        for (char c : line) {
            if (c == ',' || c == ' ' || c == '\n') {
                if (!numberStr.empty()) {
                    number = (numberStr);
                    if (!hasNumber || number > maxNumber) {
                        maxNumber = number;
                        hasNumber = true;
                    }
                    numberStr.clear();
                }
            }
            else {
                numberStr += c;
            }
        }
        if (!numberStr.empty()) {
            number = (numberStr);
            if (!hasNumber || number > maxNumber) {
                maxNumber = number;
                hasNumber = true;
            }
        }
    }
    inputFile.close();
    if (maxNumber == INT_MIN) {
        std::cout << "No numbers found in the file.\n";
        return -1;
    }
    return maxNumber;
}
int main() {
    std::string fileName = "numbers.txt";
    int maxNumber = findMaxNumber(fileName);
    if (maxNumber != -1) {
        std::cout << "The maximum number is: " << maxNumber << std::endl;
    }
    return 0;
}