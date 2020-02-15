// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int AddTwoNum(int a, int b) 
{
    // TODO: logic goes here

    // e.x. logical err
    int c = a + b;

    

    return c;
}


void DoNothing()
{
    std::cout << "ah ha a picture!" << std::endl;
}

int main()
{
    // std::cout << "This is my first project!" << std::endl;
   /* int a = 1;
    int b = 1;
    int c = a + b;*/

    //std::cout << c <<std::endl;
    //std::cout << c;


    // call AddTwoNum function,
    // invoke .. function

    std::cout << AddTwoNum(1, 1) << std::endl;
    DoNothing();

    return 0;

}
