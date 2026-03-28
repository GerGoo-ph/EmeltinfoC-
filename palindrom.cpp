#include <iostream>
#include <string>

using namespace std;

int main (){

    cout << "Írd be a mondatot, amelyről meg akarsz biszonyosodni, hogy palindrom. " << endl << "Csak kis betűt használj ékezetek nélkül. (dupla betűket [pl.: ny; ty; sz...] nem szereti.)" << endl;

    string s ;
    string s2;
    int palindrom=0;

    getline (cin , s);
    s2=s;

    cout << s2 << endl;

    for (int i = 0; i < s2.length(); i++)
    {
        if (s2[i] == ' ')
        {
            s2.erase(s2.begin() + i);
            i--;
        }
    }
    cout << s2 << endl << endl;

    for (int i=0; i<s2.length(); ++i){
        cout << s2[i];
        cout << s2[s2.length()-i-1];
        if(s2[i]==s2[s2.length()-i-1]){
            cout << "X" << endl;
        }
        else{
            palindrom++;
            cout << endl;
        }
    }
    if(palindrom==0){
        cout << endl << "A(z) " << s << " szöveg"<< " palindrom";
    }
    else{
        cout << "NEM Palindrom";
    }
    return 0;
}
