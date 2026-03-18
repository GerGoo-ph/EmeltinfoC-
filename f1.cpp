#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int n;
    double a0;
    double an;
    double lab;

    cout << "Egy 10%-al kamatozó pénzösszeg értékei a periódusok végén." << endl;

    do{
        cout << "Kérek egy fozitív számot (kamatláb): " ;
        cin >> lab;
    }while(lab<=0);

    do{
        cout << "Kérek egy pozitív egész számot (n): " ;
        cin >> n;
    }while(n<=0);

     do{
        cout << "Kérek egy valós számot (kezdõ tõke): " ;
        cin >> a0;
    }while(a0<=0);

    cout << endl;

    cout << "Az összeg a periódusok végén:" << endl;

    lab=lab/100.0;
    an=a0;

    for(int i=1;i<=n;i++){
    an = an*(1+lab);
    cout << an << ", ";
    }

    cout << endl;

    return 0;
}
