#include <iostream>

using namespace std;

int main()
{
    int osszpontszam = 0;
    cout << "Mennyi a dolgozat osszpontszama?" << endl;
    cin >> osszpontszam;
    int pontszam = 0;
    cout << "Mennyi a dolgozatban elert pontszam?" << endl;
    cin >> pontszam;

    if(pontszam >= osszpontszam * 0.8)
    {
        cout << endl << "Jegy:" << endl << "5-os" << endl;
    }
    else if(pontszam >= osszpontszam * 0.6)
    {
        cout << endl << "Jegy:" << endl << "4-es" << endl;
    }
    else if(pontszam >= osszpontszam * 0.4)
    {
        cout << endl << "Jegy:" << endl << "3-as" << endl;
    }
    else if(pontszam >= osszpontszam * 0.25)
    {
        cout << endl << "Jegy:" << endl << "2-es" << endl;
    }
    else
    {
        cout << endl << "Jegy:" << endl << "1-es" << endl;
    }
}
