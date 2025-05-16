#include<iostream> 
#include<iomanip> 
using namespace std; 
int factorial(int num){ 
    int ans=1; 
    if(num<0 || num>15){ 
        return 0;  
    } 
    if(num==0){ 
        return 1; 
    } 
    for(int counter=1; counter<=num; counter++){ 
        ans=ans*counter; 
    } 
    return ans; 
}
int main(){ 
    int number, fact; 
    cout<<"Enter a positive number:"; 
    cin>>number; 
    cout<<"\nFactorial of "<<number << " is "<< factorial(number); 
    return 0; 
} 
  
