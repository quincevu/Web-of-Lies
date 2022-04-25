// Web of Lies 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a[200000] = { 0 };
    int n, m; std::cin >> n >> m;
    int dem = n;
    for (int i = 0; i < m; i++) {
        int f, g; std::cin >> f >> g;
        if (g < f) {
            a[g]++;
            if (a[g] == 1) {
                dem--;
            }
            continue;
        }
        if (f < g) {
            a[f]++;
            if (a[f] == 1) {
                dem--;
            }
            continue;
        }
    }
    int q; std::cin >> q;
    for (int i = 0; i < q; i++) {
        int x, y, z; std::cin >> x;
        if (x == 1) {
            std::cin >> y >> z;
            if (y < z) {
                a[y]++;
                if (a[y] == 1)
                    dem--;
            }
            if (y > z) {
                a[z]++;
                if (a[z] == 1)
                    dem--;
            }
        }
        if (x == 2) {
            std::cin >> y >> z;
            if (y < z) {
                a[y]--;
                if (a[y] == 0)
                    dem++;
            }
            if (y > z) {
                a[z]--;
                if (a[z] == 0)
                    dem++;
            }
        }
        if (x == 3) {
            std::cout << dem << '\n';
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
