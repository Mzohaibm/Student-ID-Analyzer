#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is prime
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    //    my student id
    string studentID = "bc210427542";
    string programName;

    // extract first two alphabets
    string programID = studentID.substr(0, 2);

    // identify the program
    if (programID == "bc")
    {
        programName = "Bachelors";
    }
    else if (programID == "mc")
    {
        programName = "Masters";
    }
    else
    {
        programName = "Unknown";
    }

    // reverse the digits
    int reversedID = 0;
    int originalID = stoi(studentID.substr(2));

    // reverse the digits using a while loop
    while (originalID > 0)
    {
        reversedID = reversedID * 10 + originalID % 10;
        originalID /= 10;
    }

    // check if the last digit of the reversed ID is prime
    int lastDigit = reversedID % 10;
    string primeStatus = isPrime(lastDigit) ? "is a prime" : "is not prime";

    //  final output
    cout << "Student ID: " << studentID << endl;
    cout << "Program Name: " << programName << endl;
    cout << "Reversed ID: " << reversedID << " - Last Digit: " << lastDigit << " " << primeStatus << endl;
    cout << "The last digit " << lastDigit << " " << primeStatus << " number." << endl;

    return 0;
}