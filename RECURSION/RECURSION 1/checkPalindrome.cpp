#include <iostream>
using namespace std;
bool checkPalindrome(string str, int i, int j){
    //base case
    if(i>j)
    return true;

    if(str[i] != str[j])
    return false ;
    else{
        return checkPalindrome(str, i+1, j-1);
        
    }

}
   
int main(){
    string name = "malayalam";
    bool isPalindrome = checkPalindrome( name, 0,name.length()-1);

    if(isPalindrome){
        cout<< " Its a Palindrome" << endl;
    }else{
        cout << " Its not a Palindrome" << endl;
    }
}
// important point
// 1. bool is used to check it is Palindrome or not.
// 2. while passing argument in array, we pass arr ,size , start , end.
//     Here, also, string , start , end is passed.