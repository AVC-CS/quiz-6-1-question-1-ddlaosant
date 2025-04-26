
#include <iostream>
#include <cmath>
using namespace std;

void getTwoValues(int &begin, int &end);
int getNextPrime(int begin);
int getPrevPrime(int end);
bool isPrime(int n);


void getTwoValues(int &begin, int &end)
{
    do {
        cout << "Enter two integers (begin < end): ";
        cin >> begin >> end;
        if (begin >= end) {
            
        }
    } while (begin >= end);
}


