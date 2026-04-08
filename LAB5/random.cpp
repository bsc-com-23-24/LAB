#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(0));
	int daysUntilExpiration = rand() % 12;

	if(daysUntilExpiration == 0){
		cout << "Your Subscription has expired!" << endl;
	}
	else if(daysUntilExpiration == 1){
		cout << "Your Subscription expires within a day. Renew now to save 20%" << endl;
	}
	else if(daysUntilExpiration > 1 && daysUntilExpiration < 5){
		cout << "Your Subscription expires in " << daysUntilExpiration << " days. Please renew your subscription" << endl;
	}
	else if(daysUntilExpiration == 5){
		cout << "Your subscription expires in 5 days. Consider renewing to save 10%" << endl;
	}
	else if(daysUntilExpiration > 5 && daysUntilExpiration <= 10){
		cout << "Your subscription expires sooon!" << endl;
	}
	else{
		cout << "You have an active Subscription" << endl;
	} 


	return 0;
}