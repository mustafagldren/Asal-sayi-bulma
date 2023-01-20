// 1-

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");//Türkçe karakter 

    int i, j, sayac;

    for (i = 2; i <= 1000; i++) { 

        sayac = 1;

        for (j = 2; j < i; j++) { /* olay burada başlıyor.örneğin i = 4 j = 2 olsun. 20.satırdaki işlemi yapıyor.
4mod2=0 olduğu için sayac=0 oluyor ve işlem 12.satırdan tekrar başlıyor.bu sefer 16.satırda i=5 j=2 oluyor.
20.satırda 5mod2 eşit değil 0, j++(3) 5mod3 eşit değil 0, j++(4) 5 mod 4 eşit değil 0 olduğunda
25.satıra geliyor kod. Sayac==1 kabul ediyor ve en son ki i değerini yani i=5 ekrana yazdırıyor.*/
            if (i % j == 0) {

                sayac = 0;
            }
         }
        if (sayac == 1) { 
            cout << " " << i ; 
        }

    }

    
    system("pause");
    return 0;
}
