#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
   /* int i;
    for(i = 10 ; i < 100 ; i = i + 2 )
        if(i % 3 != 0)
            cout << i << ", ";
    cout << endl;
   */

   int i;
   for(i = 101; i < 1000; i=i+2){
        if(i%7!=0)
{
            cout << i << ", ";
            int db=0;
            db++;
}
}
    cout << db << endl;
    return 0;
}
