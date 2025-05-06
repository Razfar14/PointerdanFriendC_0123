#include <iostream>
using namespace std;

class Mahasiswa{
    public:
    int nim;
    void showNIm(){
        cout <<"No induk ="<< nim <<endl;
    }
};

int main(){
    Mahasiswa mhs{1};
    mhs.showNIm();

    Mahasiswa &refMhs = mhs;
    refMhs.nim = 2;
    mhs.showNIm();

    Mahasiswa *pMhs = &mhs;
    pMhs ->nim = 3;
    pMhs -> showNIm();
    return 0;
}