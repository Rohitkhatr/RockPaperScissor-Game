#include <iostream>
#include <cstdio>
#include <conio.h>
#include <stdlib.h>

using namespace std;
//                                                          Rock Paper Scissor Game

int main()
{
    system("cls");
    system("Color 02");
    cout << "Welcome To The <ROCK PAPER SCISSORS>\n";
    cout << " 1. START\n";
    cout << " 2. OUIT\n";
    cout << "-----------------------------------\n";
    char c;
    char c1;
    c = getch();
    if (c == '1')
    {
        string p1, p2;
        cout << "RULE : Only Two Players Are Allowed At Same Time \n";
        cout << "\nPLAYER ONE NAME - ";
        getline(cin, p1);
        cout << "PLAYER TWO NAME - ";
        getline(cin, p2);
        cout << "\n-----------------------------------\n";
        cout << "-- Let's Start The Game -- \n";
        char p;
        char pp;
        cout << "\n"
             << p1 << "'s TURN "
             << "( Choose 1-> Rock , 2-> Paper , 3-> Scissor) "
             << " : ";
    st:
        p = getch();
        if (!(p >= 49 && p <= 51))
            goto st;

        cout << "\n"
             << p2 << "'s TURN "
             << "( Choose 1-> Rock , 2-> Paper , 3-> Scissor) "
             << " : ";
    ed:
        pp = getch();
        if (!(pp >= 49 && pp <= 51))
            goto ed;

        cout << endl;
        if (p == '1' && pp == '1')
        {
            cout << "\n\a"
                 << "It's a Tie"
                 << "\nBoth Choosed Rock";
            cout << "\n-----------------------------------\n";
        }
        else if (p == '2' && pp == '2')
        {
            cout << "\n\a"
                 << "It's a Tie"
                 << "\nBoth Choosed Paper";
            cout << "\n-----------------------------------\n";
        }
        else if (p == '3' && pp == '3')
        {
            cout << "\n\a"
                 << "It's a Tie"
                 << "\nBoth Choosed Scissor";
            cout << "\n-----------------------------------\n";
        }
        else if (p == '1' && pp == '3' || p == '2' && pp == '1' || p == '3' && pp == '2')
        {
            cout << "\n\a" << p1 << " Wins" << endl
                 << p1 << " Choosed " << p << " and " << p2 << " Chossed " << pp;
            cout << "\n-----------------------------------\n";
        }
        else if (p == '3' && pp == '1' || p == '1' && pp == '2' || p == '2' && pp == '3')
        {
            cout << "\n\a" << p2 << " Wins" << endl
                 << p1 << " Choosed " << p << " and " << p2 << " Chossed " << pp;
            cout << "\n-----------------------------------\n";
        }
    }
    else
        exit(0);

    cout << "\nWant to Play Again -> Y/N ";
    char s;
    s = getch();
    if (s == 'Y' || s == 'y')
    {
        main();
    }
}
