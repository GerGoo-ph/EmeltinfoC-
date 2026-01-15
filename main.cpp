#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    int pozitivegesz;
    cout << "Kérek egy pozitív egész számot:" << endl;
    do{
    cin >> pozitivegesz;
    }while(pozitivegesz <= 0);
    if(pozitivegesz%2==0){
        pozitivegesz=pozitivegesz-1;
    }
    else{
        pozitivegesz==pozitivegesz;
    }
    int i=1;
    for(i;i<=pozitivegesz;i=i+2 ){
    cout << i << " négyzete " << i*i<< endl;
    }
    return 0;
}
