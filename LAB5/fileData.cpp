#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

string capitalized(string txt){
    
    for (int i =0; i<txt.length(); i++){
        if(i==0 || txt[i-1]== ' '){
            if(isalpha(txt[i+1]))
            txt[i+1] = toupper(txt[i+1]);
        }

    }
    return txt;

}

string Reverse(string text){
    string reversed = "";
    for (int i = text.length() -1; i >= 0; i--){
        reversed += text[i];

    }
    return reversed;
}

int main(){

    ifstream infile;
    infile.open("textfile.txt");
    if (!infile) {
        cerr << "Unable to open file textfile.txt";
        exit(1); 
    }
    // This code reads the entire contents of the file into a string using a stringstream
    stringstream buffer;
    buffer << infile.rdbuf(); 

    // Convert the stringstream to a string and print it
    string filedata = buffer.str();
    cout << filedata << endl;

    int vowelCount = 0;
    for (char c : filedata) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }
    cout << "Number of vowels in the file: " << vowelCount << endl;

    stringstream ss(filedata);
    string word;
    int wordCount = 0;
    while (ss >> word) {
        wordCount++;
    }
    cout << "Number of words in the file: " << wordCount << endl;

    string capitalsecond = capitalized(filedata);
    cout << capitalsecond << endl;

    string reversedText = Reverse(filedata);
    cout << reversedText << endl;

    


    
    
}