#include <iostream>
#include <fstream>
#include <string>
#include <cctype> 

using namespace std;

int countv(const string& str) {
    int count = 0;
    string vowel = "aeiouAEIOU";
    for (char c : str) {
        if (vowel.find(c) != string::npos) {
            count++;
        }
    }
    return count;
}

int countW(const string& str) {
    int count = 0;
    bool Word = false;
    for (char c : str) {
        if (isalpha(c) && !Word) {
            count++;
            Word = true;
        } else if (!isalpha(c)) {
            Word = false;
        }
    }
    return count;
}

string reverseS(const string& str) {
    string reversed;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed.push_back(str[i]);
    }
    return reversed;
}

string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    ifstream inFile("test.txt"); 
    if (!inFile) {
        cerr << "Error: Unable to open input file." << endl;
        return 1;
    }

    string fileData;
    getline(inFile, fileData);

    int vowelCount = countv(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    int wordCount = countW(fileData);
    cout << "Number of words: " << wordCount << endl;

    string reversedStatement = reverseS(fileData);
    cout << "Reversed statement: " << reversedStatement << endl;

    string capitalizedStatement = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letter: " << capitalizedStatement << endl;

    inFile.close(); 

    ofstream outFile("test.txt");
    if (!outFile) {
        cerr << "Error: Unable to open output file." << endl;
        return 1;
    }

    outFile << capitalizedStatement << endl;
    cout << "Updated '.txt file' with capitalized second letters." << endl;

    outFile.close();

    return 0;
}
