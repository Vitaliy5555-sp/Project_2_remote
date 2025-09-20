#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;
    double y;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    double z1;
    double z2;
    double cosx = cos(x);
    double siny = sin(y);
    double sin2x = sin(2 * x);

    z1 = (cosx * cosx * cosx * cosx) + (siny * siny) + 1.0 / 4 * (sin2x * sin2x) - 1;
    z2 = sin(y + x) * sin(y - x);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = 3 = " << z2 << endl;
    return 0;
  
    cout << "z1 = σσσ = " << z1 << endl;

}