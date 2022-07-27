#include <stdio.h>

	int pilihan;
	int telur = 10, anakan, remaja, dewasa = 1, makan, tumbuh, anakanlapar, remajalapar;
	int a = 0, b = 1, c, i;
	char nama[30];
	
void bentuktelur(){
	if(telur == 0){
		printf("\n\nTotal telur: 0 \n\n");
	}
	else{
		printf("\n\nTotal telur:%d \n\n", telur);
		for(i=0;i<telur;i++){
			printf(" O");
		}
	}
	printf("\nTelur bertambah:%d\n", b);
}  
void bentukanakan(){
	if(anakan == 0){
		printf("\n\nTotal anak ayam :0 \n\n");
	}
	else{
		printf("\n\nTotal anak ayam :0 \n\n",anakan);
		for(i=0;i<anakan;i++){
			printf(" o>");
		}
		printf ("\n");
		for(i=0;i<anakan;i++){
			printf(" ()");
		}
	}
}
void bentukremaja(){
	if(remaja == 0){
		printf("\n\nTotal remaja ayam :0 \n\n");
	}
	else{
		printf("\n\nTotal remaja ayam :0 \n\n", remaja);
		for(i=0;i<remaja;i++){
			printf(" o>");
		}
		printf("\n");
		for(i=0;i<remaja;i++){
			printf(" \/\\");
		}
	}
}
void bentukdewasa(){
	if(dewasa == 0){
		printf("\n\nTotal dewasa ayam :0 \n\n");
	}
	else{
		printf("\n\nTotal dewasa ayam :0 \n\n", dewasa);
		for(i=0;i<dewasa;i++){
			printf(" o>");
		}
			printf("\n");
		for(i=0;i<dewasa;i++){
			printf(" ()");
		}
			printf("\n");
		for(i=0;i<dewasa;i++){
			printf(" \/\\");
		}		
	}
}
int main (){
	printf("SELAMAT DATANG DI Peternakan UYEE\n");
	printf("masukan nama anda:");
	scanf("%s", &nama);
	awal:
	printf("\n\nPROGRAM TERNAK AYAM CAK %s", nama);
	printf("\n1. Memberi makan semua ayam");
	printf("\n2. Berganti hari");
	printf("\n3. Lihat kondisi semua ayam");
	printf("\nmasukkan pilihan:");
	scanf("%d", &pilihan);
	switch (pilihan){
		case 1 :
			makan = 1;
			anakanlapar = 0;
			remajalapar = 0;
			printf("\n-----------------------");
			printf("\nsemua ayam sudah makan");
			printf("\n-----------------------");
			break;
		case 2 :
			printf("\n-----------------------");
			printf("\nsudah berganti hari");
			printf("\n-----------------------");
			if(makan == 0){
				remajalapar = remajalapar + 1;
				anakanlapar = anakanlapar + 1;
				if(remajalapar > 1 && remaja > 0){
					remaja = 0;
				}
				if(anakanlapar > 1 && anakan > 0){
					anakan = 0;
				}
			}
			else{
				if(remaja>0){
					tumbuh = tumbuh + 1;
		
					if(tumbuh = 2){
						dewasa = dewasa + remaja;
						remaja = 0;
						tumbuh = 0;
					}
				}
				if(anakan > 0){
					remaja = remaja + anakan;
					anakan = 0;
				}
			}
			makan=0;
			anakan = anakan + dewasa;
			telur = telur - dewasa;
	
			awalfib:
				c=a+b;
				if(c>dewasa){
					telur = telur + c;
					goto endfib;
				}
				a=b;
				b=c;
				goto awalfib;	
			endfib:
				printf(" ");
			break;	
		case 3 :
			printf("\n-----------------------");
			bentuktelur();
			bentukanakan();
			bentukremaja();
			bentukdewasa();
			printf("\n-----------------------");
			break;
		default :
			printf("\n-----------------------");
			printf("\nmasukkan dengan benar!");
			printf("\n-----------------------");
			break;
	}
	goto awal;
	
}


