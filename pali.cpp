#include <iostream>

using namespace std;

int main(){

    setlocale(LC_ALL,"");
    int pali=0;
    string s;
    cin >> s;
    int n;
    n=s.length();
    char s1[n], s2[n];

    for(int i=0;i<n;i++){
        s1[i]=s[i];
        }

    for(int l=0;l<n;l++){
        s2[l]=s[s.length()-l-1];
        }

    for(int j=0;j<n;j++){
        cout << s2[j];
        }

    for(int k=0;k<n;k++){
        if(s1[k]!=s2[k]){
            pali++;
            }
        }
    if(pali==0) cout << "trews";

    return 0;
}
