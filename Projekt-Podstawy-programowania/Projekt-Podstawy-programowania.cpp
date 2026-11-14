// Projekt-Podstawy-programowania.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std; 

void showPopulation(int day, int suseptible, int infected, int recovered)
{
    int suma = suseptible + infected + recovered; 
    cout << "Day: " << day << endl;
    cout << "Susceptible: " << suseptible << endl;
    cout << "Infected: " << infected << endl;
    cout << "Recovered: " << recovered << endl;
    cout << "Total: " << suma << endl; 
}


int main()
{
    int wybor = 0;
    int suseptible = 80;
    int infected = 10;
    int recovered = 10;
    int day = 0;
    double infectionRate = 0.20;
    double recoveryRate = 0.10;
    showPopulation(day, suseptible, infected, recovered);
    while (wybor != 3)
    {
        cout << "==== Epidemic Simulator ====" << endl; 
        cout << "1. Simulate next day " << endl;
        cout << "2. Change model parameters " << endl;
        cout << "3. Exit " << endl;
        cout << "Your choice: ";
        cin >> wybor; 


        switch (wybor)
        {
        case 1:
            
            break; 
        case 2:
            
            break; 
        case 3:
            
            break; 
        default:
            cout << "Nieprawidlowy wybor " << endl; 
            break; 

        }
    }
   
        


}

