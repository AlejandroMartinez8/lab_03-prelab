#include <iostream>

using namespace std;

int main(){

string name;
char answer;
cout <<"Hello User!\n";
cout<<"Please enter your name: ";
getline(cin,name);

cout <<"Hello, " << name << "!";
    
cout <<"\nWould you like to do some math?\n Enter Y for Yes and N for No\n";
    cin>>answer;
    
    if(answer = 'Y'){
double result; 
cout << "\nwhat is 5 +10?\n";
cin>> result;
while(result!=15){
cout <<"\nWrong! Try again.\n";

cin>>result;


}


    }
    
    cout << "Correct the answer was 15!";
    
    
    
    
    return 0;
}