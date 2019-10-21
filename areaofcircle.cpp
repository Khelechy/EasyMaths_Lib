#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
    //getting input from user
        //@author khelechy
            //@editor IzyPro
	
cout << "Enter value for radius: ";

double radius;
cin >> radius;
double pi = 3.142;
double result = pi * (radius * radius);
cout << "The area of the circle is " << result;
	return 0;
}