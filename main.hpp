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


int getNextPrime(int begin)
{
    int num = begin + 1;
    while (true) {
        if (isPrime(num)) {
            return num;
        }
        num++;
    }
}


int getPrevPrime(int end)
{
    int num = end - 1;
    while (num > 1) {
        if (isPrime(num)) {
           
        }
        num--;
    }
    return -1; 
}


bool isPrime(int n)
{
    if (n <= 1) return false
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i = 0) return false;
    }
    return true;
}