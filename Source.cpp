#include <iostream>
#include <fstream>
using namespace std;
void mergeFiles(const string& inputFile1, const string& inputFile2, const string& outputFile) {
    ifstream file1(inputFile1);
    ifstream file2(inputFile2);
    ofstream mergedFile(outputFile);
    string line1, line2;
    while ((file1, line1) || (file2, line2)) {
        if (!line1.empty()) {
            mergedFile << line1 << endl;
            line1.clear();
        }
        if (!line2.empty()) {
            mergedFile << line2 << endl;
            line2.clear();
        }
    }
    cout << "Files merged successfully!\n";
    file1.close();
    file2.close();
    mergedFile.close();
}
int main() {
    string inputFile1 = "file1.txt";
    string inputFile2 = "file2.txt";
    string outputFile = "merged.txt";
    mergeFiles(inputFile1, inputFile2, outputFile);
    return 0;
}