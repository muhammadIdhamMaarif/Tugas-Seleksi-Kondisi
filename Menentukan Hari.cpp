#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    switch (n) {
        case 1:
            cout << "Senin"; 
            break;
        case 2:
            cout << "Selasa";
            break;
        case 3:
            cout << "Rabu";
            break;
        case 4:
            cout << "Kamis";
            break;
        case 5:
            cout << "Jumat";
            break;
        case 6:
            cout << "Sabtu";
            break;
        case 7:
            cout << "Minggu";
            break;
        default:
            cout << "Nomor hari tidak valid";
    }
    return 0;
}
