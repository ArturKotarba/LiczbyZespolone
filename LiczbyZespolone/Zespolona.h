#ifndef KLASAZESPOLONA_H
#define KLASAZESPOLONA_H

using namespace std;

class Zespolona
{
	double x, y;
public: 
	Zespolona(double x = 0, double y = 0);
	~Zespolona();
	Zespolona& sprzezona();
	friend double modul(Zespolona& md);
	friend double argument(Zespolona& z);

	Zespolona& operator + (const Zespolona& kl);
	Zespolona& operator - (const Zespolona& kl);
	Zespolona& operator * (const Zespolona& kl);
	Zespolona& operator / (const Zespolona& kl);
	friend ostream& operator << (ostream& out, const Zespolona& Rz);
};


#endif // !KLASAZESPOLONA_H
