#include<iostream> 
#include<conio2.h> 
using namespace std; 
void delay(int num){ 
    for(int counter=1;counter<=num*100000000;counter++) 
    { 
 
    } 
} 

int main(void) 
{ 
    getch(); 
    cout<<"Testing void function delay()\n"; 
    delay(1); 
    cout<<"This line is printed after delay value 1\n"; 
    delay(2); 
    cout<<"This line is printed after delay value 2\n"; 
    delay(5); 
    cout<<"This line is printed after delay value 5\n"; 
    return 0; 
} 
 
