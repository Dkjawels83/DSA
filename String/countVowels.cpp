#include <iostream>
#include <string>
#include <cctype> // for tolower() and isalpha()
using namespace std;

void countVowelsAndConsonants(const string& str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;
    for (size_t i = 0; i < str.length(); ++i) { // Use size_t for indexing
        char ch = str[i];
        if (isalpha(ch)) { 
            char lowerCh = tolower(ch); // Convert to lowercase for easier comparison
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input); 

    int vowels = 0, consonants = 0;
    countVowelsAndConsonants(input, vowels, consonants);

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}

