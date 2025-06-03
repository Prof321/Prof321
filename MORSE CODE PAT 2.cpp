//Name: KUNAKO
//Surname: BUBULU
//Student Number: 172402060
//Morse Code 

#include <iostream>  // Allows input and output operations
#include <cctype>    // Provides character manipulation functions (toupper)

using namespace std;

// Function to convert a character to Morse code
string convertToMorse(char letter) {
    string morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
                      "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
                      "..-", "...-", ".--", "-..-", "-.--", "--.."};

    return morse[letter - 'A']; // Returns Morse code equivalent for A-Z
}

int main() {
    string input;

    cout << "Enter a single word (letters only): ";
    cin >> input; // Reads a single word from the user (stops at space)

    cout << "\nMorse Code Translation:\n";

    // Loop through input characters
    for (char c : input) {
        // Convert lowercase letters to uppercase
        if (islower(c)) {
            c = toupper(c);
        }

        // Ignore non-alphabetic characters
        if (c >= 'A' && c <= 'Z') {
            cout << convertToMorse(c) << " "; // Output Morse code with spacing
        }
    }

    cout << endl;
    return 0;
}