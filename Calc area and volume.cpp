#include <iostream>
using namespace std;

int main (){
	//radius,height, area, volume;
	double radius;
	double height;
	float volume;
	double area, calculate;
	cout<<"Enter Radius "<<endl;
	cin>>radius;
	cout<<"Enter height "<<endl;
	cin>>height;
	cout<<"1.Volume"<<endl;
	cout<<"2. Area"<<endl;
	cin>>calculate;
	
	if (calculate==1) {
		Volume= 3.141592*radius*radius*height;
		cout<<Volume;
	} 
	else if(calculate==2) {
		area=  2*3.141592*radius*height+2*3.141592*radius*radius;
		cout<<"The area is "<<area;
	}
	 else {
		cout<<"Enter Number in the Menu";
	}
	
	
	return 0;
}

