// SuperDigit.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Hackerrank
#include <iostream>
using namespace std;

int sum(int n){
    int digitSum = 0;
    while (n > 0) {
        digitSum += n % 10;
        n = n / 10;
    }
    return digitSum;
}

int superDigit(int n) {

    // Base case 
    if (n < 10) return n;

    return superDigit(sum(n));
}

int main() {

    int n, k;
    cin >> n >> k;

    n = sum(n) * k;
    cout << superDigit(n);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
