#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

class Lab3 
{
	public:
float x, y;
int c;
string s;

double z(double x)
{
	setlocale(LC_ALL, "Russian");
	double y;
		if (x<=-7)
		{
			y = 0;
		}
		else if (x>-7 && x<=-3)
		{
			y = x+7;
		}
		else if (x>-3 && x<=-2)
		{
			y = 4;
		}
		else if (x>-2 && x<2)
		{
			y = x*x;
		}
		else if (x>=2 && x<4)
		{
			y = -x*2+8;
		}
		else if (x>=4)
		{
			y = 0;
		}
	return y;
}

    void vvod(double y)
    {
        ofstream prout("text.txt");
        x = -9;
        c = 0;
        for (x; x < 8; x++)
            {
            prout << c << " ";
            c++;
            y = z(x);
            prout << y << "\n";
            }
        prout.close();
    }
    void vivod (string s)
    {
        ifstream prin("text.txt");
        while (getline(prin, s))
        {
            cout << s;
            cout << "\n";
        };
        prin.close();
    }
};

int main()
{
	Lab3 test;
	
	string s;
	double y;
	double x;
   test.z(x);
   test.vvod(y);
	test.vivod(s);
    
}