#include <iostream>
using namespace std;

class mahasiswa{
    private:
    string nama;
    
    public:
     friend void setName(mahasiswa &a, string);    
};

void setName (mahasiswa &a,string b){
    a.nama = b;
    cout << a.nama;
}

int main(){
    mahasiswa joko;
    setName(joko,"Kairi Kumar");
    return 0;
}