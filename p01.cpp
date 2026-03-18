#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Kérek egy valós számot:" << endl;
    cin >> n;

    if(n<0){
        cout << "A szám negatív.";
    }

    if(n==0){
        cout << "A szám nulla.";
    }

    if(n>0){
        cout << "A szám pozitív.";
    }

    return 0;
}
