#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    int perulanganWhile = 0;
    int perulanganFor = 0;


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
}