#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int egesz, i, darab=0;
    do{
        cout << "Adj meg egypozitív egész számot" << endl;
        cin >> egesz;
    }while(egesz<=0);
    cout << egesz << " osztói: ";
    for(i=1;i<=egesz;i++){
        if(egesz%i==0){
            cout << i << ", ";
            darab++;
        }
    }
    cout << "\nÖsszesen " << darab <<" darab osztó." <<endl;
    return 0;
}
