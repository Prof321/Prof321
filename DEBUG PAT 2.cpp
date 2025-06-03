//Name: BUBULU
//Surname: KUNAKO
//Student Number: 172402060
//Purpose: DEBUG PROJECT

#include <iostream>  // Allows input and output operations
#include <iomanip>   // Allows precise formatting of output

using namespace std; // Uses the standard namespace

const int NUM_EXPERIMENTS = 3; // Defines the number of experiments
const int NUM_READINGS = 3;    // Defines the number of readings per experiment

int main() { 
    int i, j;                  // Loop counters
    double readingValue, total, average; // Variables for reading value, total, and average

    // Loops through each experiment
    for (i = 1; i <= NUM_EXPERIMENTS; i++) {
        total = 0; // Resets total for each experiment
        cout << "\nEXPERIMENT " << i << endl;
        cout << "------------------\n";

        // Loops through each reading within an experiment
        for (j = 1; j <= NUM_READINGS; j++) {
            cout << "Enter reading " << j << " value: "; // Asks user for reading input
            cin >> readingValue; // Stores user input into readingValue
            total += readingValue; // Adds each reading to total
        }

        average = total / NUM_READINGS; // Computes the average reading

        // Evaluates the average and categorizes it
        if (average < 100) { 
            cout << "Experiment " << i << " average: " 
                 << fixed << setprecision(2) << average 
                 << " is Below acceptable range\n";
        } else if (average >= 100 && average <= 300) { 
            cout << "Experiment " << i << " average: " 
                 << fixed << setprecision(2) << average 
                 << " is Within acceptable range\n";
        } else { 
            cout << "Experiment " << i << " average: " 
                 << fixed << setprecision(2) << average 
                 << " is Above acceptable range\n";
        }
    }

    return 0; // Indicates successful execution
}