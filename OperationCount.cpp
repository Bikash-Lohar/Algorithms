#include <iostream>
#include <string>
using namespace std;
int main () {
    int count = 0;
    string psuedoCode;
    cout << "Enter the Psuedo Code : ";
    getline(cin, psuedoCode);
    for (int i =0; i<psuedoCode.length(); i++){
        if (psuedoCode[i] == '+' || psuedoCode[i] == '-' || psuedoCode[i] == '*' || psuedoCode[i] == '/' || psuedoCode[i] == '%'){
            count++;
        }
    }
    cout << "Number of Operations : " << count << endl;
    return 0;
}