#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int a;
    double db;
    string st;
    // Read and save an integer, double, and String to your variables.
    cin>>a;
    cin>>db;
    getline(cin>> ws, st);

    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout<<a+i<<endl;
    // Print the sum of the double variables on a new line.
    //printf("%.1lf", sumOfDulbe);
    cout<<fixed << setprecision(1) <<db+d<<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout <<s + st<<endl;

    return 0;
}
