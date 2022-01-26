//
//  main.cpp
//  RunLengthEncode
//
//  Created by Albie O'Rawe on 1/26/22.
//

#include <iostream>
using namespace std;

void printRLC(string inputString)
{
    int count = 0;
    string newString = "";
    int n =
    for (int i = 0; i<inputString.length()-1; i++){
        char currentChar = inputString.charAt(i);
        char nextChar = inputString.charAt(i+1);
        
        int count =1;
        while (i < n-1 && inputString.charAt(i) == inputString.charAt(i+1)){
            count++;
            i++;
            
        }
    }
    if (currentChar== nextChar){
    count++;
    else if (currentChar != nextChar && count+1>4){
    newString += "/";
    newString += "0";
    newString += String.valueOf(count + 1);
    count = 0;
    newString += currentChar;
    
}
        cout << inputString.charAt(i) << count;

int main(int argc, const char * argv[]) {
}
    return 0;
    };
    
}
