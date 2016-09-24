//Print char int pairs using for loop.
#include "../std_lib_facilities.h"

int main() {
    char a = 'A';
    int c;
    for (int i = 0; i <= 25 ; ++i) {
        c = a;
        cout << a << "\t" << c << endl;
        ++a;
    }
    return 0;
}