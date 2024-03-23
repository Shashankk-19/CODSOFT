#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int countWordsInFile(const string& filename) {
    ifstream sfile(filename); //open the file
    string word;
    int wordcount = 0;

    if(!sfile.is_open()) {
        //checks if the file is opened successfully
        cout <<"Error : can't open file. " << endl;
        return -1; // return -1 shows error

    }
    // read words from the sfile
    while (sfile >> word)
    {
        wordcount++ ; //increase the wordcount for each word 
    }

    sfile.close(); //closes the file

    return wordcount; // return the total word count
    
}

int main() {
    string filename;
    //input from user for file name 

    cout << "Enter the file name in which you want to count words in : ";
    cin >> filename;

    //call the function to count words 
    int wordcount = countWordsInFile(filename);

    //output the total words 
    if (wordcount >= 0)
    {
        cout << "Total number of words in the file -> " << filename << " : " << wordcount << endl;

    }

    return 0;
    
}