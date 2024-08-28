/*1. Create a struct named Fraction. Inside place an int numerator and int denominator
2. Make 3 variables of that type
3. Take user input for fractions 2
4. Make f1 = f2 multiply ?? 
5. Make a fraction pointer
6. using that pointer create a dynamic array using input and output 
7. Look up pointers and dynamic arrays
8. Fill up the array with rand(numbers) with non 0 denom
9. Print out the elements of the array*/
#include <iostream>
using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

int main(){

    Fraction *f;
    int num;

    cout << "How many fractions do you want to make?: " << endl;
    cin >> num;
     f = new Fraction[num];
    
    for (int i = 0; i < num; i++){
        cout << "Enter the numerator for fraction " << (i+1) << ":" << endl;
        cin >> f[i].numerator;
        cout << "Enter the denominator for fraction " << (i+1) << ":" << endl;
        cin >> f[i].denominator;

        cout << "Created Fraction:\n"<< (1 + 1)<< f[i].numerator << "\n-\n" << f[i].denominator << endl;

        
    }   
    
    delete[] f;

    return 0;
}