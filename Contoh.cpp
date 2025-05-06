#include <iostream>
using namespace std;

class PersegiPanjang{
    public: // akses modifief
        int Panjang, Lebar;
    
    public: 
    void input(){
        cout << "Masukkan panjang :";
        cin >> Panjang;
        cout << "Masukkan lebar :";
        cin >> Lebar;    
    }

    int LuasPersegi (int a, int b){
        return a*b;
    }
   
};

class Lingkaran{
    public:
    int Jarijari;
    
    void input(){
        cout << "Masukkan jari-jari :";
        cin >> Jarijari;
    }
    
    int LuasLingkaran (int a){
        return 3.14*a*a;
    }
};

int main(){
    PersegiPanjang objekPP; // membuat objek
    Lingkaran ol;

    cout << "Masukan panjang :";
    cin >> objekPP.Panjang;
    cout <<"Masukan lebar :";
    cin >> objekPP.Lebar;
    cout << "Luas persegi panjang :"<< objekPP.LuasPersegi(objekPP.Panjang,objekPP.Lebar)<< endl;
}