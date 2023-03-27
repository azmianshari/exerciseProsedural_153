#include <iostream>
using namespace std;

double rerata(double a, double b)
{
	return (a + b) / 2;
}
string status(double d)
{
	if (d >= 70)
		return "Lulus";
	else
		return "Gagal";
}
string status2(double r, double n)
{
	if (r >= 70 && n >= 80)
		return "Lulus";
	else
		return "Gagal";
}

int main()
{
	double  nilM, nilB;
	cout << "Masukan Nilai Matematika : ";
	cin >> nilM;
	cout << "Masukan Nilai Bahasa Inggris : ";
	cin >> nilB;

	cout << "Status Kelulusannya " << status(rerata(nilM, nilB)) << endl;
	cout << "Status Kelulusannya " << status2(rerata(nilM, nilB), nilM);
	
}


