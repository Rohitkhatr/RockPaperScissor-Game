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
    cout << "\n\n\tWelcome To The -Rock Paper Scissor-\n";
    cout << " \t 1. \tSTART\n";
    cout << " \t 2. \tOUIT\n";

    char c;
    char c1;
    c = getch();
    if (c == '1')
    {
        string p1, p2;
        cout << " \n \t\t\t\t Only Two Players Are Allowed At Same Time \n";
        cout << "\n\t\t\t\t PLAYER ONE NAME - ";
        getline(cin, p1);
        cout << "\t\t\t\t PLAYER TWO NAME - ";
        getline(cin, p2);
        cout << " \n\n\t\t\t\t-- Let's Start The Game -- \n\n";

        char p;
        char pp;
        cout << endl
             << "\t\t" << p1 << "'s TURN "
             << "( Choose 1-> Rock , 2-> Paper , 3-> Scissor) "
             << " : ";
    st:
        p = getch();
        if (!(p >= 49 && p <= 51))
            goto st;

        cout << endl
             << "\t\t"
             << p2 << "'s TURN "
             << "( Choose 1-> Rock , 2-> Paper , 3-> Scissor) "
             << " : ";
    ed:
        pp = getch();
        if (!(pp >= 49 && pp <= 51))
            goto ed;

        // char  = "Rock";
        // 2 = "Paper";
        // 3 = "Scissor";

        cout << endl;
        if (p == '1' && pp == '1')
            cout << "\n\t\t\a"
                 << "It's a Tie"
                 << "\n\t\tBoth Choosed Rock";
        else if (p == '2' && pp == '2')
            cout << "\n\t\t\a"
                 << "It's a Tie"
                 << "\n\t\tBoth Choosed Paper";
        else if (p == '3' && pp == '3')
            cout << "\n\t\t\a"
                 << "It's a Tie"
                 << "\n\t\tBoth Choosed Scissor";
        else if (p == '1' && pp == '3' || p == '2' && pp == '1' || p == '3' && pp == '2')
            cout << "\n\t\t\a" << p1 << " Wins" << endl
                 << "\t\t" << p1 << " Choosed " << p << " and " << p2 << " Chossed " << pp;
        else if (p == '3' && pp == '1' || p == '1' && pp == '2' || p == '2' && pp == '3')
            cout << "\n\t\t\a" << p2 << " Wins" << endl
                 << "\t\t" << p1 << " Choosed " << p << " and " << p2 << " Chossed " << pp;
    }
    else
        exit(0);

    cout << "\n\n\t\tWant to Play Again -> Y/N ";
    char s;
    s = getch();
    if (s == 'Y' || s == 'y')
    {
        main();
    }
}