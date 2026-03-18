#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL,"");
    int number, elozo=1, azelotti=1, kovetkezo=1, paros=0;
    cout << "A program kiírja a Fibonacci sorozat első n db elemét." <<endl;
    do{
    cout << "Kérek egy 2-nél nagyobb egész számot:"<<endl;
    cin >> number;
    }
    while(number<=2);
    cout<<"A sorozat: ";
    for(int i=1;i<=number;i++){
        kovetkezo=elozo+azelotti;
        if(kovetkezo<=0){
                break;
            }
        cout << kovetkezo<<", ";
        if(kovetkezo%2==0){
            paros++;
        }
        azelotti=elozo;
        elozo=kovetkezo;
        }
    cout << endl << "A sorozatban " << paros<< " db páros szám van.";
        return 0;
}
