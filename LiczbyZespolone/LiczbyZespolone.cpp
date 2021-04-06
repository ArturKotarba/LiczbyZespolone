#include <iostream>
#include <cmath>
#include <math.h>
#include <complex>
#include "Zespolona.h";
using namespace std;

double modul(Zespolona& md);
double argument(Zespolona& z);

int main()
{

    Zespolona q, z(0, 2), w(1, -4);
       cout << "q = " << q                     // 0
            << "z = " << z                    // 2i
            << "w = " << w << endl;          // 2-4i
       Zespolona x = z + w + 2 ;
      cout << "x = " << x << endl;    // 4-2i

      cout <<"sprzezona do z = " << z.sprzezona()     // -2i
        << "modul z = " << modul(z)               // 2
        << "\nargument z " << argument(z) << endl;   // 1.570796


    cout << "\nsprzezona do w = " << w.sprzezona()      // 1+4i
        << "modul w = " << modul(w)                // 4.1231056
        << "\nargument w = " << argument(w) << endl; // -1.32581766

    Zespolona y(-1, 2);
    cout << "x-y = " << x - y << endl;
    cout << "x*y = " << x * y << endl;
    cout << "x/y = " << x / y << endl;

    return 0;
}

double modul(Zespolona& md) {
   return sqrt(pow(md.x, 2) + pow(md.y, 2));

};

double argument(Zespolona& s) {
    complex<double> mycomplex(s.x, s.y);
    return arg(mycomplex);
}