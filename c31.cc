 #include <iostream>
using namespace std;

int main() 
{
    int grade,value=50;

    cout<<" enter number ";
    cin>>grade;

    if (grade==value) {
        cout << "0 your input is " << value << endl; 
    } else if  (grade>value){
        cout << "your input is more than " << value << endl;
    } else {
        cout << "your input is less than " << value << endl;
    }
}
