#include <iostream>
using namespace std;

double triangle(double base, double height);
double rectangle(double width, double length);
double areasquare(double side);
double getvalidinput(const string& prompt);

double areasquare(double side){
   double area = side*side;
   return area;
}
double rectangle(double width, double length){
    double area = width*length;
    return area;
}
 
double triangle(double base, double height){
    double area = (base * height) / 2;
    return area;
}

double getvalidinput(const string& prompt){
    cout << prompt;
    while (true){
        int input;
        if (cin>>input)
        {
            if(input>0){
                return input;
            }
            else{
                cout << "Invalid input" << endl;
            }
        }
        else{
            cin.clear();
            cin.ignore(100000, '\n');
            cout << "Please enter an integer!" << endl;
        }
        
    }
    
    
}

int main(){
    cout << "Please select the area of the shape to calculate:" << endl;
    cout << "1.Square" << endl;
    cout << "2.Rectangle" << endl;
    cout << "3.Triangle" << endl;
    cout << "0.Quit program" << endl;
    int choice;

 while(true){
    cout << "Select Shape: ";
    if(cin >> choice){
        if(choice >0 && choice < 4){
            if (choice == 1){
                double side = getvalidinput("Enter the side of your Square: ");
                double area = areasquare(side);
                cout << "Area of square is: " << area << endl;
            
            }
            else if(choice == 2){
                double width = getvalidinput("Enter width: ");
                double lenght = getvalidinput("Enter length: ");
                double area = rectangle(width, lenght);
                cout << "Area of rectangle is: " << area << endl;
            
            }   
            else if(choice == 3){
                double base = getvalidinput("Enter the base: ");
                double height = getvalidinput("Enter the height: ");
                double area = triangle(base, height);
                cout << "Area of triangle is:" << area << endl;
            
            }   
            else if(choice == 0){
                cout << "Thank you for using calculator!";
                break;
            } 
        }
        else{
            cout << "Invalid input" << endl;
        }
    }
 }
 return 0;
    
}