#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    string name;
    cout << "Mi a neved?" << endl;
    getline(cin,name);
    cout << "Lépcsõzetesen" << endl;
    for(int i=1;i<=7;i++){
            for(int j=1;j<=i-1;j++){
                cout << " ";
            }
        cout << name << endl;
    }

    return 0;
}
