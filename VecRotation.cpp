/* Rotate 3 vectors counter-clockwise 90 degrees */
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

void getV(vector<double> &vec, int i);
inline void rotate(vector<double> &vec);

int main() {

    vector<double> v1, v2, v3;

	//Get the vectors
    getV(v1, 1);
	getV(v2, 2);
	getV(v3, 3);

	//Rotate the vectors
	rotate(v1);
	rotate(v2);
	rotate(v3);

	//Print the rotated vectors
	cout << endl;
	printf("90 deg rotation of V1: {%.1f, %.1f}\n", v1[0], v1[1]);
	printf("90 deg rotation of V2: {%.1f, %.1f}\n", v2[0], v2[1]);
	printf("90 deg rotation of V3: {%.1f, %.1f}\n", v3[0], v3[1]);
	cout << endl;

    return 0;
}

void getV(vector<double> &vec, int i) {
	double temp;
	cout << "Enter vector " << i << " (separate entries w/ a space): ";

	//Get both entries
	cin >> temp;
	vec.push_back(temp);

	cin >> temp;
	vec.push_back(temp);
}

inline void rotate(vector<double> &vec) {
	double temp = vec[0];
	vec[0] = vec[1];
	vec[1] = -1 * temp;
}
