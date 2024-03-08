#include <iostream>
using namespace std;

int a[20]; // Deklarasi array a dengan  ukuran 20
int n;     // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array 

void input() {
    while (true) { // Looping
        cout << "Masukan banyaknya elemen pada array : "; // Output ke layar
        cin >> n;  // input dari paengguna
        if (n <= 20) // jika n kurang dari atau sama dengan 20
            break; // Keluar dari loop
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n"; // Output ke layar  

        }
    }
    cout << endl; //Output baris kosog
    cout << "=====================" << endl; // Output ke layar 
    cout << "Masukan elemen Array" << endl; // Output ke layar
    cout << "=====================" << endl; // Output ke layar 

    for (int j = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n-1
        cout << "data ke-" << (i + 1) << ": "; // Output ke layar
        cin >> a[i]; // Input dari pengguna 
    }
}
