#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL,"");
    float pozitivszam1, pozitivszam2;
    cout << "Kérek két pozitív valós számot külön sorba beírva:" << endl;
    do{
        cin >> pozitivszam1;
    } while(pozitivszam1<=0);
    cout << "Kérem az 1-nél nagyobb számot" << endl;
    do{
        cin >> pozitivszam2;
    } while(pozitivszam1 >= pozitivszam2 || pozitivszam2<=0 );
    cout << pozitivszam1 << " és " << pozitivszam2 << " átlaga " << (pozitivszam1 + pozitivszam2) /2 << endl;

    float atlag = (pozitivszam1 + pozitivszam2) /2, kulombseg = (atlag-pozitivszam1)/4, koztes = atlag;
    while((koztes < pozitivszam2) && (koztes > pozitivszam1)){
        cout << koztes << endl;
        koztes=koztes+kulombseg;
    }
    cout << "Alma" << endl;
    return 0;
}
