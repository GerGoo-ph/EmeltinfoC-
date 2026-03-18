#include <iostream>

using namespace std;

int main()
{   setlocale(LC_ALL,"");
    int number, elozo=1, azelotti=1, kovetkezo=1;
    do{
    cout << "Írj be egy számot"<<endl;
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
        azelotti=elozo;
        elozo=kovetkezo;
        }
    cout << endl;
        return 0;
}
