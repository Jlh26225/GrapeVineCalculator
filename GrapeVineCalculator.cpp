// Write a program that calculates how many grapvines per row the Vineyard owner needs to plant.

#include <iostream>

using namespace std;

int main() {
    // Declare variables for the calculation
    double rowLength, endPostSpace, vineSpacing, vines;

    // Get the inputs from the user
    cout << "Enter the length of the row, in feet: ";
    cin >> rowLength;

    cout << "Enter the amount of space used by an end-post assembly, in feet: ";
    cin >> endPostSpace;

    cout << "Enter the amount of space between the vines, in feet: ";
    cin >> vineSpacing;

    // Calculate the number of grapevines that will fit
    vines = (rowLength - (2 * endPostSpace)) / vineSpacing;

    // Display the result 
    cout << "\nThe number of grapevines that will fit in the row is: "
        << static_cast<int>(vines) << endl;

    return 0;
}