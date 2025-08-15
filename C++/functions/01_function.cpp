#include <iostream>
using namespace std;

// sum of 2 nums
double sumOfNums(double num1, double num2)
{
    return (num1 + num2);
}

// min of 2 numbers
int minOfTwo(int num1, int num2) // parameters
{
    return (num1 < num2) ? num1 : num2;
}
int main()
{
    double sum = sumOfNums(5.01,10); // arguments
    int min = minOfTwo(5,10);

    cout << "Sum of Numbers = " << sum << endl;
    cout << "Minimum Number = " << min << endl;

    return 0;
}
// literals => constants or having fixed meaning...eg. arguments, numbers, characters...