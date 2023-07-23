#include <iostream>
using namespace std;
void reverseString(string &str, int i, int j){ // !!!!! dereference "&" operator is used
    // base case
    if(i> j)
        return ;
    
    // small work
    swap(str[i],str[j]);

    //Recursive call
    return reverseString(str, i+1, j-1);
}
   
int main (){

    string name = "Nikhil";
    
    reverseString( name, 0, name.length() -1);
    cout<< name ;
}

// important point //
//1. void type is used for reverseString();
//2. original string is reversed.SO , use '&' in argument;