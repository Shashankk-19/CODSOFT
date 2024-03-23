#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int countWordsInFile(const string& filename) {
    ifstream file(filename);
    string word;
    int wordCount = 0;

    if (!file.is_open()) {
        cout << "Error: Unable to open file." << endl;
        return -1; // Return -1 to indicate error
    }

    while (file >> word) {
        ++wordCount;
    }

    file.close();

    return wordCount;
}

int main() {
    string filename;
    
    cout << "Enter the file name: ";
    cin >> filename;

    int wordCount = countWordsInFile(filename);

    if (wordCount >= 0) {
        cout << "Total word count in file '" << filename << "': " << wordCount << endl;
    }

    return 0;
}
