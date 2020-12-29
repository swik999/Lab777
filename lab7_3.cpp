#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	
	int age = 0 ;
	int property = 0 ;
	int height = 0 ;
	cout << "Enter your age: ";
	cin >> age ;
	
	if(age > 20){
		if(age >= 30){
			cout << "Your status = UNFRIEND" ;
		}else{
			cout << "Enter your property: " ;
			cin >> property ;
			if(property > 10000000){
				cout << "Your status = BEST FRIEND";
			}else{
				cout << "Your status = UNFRIEND";
			}
		}
	}else{
		cout << "Enter your height: ";
		cin >> height ;
		if(height < 160){
			cout << "Your status = UNFRIEND";
		}else if (height >= 160 && height < 175){
			cout << "Your status = FRIEND";
		}else{
			cout << "Enter your property: " ;
			cin >> property ;
			if( property <= 69000000 ){
				cout << "Your status = ONE-NIGHT-STAND" ;
			}else{
				cout << "Your status = MARRIED" ;
			}
		}
	}

}