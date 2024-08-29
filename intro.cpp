/*1. Create a struct named Fraction. Inside place an int numerator and int denominator
2. Make 3 variables of that type
3. Take user input for fractions 2
4. Make f1 = f2 multiply ?? 
5. Make a fraction pointer
6. using that pointer create a dynamic array using input and output 
8. Fill up the array with rand(numbers) with non 0 denom
9. Print out the elements of the array*/

/*This program will create a struct of Fraction type that has two parameters, a numerator and a denominator. Using a pointer to that struct
we will create as many "Fractions" that the user desires. Using cstdlib and time.h we setup an srand and fill up the fraction array with random numbers.
Because we are talking about fractions, we make sure that the denominator is not lower than the lower bound variable which in the case of fractions is 0.*/
#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

struct Fraction
{
    int numerator;
    int denominator;
};

int main(){

    Fraction *f;
    int num;
    int lb = 0;
    srand(time(0));
    cout << "How many fractions do you want to make?: " << endl;
    cin >> num;

     f = new Fraction[num];
     for (int i = 0; i < num; i++){
        f[i].numerator = rand();
        f[i].denominator = rand();
        if (f[i].denominator > lb){
            cout << "Created Fraction #"<< (i + 1)<< "\n"<<(f[i].numerator %10) << "\n-\n" << (f[i].denominator % 10) << endl;
    
        }
        else {
        cout <<"Running again..." << endl;
        f[i].denominator = rand();
        cout << "Created Fraction #"<< (i + 1)<< "\n"<<(f[i].numerator %10) << "\n-\n" << (f[i].denominator % 10) << endl;
        }
        
     }
    
    /*for (int i = 0; i < num; i++){
        cout << "Enter the numerator for fraction " << (i+1) << ":" << endl;
        cin >> f[i].numerator;
        cout << "Enter the denominator for fraction " << (i+1) << ":" << endl;
        cin >> f[i].denominator;

        cout << "Created Fraction:\n"<< (1 + 1)<< f[i].numerator << "\n-\n" << f[i].denominator << endl;

        
    } */  
    
    delete[] f;

    return 0;
}