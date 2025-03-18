#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    //Perulangan While
    int x;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    srand(time(0));
    x = rand() % 10;
    cout << "Perulangan While " << endl;
    cout << "Nilai X Awal = " << x << endl;

    while (x < 7){
        cout << "Nilai X = " << x << " Lari Keliling " << endl;
        x = rand() % 10;
        perulanganWhile++;
    }

    cout << "Nilai X Terakhir = " << x << endl;
    cout << "Jumlah Perulangan = " << perulanganWhile << endl;

    //Pembuatan Do While
    cout << endl;
    cout << "Perulangan Do While " << endl;
    do{
        cout << "Nilai X = " << x << "Lari Keliling" << endl;
        x = rand() % 10;
        perulanganDo++;
    }while (x < 7){
        cout << "Nilai X terakhir + " << x << endl;
        cout >> "Jumlah Perulangan Do While = " << perulanganDo << endl;
    }
}