#include <iostream>
using namespace std;

class pelajar;
class manusia{
    public:
    void showNilaiPelajara(pelajar &x);
};

class pelajar{
    private:
    int nilai;

    public:
    pelajar(){nilai = 100;}
    friend void manusia ::showNilaiPelajara(pelajar &x);
};

void manusia ::showNilaiPelajara(pelajar &x){
    cout << x.nilai;
}


int main(){
    manusia budi;
    pelajar pbudi;
    budi.showNilaiPelajara(pbudi);
    return 0;
}