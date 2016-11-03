#include <iostream>
using namespace std;

int main(){
    double a,b,c;
    cout << "============================================" << endl;
    cout << "===       Vergleich dreier Zahlen        ===" << endl;
    cout << "============================================" << endl;
    cout << "Bitte hier 3 Zahlen zum Vergleich eingeben" << endl;
    cout << "Zahl a = ";
    cin >> a; 
    cout << "Zahl b = ";
    cin >> b;
    cout << "Zahl c = ";
    cin >> c;
    //cout << a << b << c <<endl;
    cout << "von gross nach klein" << endl;
    if(a >= b){
        if(b >= c){
            //abc
            cout << a << ", " << b << ", " << c << endl;
        }
        else if(c >= a){
            //cab
            cout << c << ", " << a << ", " << b << endl;
        }
        else{
            //acb
            cout << a << ", " << c << ", " << b << endl;
        }
    }
    else{
        if(c <= a){
            //bac
            cout << b << ", " << a << ", " << c << endl;
        }
        else if(c >= b){
            //cba
            cout << c << ", " << b << ", " << a << endl;
        }
        else{
            //bca
            cout << b << ", " << c << ", " << a << endl;
        }
        
    }

}
