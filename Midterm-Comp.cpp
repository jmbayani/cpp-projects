#include <iostream>
using namespace std;
float rad, height, base, length, width, area;
float areaCircle(float rad){
	cout << "Enter the radius"<< endl;
	cin >> rad;
	
	float pi = 3.1416;
	area = pi * rad * rad;
	
	cout <<"The are of circle is "<< area;
}
float areaTriangle(float height, float base){
	cout << "Enter the height"<< endl;
	cin >> height;
	
	cout << "\nEnter the base"<< endl;
	cin >> base;
	
	area = height * base / 2;
	
	cout <<"The area of triangle is "<< area;
}
float areaRectangle(float length, float width){
	cout << "Enter the length"<< endl;
	cin >> length;
	
	cout << "\nEnter the width"<< endl;
	cin >> width;
	
	area = length * width;
	
	cout <<"The area of rectangle is "<< area;
}
float areaSquare(float area){
	cout << "Enter the area"<< endl;
	cin >> area;
	
	area*=area;
	
	cout <<"The area of square is "<< area;
}
int main(){
	int choice;
	
	cout << "Press 1 for Area of Circle"<<endl;
	cout << "Press 2 for Area of Triangle"<<endl;
	cout << "Press 3 for Area of Rectangle"<<endl;
	cout << "Press 4 for Area of Square"<<endl;
	
	cin >> choice;
	if(choice==1){
		areaCircle(rad);
	}
	else if(choice==2){
		areaTriangle(height,base);
	}
	else if(choice==3){
		areaRectangle(length,width);
	}
	else if(choice==4){
		areaSquare(area);
	}
	else{
		cout << "Wrong Input!"<<endl;
	}
}
