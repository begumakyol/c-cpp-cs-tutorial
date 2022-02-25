#include <stdio.h>
//bilet alma programi
int main(){
	
	int biletSayi=100;
	char biletAl;
	
	for(;biletSayi>0;){
			printf("Bilet almak ister misiniz? [E/e]\n");
			scanf(" %c" ,&biletAl);
		
		if(biletAl=='e' || biletAl=='E'){
			int alinanBiletSayisi;
			printf("Kac tane bilet almak istersiniz?\n");
			scanf("%d" ,&alinanBiletSayisi);
				if(alinanBiletSayisi<=biletSayi){
					biletSayi-=alinanBiletSayisi;
				}
				else{
					printf("Lutfen alinabilecek toplam bilet sayisina gore bilet aliniz.\n");
				}
				printf("Alinabilecek toplam bilet sayisi: %d\n" ,biletSayi);
		}
		else{
			printf("Hosca kalin.\n");
			break;
		}
			
	}
		
		if(biletSayi==0){
			printf("Aldiginiz bilet sayisi: %d\n" , 100-biletSayi);
			printf("Biletler tukendi.");
		}
		else
			printf("Aldiginiz bilet sayisi: %d\nKalan bilet sayisi: %d\n",100-biletSayi, biletSayi);		
	
	return 0;
}
