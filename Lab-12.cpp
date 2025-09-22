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

for (int i = 0 i < DAyS; i++){
        inputFile >> steps[i]; // read steps into the array
    }
    inputFile.close(); // close the file

    // array member functions 

    // size
    cout << "Total number of days recorded: " << steps.size() << endl;

    // front and back
    cout << "Steps on the first day: " << steps.front() << endl;
    cout << "Steps on the last day: " << steps.back() << endl;

    // at() for day 10
    cout << "Steps on day 10: " << steps.at(9) << endl; // index 9 for day 10

    // print all steps with a for lop - range based
    
