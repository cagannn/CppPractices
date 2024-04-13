#include<iostream>
#include<string.h>
#include <time.h>

int main(){
int low=33, high=126,lenght,random_number;
std::string password="";
std::cout<<"Enter lenght of password which you want to create: ";
std::cin>>lenght;

srand(time(0));

for(int i=0;i<lenght;i++){
random_number=rand()%(high-low+1)+low;
password=password+(char)random_number;
 }

std::cout<<"Your password is: "<<password;
return 0;

}
