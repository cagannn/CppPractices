#include<iostream>
#include<locale.h>

int main() {
setlocale(LC_ALL, "Turkish");
int a,bas,kal,deger=1,yedek;

std::cout<<"Bir sayı girin: ";
std::cin>>a;
yedek=a;
std::cout<<"Kaç basamak ayırmak istiyorsunuz";
std::cin>>bas;
for(int i=0; i<bas;  i++){
	kal=a%10;
	a=a/10;
	if(i==0){
		std::cout<<"1'ler/lar basamağı="<<kal<<"\n";
	}

	else{

	std::cout<<deger<<"'ler/lar basamağı="<<kal<<"\n";
	}

	deger=deger*10;
	if(deger>yedek){
		break;
	}


	}
	return 0;

}
