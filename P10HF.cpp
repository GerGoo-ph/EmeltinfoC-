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
    for(i=1;i<=egesz;i++){
        if(egesz%i==0){
            darab++;
        }
    }
    if(darab==2){
        cout << "A(z) " << egesz << " prím.";
        }
    else{
    cout << "A(z) " << egesz <<" nem prím." <<endl;
    }
    return 0;
}
