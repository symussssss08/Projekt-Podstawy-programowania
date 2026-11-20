// Projekt-Podstawy-programowania.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std; 


int susceptible = 80;
int infected = 10;
int recovered = 10;
int wybor = 0;
int day = 0;

double infectionRate = 0.20;
double recoveryRate = 0.10;


void showPopulation(int day, int susceptible, int infected, int recovered)    
{
    int suma = susceptible + infected + recovered;
    cout << "Day: " << day << endl;
    cout << "Susceptible: " << susceptible << endl;
    cout << "Infected: " << infected << endl;
    cout << "Recovered: " << recovered << endl;
    cout << "Total: " << suma << endl; 
    cout << endl;
}
void simulateDay()
{
    int initialInfected = infected; 
    int newInfections = floor(initialInfected * infectionRate); 
    int newRecoveries = floor(initialInfected * recoveryRate); 

    if (newInfections > susceptible)
    {
        newInfections = susceptible; 
    }

    if (newRecoveries > initialInfected)
    {
        newRecoveries = initialInfected;
    }
    susceptible = susceptible - newInfections;
    infected = infected + newInfections - newRecoveries; 
    recovered = recovered + newRecoveries; 
    day++;

}
bool checkPopulation(int susceptible, int infected, int recovered)
{
    if(susceptible < 0 || infected < 0 || recovered <0)
        return false; 
    if(susceptible + infected + recovered == 100)
        return true;

    return false;
}


int main()
{
    
    
    while (wybor != 3)
    {
        showPopulation(day, susceptible, infected, recovered);
        cout << "==== Epidemic Simulator ====" << endl; 
        cout << "1. Simulate next day " << endl;
        cout << "2. Change model parameters " << endl;
        cout << "3. Exit " << endl;
        cout << "Your choice: ";
        cin >> wybor; 


        switch (wybor)
        {
        case 1:
            simulateDay();
            if (!checkPopulation(susceptible, infected, recovered)) 
            {
                cout << "Blad: nieprawidłowy stan populacji, przerwanie symulacji." << endl;
                return 1; 

            }
                            
            break; 
        case 2:
        {
            double newInfections, newRecovery;
            cout << "Enter infection rate (0 - 1): ";
            cin >> newInfections;
            cout << "Enter recovery rate (0 - 1): ";
            cin >> newRecovery;
            
            if (newInfections >= 0.0 && newInfections <= 1.0 && newRecovery >= 0.0 && newRecovery <= 1.0)
            {
                infectionRate = newInfections;
                recoveryRate = newRecovery;
                cout << "Parameters updated." << endl;
            }
            else
            {
                cout << "Error: parameters must be between 0 and 1. Previous values kept. " << endl;
            }
        }
            break;

            
        case 3:
            cout << "===Zakonczono Symulacje===" << endl;
            
            break; 
        default:
            cout << "Nieprawidlowy wybor " << endl; 
            break; 

       
        }
    }
        
   
        


}

