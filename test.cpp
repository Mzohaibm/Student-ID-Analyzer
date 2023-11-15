#include <iostream>
#include <cmath>

using namespace std;

// function to check if a number is prime
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
    // my student ID
    string myStudentID = "bc210427535";
    string myProgramName;

    // extract first two alphabets
    string myProgramID = myStudentID.substr(0, 2);

    // identify the program
    if (myProgramID == "bc")
    {
        myProgramName = "Bachelors";
    }
    else if (myProgramID == "mc")
    {
        myProgramName = "Masters";
    }
    else
    {
        myProgramName = "Unknown";
    }

    int myReversedID = 0;
    int myOriginalID = stoi(myStudentID.substr(2));

    // reverse the digits
    while (myOriginalID > 0)
    {
        myReversedID = myReversedID * 10 + myOriginalID % 10;
        myOriginalID /= 10;
    }

    // check if the last digit of the reversed ID is prime
    int myLastDigit = myReversedID % 10;
    string myPrimeStatus = isPrime(myLastDigit) ? "is a prime" : "is not prime";

    // output
    cout << "Student ID: " << myStudentID << endl;
    cout << "Program Name: " << myProgramName << endl;
    cout << "Reversed ID: " << myReversedID << " - Last Digit: " << myLastDigit << " " << myPrimeStatus << endl;
    cout << "The last digit " << myLastDigit << " " << myPrimeStatus << " number." << endl;

    return 0;
}
