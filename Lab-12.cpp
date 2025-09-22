// COMSC-210 | Lab 12 | Heidi Pico
// IDE: VS CODE

#include <iostream>
#include <fstream>
#include <array>
#include <algorithm> // using this library for sort, find etc
#include <numeric>
using namespace std;

const int DAYS = 30;

int main() {
    array<int, DAYS> steps; // array to store 30 days of steps

    ifstream inputFile("steps.txt"); // read steps from steps.txt file
    if (!inputFile) {
        cerr << "Error opening file!" << endl;
        return 1;
}

for (int i = 0; i < DAYS; i++){
        inputFile >> steps[i]; // read steps into the array
    }
    inputFile.close(); // close the file

    // array member functions 

    // size ()
    cout << "Total number of days recorded: " << steps.size() << endl;

    // front and back ()
    cout << "Steps on the first day: " << steps.front() << endl;
    cout << "Steps on the last day: " << steps.back() << endl;

    // at() for day 10
    cout << "Steps on day 10: " << steps.at(9) << endl; // index 9 for day 10

    // print all steps with a for loop
    cout << "All steps:" << endl;
    for (size_t i = 0; i < DAYS; i++) {
        cout << steps[i] << " ";
    cout << endl;
    }

    // sort ascending
    sort(steps.begin(), steps.end());
    cout << "Sorted ascending: ";
    for (size_t i = 0; i < steps.size(); i++) {
        cout << steps[i] << " ";
    }
    cout << endl;

    // sort descending
    sort(steps.rbegin(), steps.rend());
    cout << "Sorted descending: ";
    for (size_t i = 0; i < steps.size(); i++) {
        cout << steps[i] << " ";
    }
    cout << endl;

    // find max and min
    cout << "Max steps: " << *max_element(steps.begin(), steps.end()) << endl;
    cout << "Min steps: " << *min_element(steps.begin(), steps.end()) << endl;
    int total = accumulate(steps.begin(), steps.end(), 0);
    cout << "Total steps in 30 days: " << total << endl;

    // fill and swap the small arrays
    array<int, 4> goals4, goals5;
    goals4.fill(4000);
    goals5.fill(5000);
    goals4.swap(goals5);
    cout << "After swap, goals4: ";
    for (size_t i = 0; i < goals4.size(); i++) {
        cout << goals4[i] << " ";
    }
    cout << endl;

    // showing steps again
    cout << "Done printing step counts!" << endl;

    return 0;
}

