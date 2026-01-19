#include <iostream>

using namespace std;

int main()
{
    cout << "Add meg a két kiindulopont közti távolságot km-ben" << endl;
    double ossztav;
    cin >> ossztav;
    cout << "Add meg az első test sebességét km/h-ban" << endl;
    double sebesseg1;
    cin >> sebesseg1;
    cout << "Add meg a második test sebességét km/h-ban" << endl;
    double sebesseg2;
    cin >> sebesseg2;
    cout << "Egymással szemben, vagy azonos irányban haladnak?(SZ/A)" << endl;
    char haladasiirany;
    cin >> haladasiirany;
    if(haladasiirany == 'S'){
        cout <<  ossztav <<" Km "<< sebesseg1 <<" Km/h "<< sebesseg2 <<" Km/h "<<haladasiirany << endl;
        cout << "Indulástól számított idő:" << endl;
        cout << ossztav/(sebesseg1+sebesseg2) <<"h" <<endl;
        }
    else if(haladasiirany == 'A')
        if(sebesseg1 > sebesseg2){
            cout <<  ossztav <<" Km "<< sebesseg1 <<" Km/h "<< sebesseg2 <<" Km/h "<<haladasiirany << endl;
            cout << "Indulástól számított idő:" << endl;
            cout << ossztav/(sebesseg1-sebesseg2) <<"h" <<endl;
        }
        else if(sebesseg1 < sebesseg2){
            cout <<  ossztav <<" Km "<< sebesseg1 <<" Km/h "<< sebesseg2 <<" Km/h "<<haladasiirany << endl;
            cout << "Indulástól számított idő:" << endl;
            cout << ossztav/(sebesseg2-sebesseg1) <<"h" <<endl;
        }
        else if(sebesseg1==sebesseg2){
            cout << "Soha nem érik utol egymást.";
        }
        else{
        cout <<  ossztav <<" Km "<< sebesseg1 <<" Km/h "<< sebesseg2 <<" Km/h "<<haladasiirany << endl;
        cout << "Hiba a rendszerben.";
        }
    return 0;
}
