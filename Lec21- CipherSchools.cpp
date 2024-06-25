// Pointer is same as normal variable which stores address of values, instead of values...
// Pointer also data type storage (type storage) . ex. int , float..
// int pointers are those which contains address of only integer values......
// float pointers are those which contains address of only float values..




#include<iostream>
using namespace std;
int main(){
	int a;
	float b;
	a=2;
	b=6.8;
	int *p;  // initialising integer pointer p
	float *q; // initialising  float pointer q
	p= &a;   // storing address of variable a
	q= &b; 	 //storing address of variable b
	cout<<"Address of a:"<<&a<<" and value of corresponding address: "<<*p<<endl;
	cout<<"Address of b:"<<&b<<" and value of corresponding address: "<<*q<<endl;
	
	
	// &(variable name) is used to print the address of variable..
	// *(pointer name) is used to print the value of variable who address is stored inside the pointer...
	return 0;
}







#include<iostream>
using namespace std;
int main(){
	int a=10;  // Normal method to give values inside variable..
	int *p;
	p= &a;
	*p=100;   // Assigning values using pointer method..
	cout<<"Address of a: "<<p<<" Value = "<<* p<< endl;
	return 0;
	
	// getting value using pointer (* (pointer name)) is known as de referencing....
	
}




