//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int fact(int);
int combine(int, int);

int main() {
    int rows = 10;
    for (int i = 0; i < rows; i++) {
        cout << setw((rows - i) * 2);
        for (int j = 0; j <= i; j++) {

            cout << combine(i, j);
            cout.width(4);
        }
        cout << '\n';
    }
    return 0;
}


int fact(int x) {
	int	fact = 1;
	for (int i = 1; i <= x; i++)
		fact *= i;
	return fact;
}


int combine(int x, int y) {
	int a = fact(x) / (fact(y) * fact(x - y));
	return a;
}