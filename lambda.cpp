#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ilosc liczb: ";
    cin >> n;
    cout << "podaj " << n << " liczb/y: " << endl;
    int* tablica = new int[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> *(tablica + i);
    }

    int c = 0;

    auto lambda=[](int tab[], int m) 
    { 
        for (int i = 0; i <= m; i++)
        {
            for (int j = 1; j <= m - 1; j++)
            {
                if (*(tab + j - 1) - *(tab + j) > 5)
                {
                    swap(*(tab + j - 1), *(tab + j));
                    //for (int i = 0; i <= m - 1; i++)
                    //{
                    //    cout << "nr: " << i<<endl;
                    //    cout << *(tab + i) << " ";
                    //    cout << endl;
                    //}
                }
            }
        }
        for (int i = 0; i <= m - 1; i++)
        {
            cout << *(tab + i) << " ";
        }
    };

    lambda(tablica, n);

    delete[] tablica;
}