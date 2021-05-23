#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float dollar = 0.00;
	float peso = 0.00; 
	
	cout <<"Input US Dollar: ";
	cin >>dollar;
	peso = dollar * 50.75;
	cout<<"Peso Equivalent: "<<peso;
	
	return 0;
}
