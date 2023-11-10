#include "../master_header.h"

int int_input()
{
    int in = 0;
    while (1)
    {
        cin >> in;
        if (cin.fail())    // FAST INPUT CHECKER FOR INTEGER
        {
            cout << "Invalid Input" << endl;
            cout << "Please Enter an Integer Value" << endl;
            cin.clear();    // CLEAR PREVIOUS INPUT STREAM
            cin.ignore(5, '\n');      // DISCARD PREVIOUS INPUT
        }
        else 
        {
            break;
        }
    }
    return in;
}

string string_input()
{
    string str = " ";
    while (1)
    {
        getline(cin, str);
        if (str.empty())    // FAST INPUT CHECKER FOR INTEGER
        {
            cout << "Invalid Input" << endl;
            cout << "Please Enter an String Input" << endl;
            fflush(stdin);
        }
        else 
        {
            break;
        }
    }
    return str;
}

char char_input()
{
    char c;
    while(1)
    {
        cin >> c;
        if(c == 'm' || c == 'M' || c == 'f' || c == 'F')
        {
            break;
        }
        else
        {
            cout << "Invalid Input" << endl;
            cout << "Please Enter Char Input(M/F)" << endl;
            cin.clear();
            cin.ignore(5, '\n');
        }
    }
    return c;
}