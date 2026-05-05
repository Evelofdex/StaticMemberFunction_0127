#include <iostream>
using namespace std;

class Mahasiswa{
    static int nim;
    int id;
    string nama;

    void setID();
    void printAll();
    //membuat constructor mahasiswa
    Mahasiswa(string pnama) :nama(pnama){
        setID();
    }
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID(){
    id = ++nim;
};


int main(){

}













