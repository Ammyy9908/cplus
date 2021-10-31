//
//  UserInput.cpp
//  DSA
//
//  Created by Sumit kumar on 31/10/21.
//

#include <iostream>

using namespace std;

int main(){
    
    int age;
    cout << "Enter your age: " << endl;
    
    cin >> age;
    
    cout << "Your age => " << age << endl;
    
    string name;
    
    cout << "Enter your name " << endl;
    
    getline(cin,name);
    
    cout << "Hello " << name << endl;
    return 0;
}
