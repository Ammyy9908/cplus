//
//  Strings.cpp
//  DSA
//
//  Created by Sumit kumar on 31/10/21.
//

#include <iostream>
using namespace std;

 int main(){
    string message = "Hello";
    cout << message << endl;
     // string methods
     
     cout << message.length() << endl;
     
     // access char
     
     cout << message[0] << endl;
     
     // modify a char in a string
     
     message[0] = 'b';
     
     cout << message << endl;
     
     // find
     
     cout << message.find("b") << endl;
     
     // substring
     
     cout << message.substr(0,3) << endl;
     return 0;
}
