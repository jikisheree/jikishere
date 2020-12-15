#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x1){
	double rad = x1*M_PI/180;
	return rad;
}

double rad2deg(double x2){
	double deg = x2*180/M_PI;
	return deg;
}

double findXComponent(double l1, double l2, double a1, double a2){
	double xcomp = (l1*cos(a1))+(l2*cos(a2));
	return xcomp;
}

double findYComponent(double l1, double l2, double a1, double a2){
	double ycomp = (l1*sin(a1))+(l2*sin(a2));
	return ycomp;
}

double pythagoras(double c1, double c2){
	double pytha = sqrt(pow(c1,2)+pow(c2,2));
	return pytha;
}

void showResult(double x, double y){
	cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% ";
	cout << "\nLength of the resultant vector = " << x;
	cout << "\nDirection of the resultant vector (deg) = " << y;
	cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% ";
}
	


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}