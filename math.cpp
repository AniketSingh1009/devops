// program to add two numbers
#include <iostream>
using namespace std;
int sub(num1,num2)
{
    return num1-num2;
}
int main() {
    int num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // sum of two numbers in stored in variable sum
    sum = num1 + num2;
    // Prints sum
    cout << "Sum = " << sum;
    // print subtract
   
    int s=sub(num1,num2);
     cout << "sub = " << s;
    
    return 0;
}
