#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dice
{
    public:
        Dice();
        void Roll();
        void Display();
        void Reset();

    private:
        int lastRoll;
        int totalRolls;
        int totalScore;
};

Dice::Dice() : lastRole(0), totalRolls(0), totalScore(0)
{ }

void Dice::Roll()
{
    lastRoll = 0;
    totalRolls++;

//generating random number between 1 and 20
    lastRoll = (rand() % 20) + 1;

    totalScore += lastRoll;
}

void Dice::Display()
{
    cout << "Your roll was " << lastRoll << "." << endl;
    cout << "You have rolled " << totalRolls << " times." << endl;
    cout << "Your total score is " << totalScore << "." << endl;
}

void Dice::Reset()
{
    lastRoll = 0;
    totalScore = 0;
    totalRolls = 0;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    Dice myDice;
    myDice.display();

    for (int i = 0; i < 10; i++)
    {
        myDice.Roll();
        mydice.Display();
    }


    cin.get();
    return 0;
}