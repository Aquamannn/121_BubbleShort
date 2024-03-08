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

    for (int i = 0; i < n; i++) { // Looping dengan i dimulai dari 0 hingga n-1
        cout << "data ke-" << (i + 1) << ": "; // Output ke layar
        cin >> a[i]; // Input dari pengguna 
    }
}

void bubbleShortArray() { // procedur untuk mengurutkan array dengan metode bubble short
    int pass = 1; // step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) { // step 2

            if (a[j] > a[j + 1]) {
                int temp;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        pass = pass + 1; // step 4
     
    } while (pass <= n - 1); //step 5

}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Elemen Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << a[j] << endl; // Output each array element on a new  line
    }
    cout << "Jumlah pass =" << n - 1 << endl; // corectly shows the total number of elements
}

int main() {

    input(); 
    bubbleShortArray();
    display();
    system("pause");

    return 0;
    
}