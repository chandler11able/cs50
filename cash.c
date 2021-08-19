#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void) {
int counter;
float change;
int cent;
    
    counter = 0; 
    do
    {
        change = get_float("How much change?: ");  
    }
    while (change < 0);    //cannot be less then zero
    cent = round(change * 100);

    while (cent >= 25)
    {
        cent = cent - 25; //This is Quarters
        counter++;  
    }
    while (cent >= 10)
    {
        cent = cent - 10; //This is dimes
        counter++;       
    }
    while (cent >= 5)
    {
        cent = cent - 5; //These are nickles
        counter++;  
    }
    while (cent >= 1)
    {
        cent = cent - 1;  //These are Cents
        counter++;
    }
    printf("Your final is: %i\n",counter);
}