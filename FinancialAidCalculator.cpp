#include <iostream>
using namespace std;

// A function to compute financial aid based on tuition and GPA
int computeaid(float tution, float gpa = 2.0) {
    float aid;
    aid = tution / 4 * gpa;
    // Prints the message below with the aid that the user can receive.
    cout << "You are entitled to receive $" << aid << " in financial aid.";
    return 0;
}

// Firstly, we define the variables
int main() {
    float tution = 0;
    float gpa = 0;

    // A do-while loop for the tuition amount and takes it when it matches the restrictions
    do {
        cout << "Please enter your tuition amount ($0-$2000): ";
        cin >> tution;
    } while (tution > 2000 || tution < 0);

    // A do-while loop for the GPA and takes it when it matches the restrictions
    do {
        cout << "Please enter your GPA (0.0-4.0): ";
        cin >> gpa;
    } while (gpa < 0 || gpa > 4.0);

    // An if statement where it allows the use of the function only when the GPA is more than 2
    if (gpa < 2.0) {
        cout << "Sorry, you do not qualify academically for financial aid.";
    } 
    // If GPA is less than 3 but more than 2, it will run the function with the tuition only
    // since the GPA has a default value of 2 if it's between 2 and 3
    else if (gpa < 3.0) {
        computeaid(tution);
    } 
    // Will compute with the specific GPA when it passes the past restrictions gpa>3 and gpa<4.
    else {
        computeaid(tution, gpa);
    }

    return 0;
}
