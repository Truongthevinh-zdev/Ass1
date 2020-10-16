#include "../include/CarFactory.h"
#include "../include/Honda.h"
#include "../include/Yamaha.h"
#include "../include/SYM.h"
#include "../include/Kawasaki.h"
#include <string>
#include <iostream>
using namespace std;


void CarFactory::getAllCar()
{
    Car *car = new Car();
    for (int i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            car = new Honda();
            car->viewCar();
        }
        if (i == 1)
        {
            car = new Yamaha();
            car->viewCar();
        }
        if (i == 2)
        {
            car = new SYM();
            car->viewCar();
        }
        if (i == 3)
        {
            car = new Kawasaki();
            car->viewCar();
        }
    }
}
void CarFactory::getOneCar()
{
    Car *car = new Car();
    cout << "1: Honda   2:Yamaha    3:SYM    4:Kawasaki" << endl;
    cout << "Choose one car :";
    int choose;
    cin >> choose;
    if (choose == 1)
    {
        car = new Honda();
        car->viewCar();
    }
    if (choose == 2)
    {
        car = new Yamaha();
        car->viewCar();
    }
    if (choose == 3)
    {
        car = new SYM();
        car->viewCar();
    }
    if (choose == 4)
    {
        car = new Kawasaki();
        car->viewCar();
    }
}