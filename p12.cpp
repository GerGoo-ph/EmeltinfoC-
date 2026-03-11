#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int a;
    int b;
    cout << "A program kiszámítja két pozitív egész szám legnagyobb közös osztóját." << endl;
    do{
        cout << "Kérem az elsõ pozitív egész számot:" << endl;
        cin >> a;
    }
    while(a<=0);
    do{
        cout << "Kérem az második pozitív egész számot:" << endl;
        cin >> b;
    }
    while(b<=0);
    cout << a << " és " << b << " legnagyobb közös osztója = ";
/*
    while(a*b!=0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    cout << a+b << endl;*/

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    cout << a;
    return 0;
}
