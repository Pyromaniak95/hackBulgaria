#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double fill_tetrahedron(int num){
	double volume;
	volume = (sqrt(2)*pow(num, 3)) / 12;
	return volume*0.001;
}
int main(){
	int n;
	cout << "Edge length of a regular tetrahedron in centimeters is: ";
	cin >> n;
	double v;
	v = fill_tetrahedron(n);
	cout << "The volume of the tetrahedron in litres is: " << fixed << setprecision(2) << v << endl;
	system("pause");
	return 0;
}
