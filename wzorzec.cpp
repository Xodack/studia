#include <string.h>
#include <iostream>

using namespace std;

#define d 101

void rabinkarp(char wzorzec[], char tekst[], int q) 
{
    int m = strlen(wzorzec);//ilosc znakow w wzorcu
    int n = strlen(tekst);//ilosc znakow w tekstcie
    int i, j;
    int w = 0;
    int t = 0;
    int h = 1;
    bool flag = false;

    for (i = 0; i < m - 1; i++)
        h = (h * d) % q;

    //obliczanie wartosci hasha dla wzorca i tekstu
    for (i = 0; i < m; i++) 
    {
        w = (d * w + wzorzec[i]) % q; //wartosc hasha dla wzorca
        t = (d * t + tekst[i]) % q; //wartosc hasha dla tekstu
    }
    //znalezienie wzorca w tekstcie
    for (i = 0; i <= n - m; i++) 
    {
        if (w == t) 
        {
            for (j = 0; j < m; j++) 
                if (tekst[i + j] != wzorzec[j])
                    break;

            if (j == m)
            {
                cout << "wzorzec znaleziony na pozycji nr: " << i + 1 << endl;
                flag = true;
            }
        }
         
        if (i < n - m) 
        {
            t = (d * (t - tekst[i] * h) + tekst[i + m]) % q;

            if (t < 0)
                t = (t + q);
        }
    }
    if (!flag)
        cout << "podany tekst nie posiada szukanego wzorca" << endl;
}

int main() 
{
    char tekst[100];
    char wzorzec[10];
    cout << "wpisz tekst: ";
    cin.get(tekst, 100);
    cout << endl << "podaj wzorzec: ";
    cin >> wzorzec;
    int q = 3;
    cout << endl;
    rabinkarp(wzorzec, tekst, q);
}
 