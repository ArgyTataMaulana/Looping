#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int perulanganWhile = 0;
    int perulanganFor = 0;
    int perulanganDo = 0;


// Perulangan dengan for

cout << "perulangan for pencacah naik" << endl;
for (n = 0; n < 5; n++)
{
    cout << "Nilai n = " << n << "Selamat Datang" << endl;
}
cout << "Nilai n terakhir = " << n << endl;
cout << endl;

// Perulangan dengan for
for (n = 5; n > 0; n--)
{
    cout << "Nilai n = " << n << "Selamat Datang" << endl;
}

cout << "Nilai n Terakhir = " << n;
cout << endl;

cout << "Perulangan While" << endl;

srand(time(0));
 n = rand() % 10;

 cout << "Nilai awal n = " << n << endl;

 while (n < 7)
 {
    cout << "Nilai n = " << n << endl;
    n = rand() % 10;
    perulanganWhile++;
 }
 cout << "Jumlah Perulangan = " << perulanganWhile << endl;
 cout << " Nilai n Terakhir = " << n << endl;

 cout << "Perulangan do while" << endl;

 srand(time(0));

 n = rand() % 10;

 cout << "Nilai awal n = " << n << endl;

}