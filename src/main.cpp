#include <iostream>
#include <string>
using namespace std;

int main()
{
    Card MyCard(5, "Hearts");
    MyCard.PrintInfo();
}

class Card
{
private:

public:

int Number;

string Suite;


Card(int _num, string _suite){
    Number = _num;
    Suite = _suite;
}

void PrintInfo()
{
    cout << "Num: " + Number << endl;
    cout << "Suite: " + Suite << endl;
}

};
