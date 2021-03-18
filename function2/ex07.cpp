#include<iostream> 
using namespace std; 
  
void Count(string str) 
{ 
    int upper = 0, lower = 0; 
    for (int i = 0; i < str.length(); i++) 
    { 
        if (str[i] >= 'A' && str[i] <= 'Z') 
            upper++; 
        else if (str[i] >= 'a' && str[i] <= 'z') 
            lower++; 
        else if (str[i]>= '0' && str[i]<= '9')
        ; 
           
    } 
    cout << "upper case letters: " << upper << endl; 
    cout << "lower case letters : " << lower << endl; 
   
} 
  
// Driver function 
int main() 
{ 
    string str = "Todos los perros comen croquetas"; 
    Count(str); 
    return 0; 
} 
