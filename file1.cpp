#include <iostream>
using namespace std;

int main(){
    //Pemcacah Naik
    int i;
    for (i = 0; i < 5; i++){
        cout << "Nilai i = "<< i << " Lari Keliling Lapangan" << endl;
    }
    cout << "Nilai i Terakhir = " << i << endl;

    //Pencacah Turun
    for (i = 5; i > 0; i--){
        cout << "Nilai i = "<< i << " Lari Keliling Lapangan" << endl;  
    }
    cout << "Nilai i Terakhir = " << i << endl;
}