#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(0));
	int daysUntilExpiration = rand() % 12;
	
	switch(daysUntilExpiration){
		case 0:
			cout << "Your subscription has expired!" << endl;
			break;
		case 1:
			cout << "Your Subscription expires within a day. Consider renewing to save 20%." << endl;
			break;
		case 2:
		case 3:
		case 4:
			cout << "Your Subscription expires in " << daysUntilExpiration << " days. Please renew!" << endl;
			break;
		case 5:
			cout << "Your Subscription expires in 5 days. Consider renewing to save 10%." << endl;
			break;
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
			cout << "Your Subscription expires soon!" << endl;
			break;
		default:
			cout << "You have an active Subscription" << endl;
    }

	return 0;
}