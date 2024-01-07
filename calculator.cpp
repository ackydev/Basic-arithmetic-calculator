#include <iostream>

using namespace std;

int main(){
	int num1,num2,options;
	cout << "First Number - ";
	cin >> num1;
	cout << "Second Number - ";
	cin >> num2;
	cout << "\nBasic Arithmetic Calculator\n" << "by Acky\n\n";
	cout << "1. Addition\n" << "2. Subtraction\n" << "3. Multiplication\n" << "4. Division\n";
	cout << "Select : ";
	cin >> options;
	if(options == 1)
	{
		cout << "Result Addition -> " << num1+num2 << "\n";
	}
	else if(options == 2)
	{
		cout << "Result Subtraction -> " << num1-num2 << "\n";
	}
	else if(options == 3)
	{
		cout << "Result Multiplication -> " << num1*num2 << "\n";
	}
	else if(options == 4)
	{
		cout << "Result Division -> " << num1/num2 << "\n";
	}
}