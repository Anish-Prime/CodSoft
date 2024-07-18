#include <iostream>
using namespace std;

//Made with love by Prime :)

int main()
{
    int x = rand()%100;
    cout<<"Welcome To This Game, Esteemed Guest (^_^) \n";
    int count = 0;
    cout<<"Start of game -> \n";
    int w = 200;
    while(w!=x)
    {
        cout<<"Guess the number, dear user (UwU) :\n";
        cin>>w;
        if(w==x)
        cout<<"Bullseye, knew you were amazing from the start ;)\n";
        else if(w<x)
        cout<<"Too low :(\n";
        else
        cout<<"Too high :(\n";
        count++;
    }
    cout<<"It took you only "<<count<<" turns to guess the correct answer (>.<)\n";
}