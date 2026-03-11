#include <iostream>
#include <ctime>
#include <cstdalign>
using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    srand(time( NULL));
    int ketjegyu;
    int kicsi=1000;
    for(int i = 1; i<=10; i++){
        ketjegyu = rand()%90+10;
        cout << ketjegyu << " ";
        if(ketjegyu>kicsi){
            kicsi=ketjegyu;
        }
    }
        cout << endl << "kicsi:" << kicsi << endl;
    return 0;
}
