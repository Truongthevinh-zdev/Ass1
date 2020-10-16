#include "../include/Menu.h"
#include "../include/CarFactory.h"
#include <iostream>
using namespace std;

void Menu::Run()
{
    bool running = true;
    while (running)
    {
        cout << "----------Menu---------" << endl;
        cout << "1. View All Car" << endl;
        cout << "2.View One Car" << endl;
        cout << "0.Exit" << endl;
        CarFactory Pro;
        int ch;
        if (ch == 1)
        {
            Pro.getAllCar();
        }
        if (ch == 2)
        {
            Pro.getOneCar();
        }
        if (ch == 0)
            running = false;
    }
}
Menu::~Menu()
{
}