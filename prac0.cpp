#include<iostream>
int main(){

	int a,sayac=1,yedeksay,b,c=1;
	std::cin>>a;
	for(int i=0;i<a;i++){
		sayac++;
		std::cout<<sayac<<" ";
		b=sayac;
		for(int j=0;j<4;j++){
			yedeksay=b+c;
			b=b+c;
			std::cout<<yedeksay<<" ";
		}
		c++;
		std::cout<<"\n";
	}
	return 0;
}
