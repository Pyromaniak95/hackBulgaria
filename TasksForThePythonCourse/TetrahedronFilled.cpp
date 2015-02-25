#include<iostream>
#include<cmath>
using namespace std;
double fill_tetrahedron(int num){
	double volume;
	volume = (sqrt(2)*pow(num, 3)) / 12;
	return volume*0.001;
}
int tetrahedron_filled(int tetrahedrons[], int water,int n){
	int maxcount=0;
	for (int i = 0; i < n; i++)
		if (fill_tetrahedron(tetrahedrons[i]) <= water){
			maxcount++;
			water = water - (int)fill_tetrahedron(tetrahedrons[i]);
		}
	return maxcount;
}
int main(){
	int tetrahedrons[20], n, water;
	cout << "Number of tetrahedrons: ";
	cin >> n;
	cout << "Water: ";
	cin >> water;
	for (int i = 0; i < n; i++){
		cout << "Edge length of a regular tetrahedron: ";
		cin >> tetrahedrons[i];
	}
	int maxcount = tetrahedron_filled(tetrahedrons, water, n);
	if (maxcount == 0) cout << "You can't fill any of the tetrahedrons with this amount of water!" << endl;
	else cout << "Maximum number of tetrahedrons that can be filled with water: " << maxcount << endl;
	system("pause");
	return 0;
}
