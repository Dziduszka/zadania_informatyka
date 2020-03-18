#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//zad 1:
int wynik(int i)
{
    if (i < 3)
        return 1;
    else
    {
        if (i % 2 == 0)
            return wynik(i - 3) + wynik(i - 1) + 1;
        else
            return wynik(i - 1) % 7;
    }
}

//zad 2:
int F(int x, int n)
{
    //cout << "wywolanie F(" << x << ", " << n << ")\n"; - do uzupelnienia tabeli
    if (n == 1)
        return x;
    else
    {
        if (n % 3 == 0)
        {
            int k = F(x, n / 3);
            //cout << k*k*k << endl; - do uzupelnienia tabeli
            return k * k * k;
        }
        else
        {
            //cout << x * F(x, n - 1) << endl; - do uzupelnienia tabeli
            return x * F(x, n - 1);
        }
    }
}

//zad 3:
void binarny(float x, int k)
{
    cout << "0,";
    float y = x;
    for (int i = 1; i <= k; i++)
    {
        if (y >= 0.5f)
            cout << 1;
        else
        {
            cout << 0;
        }
        y *= 2;
        if (y >= 1)
            y -= 1;
    }
}

//zad 4:
void zad4(int n, int A[])
{
    int x, p, k, i;
    for (int j = n - 1; j >= 1; j--)
    {
        x = A[j];
        p = j;
        k = n + 1;
        while (k - p > 1)
        {
            i = (p + k) / 2;
            if (x <= A[i])
                k = i;
            else
                p = i;
        }
        for (int i = j; i <= p - 1; i++)
            A[i] = A[i + 1];
        A[p] = x;
    }
}

//zad 5:
void zad5(int N)
{
    int d = 2;
    while (N >= d)
    {
        if (N % d == 0)
        {
            cout << d;
            N /= d;
        }
        else
            d += 1;
    }
}

//zad 6:
string zad6(int n)
{
    int i = 2;
    while (true)
    {
        if (i >= n)
            return "TAK";
        if (n % i == 0)
            return "NIE";
        i += 1;
    }
}

int main()
{
    srand(time(NULL));

    float a, b;

    cout << "ZAD 1:\nPodaj liczbe dla zadania 1: ";
    cin >> a;
    cout << "Wynikiem zadania 1 dla liczby " << a << " jest: " << wynik(a);
    //----------------------------------------------------------------------------------------------------
    cout << "\nZAD 2:\nPodaj wartosc x dla zadania 2: ";
    cin >> a;
    cout << "Podaj wartosc n dla zadania 2: ";
    cin >> b;
    cout << "Wynikiem zadania 2 dla liczb " << a << " oraz " << b << " jest: " << F(a, b);
    //----------------------------------------------------------------------------------------------------
    cout << "\nZAD 3:\nPodaj wartosc x dla zadania 3: ";
    cin >> a;
    cout << "Podaj wartosc k dla zadania 3: ";
    cin >> b;
    cout << "Wynikiem zadania 3 dla liczb " << a << " oraz " << b << " jest: ";
    binarny(a, b);
    //----------------------------------------------------------------------------------------------------
    cout << "\nZAD 4:\nProgram wylosowal 10 losowych liczb z zakresu 0-100: ";
    int tab[11];
    tab[0] = 0;
    for (int i = 1; i <= 10; i++)
    {
        tab[i] = (rand() % 101) + 0;
        cout << tab[i] << " ";
    }
    zad4(10, tab);
    cout << "\n Wynikiem zadania 4 dla tych liczb bedzie: ";
    for (int i = 1; i <= 10; i++)
        cout << tab[i] << " ";
    //----------------------------------------------------------------------------------------------------
    a = (rand() % 1000) + 1;
    cout << "\nZAD5:\nProgram wylosowal nastepujaca liczbe z zakresu 1-1000: " << a;
    cout << "\n Wynikiem zadania 5 dla tej liczby bedzie: ";
    zad5(a);
    //----------------------------------------------------------------------------------------------------
    a = (rand() % 100) + 1;
    a=49;
    cout << "\nZAD6:\nProgram wylosowal nastepujaca liczbe z zakresu 1-100: " << a;
    cout << "\n Wynikiem zadania 6 dla tej liczby bedzie: " << zad6(a);

}