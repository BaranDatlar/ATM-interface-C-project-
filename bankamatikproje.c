#include <stdio.h>
#include <conio.h>
#include <locale.h>
#define dolaralis 7.55 
#define dolarsatis 7.56
#define euroalis 9.10
#define eurosatis 9.11
#define sterlinalis 10.05
#define sterlinsatis 10.06
#define altinalis 440.1
#define altinsatis 440.2
#define gumusalis 6.05
#define gumussatis 6.06

float bakiye=3000;
float bakiye2=1200;
float dolaradet=0;
float euroadet=0;
float sterlinadet=0;
float altinadet=0;
float gumusadet=0;

int main() {
setlocale(LC_ALL,"Turkish");
    int islem,sifre,n,i;
    for(i=1;i<=3;i++) {
    	n++;
		printf("L�tfen parolan�z� giriniz.\n");
		scanf("%d",&sifre);
		if(sifre==1234) {
			printf("HO�GELD�N�Z\n");
			anamenu();
			return 0;
		}
		if(n==3){
			printf("Hesab�n�z bloke olmu�tur.");
			return 0;
		}
    }
    printf("��lemler : \n1-Para �ekme\n2-Para Yat�rma\n3-Hesaba Para Yat�rma(HAVALE/EFT)\n4-Bakiye Sorgulama\n5-Ticari ��lemler\n6-�deme ��lemleri\n7-Kart �ade \n\n");
    printf("L�tfen yapmak istedi�iniz i�lemi se�iniz : ");
    scanf("%d",&islem);
    switch(islem) {
    	case 1:
    		paracekme();
    		break;
		case 2:
			parayatirma();
			break;
		case 3:
		    havaleeft();
			break;	
		case 4:
		    bilgi();
			break;
		case 5:
		    ticari();
			break;
		case 6:
		    odeme();
			break;	
		case 7:
			printf("�yi G�nler Dileriz.");
			return 0;
		    break;		
    }
getch();
return 0;
}
int anamenu() {
	int islem; 
	printf("��lemler : \n1-Para �ekme\n2-Para Yat�rma\n3-Hesaba Para Yat�rma(HAVALE/EFT)\n4-Bakiye Sorgulama\n5-Ticari ��lemler\n6-�deme ��lemleri\n7-Kart �ade \n\n");
    printf("L�tfen yapmak istedi�iniz i�lemi se�iniz : ");
    scanf("%d",&islem);
    switch(islem){
    	case 1:
    		paracekme();	
            break;
        case 2:
            parayatirma();
			break;
		case 3:
		    havaleeft();
			break;	
		case 4:
		    bilgi();
			break;	
		case 5:
		    ticari();
			break;	
		case 6:
		    odeme();
			break;		
		case 7:
			printf("�yi G�nler Dileriz!");
		    return 0;
			break;	
	}
}
//PARA �EKME FONKS�YONU-PARA �EKME FONKS�YONU-PARA �EKME FONKS�YONU-PARA �EKME FONKS�YONU-PARA �EKME FONKS�YONU-PARA �EKME FONKS�YONU-PARA �EKME FONKS�YONU-PARA �EKME FONKS�YONU//
int paracekme() {
	int tutar,devam,paraislem;
	printf("Mevcut bakiyeniz : %.2f\n",bakiye);
    		printf("\n1- 20TL\n2- 50TL\n3- 100TL\n4- 200TL\n5- Di�er tutar\n\n");
    		scanf("%d",&paraislem);
    		switch(paraislem) {
    			case 1:
    				bakiye-=20;	
    				printf("�ekti�iniz tutar : 20 TL, Kalan bakiye : %.2f\n",bakiye);
    				printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		        scanf("%d",&devam);
			       if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}	
					
    			break;
    		   	case 2:	  	
    				bakiye-=50;	
    				printf("�ekti�iniz tutar : 50 TL, Kalan bakiye : %.2f\n",bakiye);
    				printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    				scanf("%d",&devam);
					if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    			break;
    			case 3:
    				bakiye-=100;	
    				printf("�ekti�iniz tutar : 100 TL, Kalan bakiye : %.2f\n",bakiye);
    				printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    				scanf("%d",&devam);
					if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    			break;
    			case 4:
    				bakiye-=200;	
    				printf("�ekti�iniz tutar : 200 TL, Kalan bakiye : %.2f\n",bakiye);
    				printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    				scanf("%d",&devam);
					if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
    			break;
    			case 5:
    				printf("�ekmek istedi�iniz tutar� giriniz : ");
    				scanf("%d",&tutar);
    				while(tutar>bakiye) {
    				printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    				scanf("%d",&tutar);
    				}
    				bakiye-=tutar;
    				printf("�ekti�iniz tutar : %d , Kalan bakiye : %.2f\n",tutar,bakiye);
    				printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    				scanf("%d",&devam);
					if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
				break;
			}
}
//PARA YATIRMA FONKS�YONU-PARA YATIRMA FONKS�YONU-PARA YATIRMA FONKS�YONU-PARA YATIRMA FONKS�YONU-PARA YATIRMA FONKS�YONU-PARA YATIRMA FONKS�YONU-PARA YATIRMA FONKS�YONU//
int parayatirma() {
	int tutar,devam,paraislem2; 
	printf("Mevcut bakiyeniz : %.2f\n",bakiye);
    printf("\n1- 20TL\n2- 50TL\n3- 100TL\n4- 200TL\n5- Di�er tutar\n\n");
    scanf("%d",&paraislem2);
    switch(paraislem2) {
    	case 1:
    		bakiye+=20;	
    		printf("Yat�rd���n�z tutar : 20 TL, Toplam bakiye : %.2f\n",bakiye);
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;	
    	case 2:	  	
    	    bakiye+=50;	
    		printf("Yat�rd���n�z tutar : 50 TL, Toplam bakiye : %.2f\n",bakiye);
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}	
					
    	break;
    	case 3:
    		bakiye+=100;	
    		printf("Yat�rd���n�z tutar : 100 TL, Toplam bakiye : %.2f\n",bakiye);
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}	
					
    	break;
    	case 4:
    		bakiye+=200;	
    		printf("Yat�rd���n�z tutar : 200 TL, Toplam bakiye : %.2f\n",bakiye);
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;
    	case 5:
    		printf("Yat�rmak istedi�iniz tutar� giriniz : ");
    		scanf("%d",&tutar);
    		bakiye+=tutar;
    		printf("Yat�rd���n�z tutar : %d , Toplam bakiye : %.2f\n",tutar,bakiye);
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
    	if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
			
		break;
	}
}
//HAVALE/EFT FONKS�YONU-HAVALE/EFT FONKS�YONU-HAVALE/EFT FONKS�YONU-HAVALE/EFT FONKS�YONU-HAVALE/EFT FONKS�YONU-HAVALE/EFT FONKS�YONU-HAVALE/EFT FONKS�YONU-HAVALE/EFT FONKS�YONU//
int havaleeft() {
    int paraaktarma,devam,tutar;
	int hesapno;
	long long int tc,telno;
	printf("TC Kimlik numaran�z� giriniz:\n");
    scanf("%lld",&tc);
    if(tc==12345678910){
	printf("Telefon numaran�z� giriniz:\n");
	scanf("%lld",&telno);
	if(telno==5333333333){
    printf("1-Kendi Hesab�ma Para Yat�rma\n2-Ba�ka Hesaba Para Yat�rma\n");
	scanf("%d",&paraaktarma);
    switch(paraaktarma) {
    	case 1: //HAVALE
    		havale();
    	break;
		case 2: //EFT
		    eft();
		break;	
	}
}
else {
	do {
	printf("Eksik yada hatal� tu�lad�n�z. L�tfen tekrar giriniz.\n");
	scanf("%lld",&telno);
	}
	while(telno!=5333333333);
	printf("1-Kendi Hesab�ma Para Yat�rma\n2-Ba�ka Hesaba Para Yat�rma\n");
	scanf("%d",&paraaktarma);
    switch(paraaktarma) {
    	case 1: //HAVALE
    		havale();
    	break;
		case 2: //EFT
		    eft();
		break;	
	}
}
}

else{
printf("Eksik yada hatal� tu�lad�n�z. L�tfen tekrar giriniz.\n");
havaleeft();
}
}
//HAVALE FONKS�YONU-HAVALE FONKS�YONU-HAVALE FONKS�YONU-HAVALE FONKS�YONU-HAVALE FONKS�YONU-HAVALE FONKS�YONU-HAVALE FONKS�YONU-HAVALE FONKS�YONU-HAVALE FONKS�YONU-HAVALE FONKS�YONU//
int havale() {
	int tutar,devam;
	printf("Bankam�zda 2 adet hesab�n�z bulundu!\n");
    printf("1-ANKARA/KIZILAY �UBES�\nBakiye: %.2f TL\n",bakiye);
    printf("2-ANKARA/G�LBA�I �UBES�\nBakiye: %.2f TL\n",bakiye2);
    printf("Yat�rmak istedi�iniz tutar� giriniz:\n");
    scanf("%d",&tutar);
    bakiye-=tutar;
    bakiye2+=tutar;
    printf("Yat�rd���n�z tutar : %d TL, ANKARA/KIZILAY �UBES� Bakiye: %.2f TL, ANKARA/G�LBA�I �UBES� Bakiye: %.2f TL\n ",tutar,bakiye,bakiye2);
    printf("Anamen�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    scanf("%d",&devam);
    if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
}

//EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU-EFT FONKS�YONU//
int eft() {
	int tutar,devam;
	long long int hesapno;
	printf("Hesap Numaras�n� giriniz:\n");
	scanf("%lld",&hesapno);
	if(hesapno==1234567891011120){
	printf("Yat�rmak istedi�iniz tutar� giriniz:\n");
    scanf("%d",&tutar);
	bakiye-=tutar+5.5;
	printf("Yat�rd���n�z tutar : %d TL, EFT �creti: 5.5 TL, Kalan Bakiye: %.2f TL\n",tutar,bakiye);
    printf("Anamen�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    scanf("%d",&devam);
    if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
}
else{
	printf("Eksik yada hatal� tu�lad�n�z. L�tfen tekrar giriniz.\n");
	eft();
}
}
//B�LG� FONKS�YONU-B�LG� FONKS�YONU-B�LG� FONKS�YONU-B�LG� FONKS�YONU-B�LG� FONKS�YONU-B�LG� FONKS�YONU-B�LG� FONKS�YONU-B�LG� FONKS�YONU-B�LG� FONKS�YONU-B�LG� FONKS�YONU-B�LG� FONKS�YONU//
int bilgi() {
	int devam;
	printf("Mevcut Bakiyeniz : %.2f TL \nMevcut Dolar�n�z: %.2f $ \nMevcut Euronuz: %.2f \nMevcut Sterlininiz: %.2f � \nMevcut Gram Alt�n Miktar�: %.2f Gram\nMevcut Gram G�m�� Miktar�: %.2f Gram\n",bakiye,dolaradet,euroadet,sterlinadet,altinadet,gumusadet);
	printf("Anamen�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
}
//T�CAR� FONKS�YONU-T�CAR� FONKS�YONU-T�CAR� FONKS�YONU-T�CAR� FONKS�YONU-T�CAR� FONKS�YONU-T�CAR� FONKS�YONU-T�CAR� FONKS�YONU-T�CAR� FONKS�YONU-T�CAR� FONKS�YONU-T�CAR� FONKS�YONU//
int ticari() {
	int paraislem5,doviz;
	printf("1-D�viz ��lemleri\n2-Alt�n ��lemleri\n3-G�m�� ��lemleri\n");
	scanf("%d",&paraislem5);
	switch(paraislem5) {
		case 1: //D�V�Z
			printf("1-Dolar 2-Euro 3-Sterlin\n");
			scanf("%d",&doviz);
			switch(doviz) {
				case 1: //DOLAR
				dolar();	
				break;
	            case 2: //EURO
			    euro();  
			    break;
	            case 3: //STERL�N
			    sterlin();   
			    break;
			}
		break;	
        case 2: //ALTIN
		altin();     
	    break;		        
        case 3: //G�M��
		gumus();    
	    break;
	}
}
//DOLAR FONKS�YONU-DOLAR FONKS�YONU-DOLAR FONKS�YONU-DOLAR FONKS�YONU-DOLAR FONKS�YONU-DOLAR FONKS�YONU-DOLAR FONKS�YONU-DOLAR FONKS�YONU-DOLAR FONKS�YONU-DOLAR FONKS�YONU-DOLAR FONKS�YONU//
int dolar() {
	int alsat,devam;
	float dolaral,dolaralistutari,dolarsat,dolarsatistutari;
	printf("1-ALI� 2-SATI�\n");
	scanf("%d",&alsat);
	switch(alsat) {
	    case 1: //DOLAR ALI�
	        printf("Almak istedi�iniz dolar miktar�n� giriniz:\n");
			scanf("%f",&dolaral);
			dolaralistutari=(dolaral*dolaralis);
			while(dolaralistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&dolaral) ;
    		dolaralistutari=(dolaral*dolaralis);
    		}
    		bakiye-=dolaralistutari;
    		printf("Ald���n�z dolar miktar�: %.2f $, Kalan Bakiye: %.2f TL\n",dolaral,bakiye);
    		dolaradet+=dolaral;
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;
	    case 2: //DOLAR SATI�
			printf("Satmak istedi�iniz dolar miktar�n� giriniz:\n");    
			scanf("%f",&dolarsat);
			while(dolarsat>dolaradet) {
			printf("Dolar yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&dolarsat);
			}
			dolarsatistutari=(dolarsat*dolarsatis);
			bakiye+=dolarsatistutari;
			printf("Satt���n�z dolar miktar�: %.2f $, Toplam Bakiye: %.2f TL\n",dolarsat,bakiye);
			dolaradet-=dolarsat;
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
		break;	
	}
}
//EURO FONKS�YONU-EURO FONKS�YONU-EURO FONKS�YONU-EURO FONKS�YONU-EURO FONKS�YONU-EURO FONKS�YONU-EURO FONKS�YONU-EURO FONKS�YONU-EURO FONKS�YONU-EURO FONKS�YONU-EURO FONKS�YONU//
int euro() {
	int alsat,devam;
	float euroal,euroalistutari,eurosat,eurosatistutari;
    printf("1-ALI� 2-SATI�\n");
	scanf("%d",&alsat);
	switch(alsat) {
		case 1: //EURO ALI�
			printf("Almak istedi�iniz euro miktar�n� giriniz:\n");
			scanf("%f",&euroal);
			euroalistutari=(euroal*euroalis);
			while(euroalistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&euroal) ;
    		euroalistutari=(euroal*euroalis);
    		}
    		bakiye-=euroalistutari;
    		printf("Ald���n�z euro miktar�: %.2f, Kalan Bakiye: %.2f TL\n",euroal,bakiye);
    		euroadet+=euroal;
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;
	    case 2: //EURO SATI�
			printf("Satmak istedi�iniz euro miktar�n� giriniz:\n");    
			scanf("%f",&eurosat);
			while(eurosat>euroadet) {
			printf("Euro yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&eurosat);
			}
			eurosatistutari=(eurosat*eurosatis);
			bakiye+=eurosatistutari;
			printf("Satt���n�z euro miktar�: %.2f, Toplam Bakiye: %.2f TL\n",eurosat,bakiye);
			euroadet-=eurosat;
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
		break;
    }
}
//STERL�N FONKS�YONU-STERL�N FONKS�YONU-STERL�N FONKS�YONU-STERL�N FONKS�YONU-STERL�N FONKS�YONU-STERL�N FONKS�YONU-STERL�N FONKS�YONU-STERL�N FONKS�YONU-STERL�N FONKS�YONU//
int sterlin() {
    int alsat,devam;
    float sterlinal,sterlinalistutari,sterlinsat,sterlinsatistutari;
    printf("1-ALI� 2-SATI�\n");
    scanf("%d",&alsat);
	switch(alsat) {
		case 1: //STERL�N ALI�
		    printf("Almak istedi�iniz sterlin miktar�n� giriniz:\n");
		    scanf("%f",&sterlinal);
		    sterlinalistutari=(sterlinal*sterlinalis);
			while(sterlinalistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&sterlinal) ;
    		sterlinalistutari=(sterlinal*sterlinalis);
    		}
    		bakiye-=sterlinalistutari;
    		printf("Ald���n�z sterlin miktar�: %.2f �, Kalan Bakiye: %.2f TL\n",sterlinal,bakiye);
    		sterlinadet+=sterlinal;
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;
	    case 2: //STERL�N SATI�
			printf("Satmak istedi�iniz sterlin miktar�n� giriniz:\n");    
			scanf("%f",&sterlinsat);
			while(sterlinsat>sterlinadet) {
			printf("Sterlin yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&sterlinsat);
			}
			sterlinsatistutari=(sterlinsat*sterlinsatis);
			bakiye+=sterlinsatistutari;
			printf("Satt���n�z sterlin miktar�: %.2f �, Toplam Bakiye: %.2f TL\n",sterlinsat,bakiye);
			sterlinadet-=sterlinsat;
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
			break;
	}
}
//ALTIN FONKS�YONU-ALTIN FONKS�YONU-ALTIN FONKS�YONU-ALTIN FONKS�YONU-ALTIN FONKS�YONU-ALTIN FONKS�YONU-ALTIN FONKS�YONU-ALTIN FONKS�YONU-ALTIN FONKS�YONU-ALTIN FONKS�YONU//
int altin() {
	int alsat,devam;
	float altinal,altinalistutari,altinsat,altinsatistutari;
	printf("1-ALI� 2-SATI�\n");
	scanf("%d",&alsat);
	switch(alsat) {
		case 1: //ALTIN ALI�
		    printf("Almak istedi�iniz alt�n miktar�n� giriniz:\n");
			scanf("%f",&altinal);
			altinalistutari=(altinal*altinalis);
			while(altinalistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&altinal) ;
    		altinalistutari=(altinal*altinalis);
    		}
    		bakiye-=altinalistutari;
    		printf("Ald���n�z gram alt�n miktar�: %.2f, Kalan Bakiye: %.2f TL\n",altinal,bakiye);
    		altinadet+=altinal;
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    		break;
	    case 2: //ALTIN SATI�
			printf("Satmak istedi�iniz alt�n miktar�n� giriniz:\n");    
			scanf("%f",&altinsat);
			while(altinsat>altinadet) {
			printf("Alt�n yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&altinsat);
			}
			altinsatistutari=(altinsat*altinsatis);
			bakiye+=altinsatistutari;
			printf("Satt���n�z gram alt�n miktar�: %.2f, Toplam Bakiye: %.2f TL\n",altinsat,bakiye);
			altinadet-=altinsat;
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
			break;
	}
}
//G�M�� FONKS�YONU-G�M�� FONKS�YONU-G�M�� FONKS�YONU-G�M�� FONKS�YONU-G�M�� FONKS�YONU-G�M�� FONKS�YONU-G�M�� FONKS�YONU-G�M�� FONKS�YONU-G�M�� FONKS�YONU-G�M�� FONKS�YONU//
int gumus() {
	int alsat,devam;
	float gumusal,gumusalistutari,gumussat,gumussatistutari;
	printf("1-ALI� 2-SATI�\n");
	scanf("%d",&alsat);
	switch(alsat) {
	    case 1: //G�M�� ALI�
		    printf("Almak istedi�iniz g�m�� miktar�n� giriniz:\n");
		    scanf("%f",&gumusal);
			gumusalistutari=(gumusal*gumusalis);
			while(gumusalistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&gumusal) ;
    		gumusalistutari=(gumusal*gumusalis);
    		}
    		bakiye-=gumusalistutari;
    		printf("Ald���n�z gram g�m�� miktar�: %.2f, Kalan Bakiye: %.2f TL\n",gumusal,bakiye);
    		gumusadet+=gumusal;
    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    		break;
	    case 2: //G�M�� SATI�
			printf("Satmak istedi�iniz g�m�� miktar�n� giriniz:\n");    
			scanf("%f",&gumussat);
			while(gumussat>gumusadet) {
			printf("G�m�� yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&gumussat);
			}
		    gumussatistutari=(gumussat*gumussatis);
			bakiye+=gumussatistutari;
			printf("Satt���n�z gram g�m�� miktar�: %.2f, Toplam Bakiye: %.2f TL\n",gumussat,bakiye);
			gumusadet-=gumussat;
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
			break;
	} 
}
//�DEME FONKS�YONU-�DEME FONKS�YONU-�DEME FONKS�YONU-�DEME FONKS�YONU-�DEME FONKS�YONU-�DEME FONKS�YONU-�DEME FONKS�YONU-�DEME FONKS�YONU-�DEME FONKS�YONU-�DEME FONKS�YONU//
int odeme() {
	int devam,paraislem6;
	long long int tc;
	long long int telno;
	int egitim,fatura,devamodeme,i,m=0;
	for(i=1;i<=3;i++){
	m++;
	printf("TC Kimlik numaran�z� giriniz:\n");
	scanf("%lld",&tc);
	if(tc==12345678910){
		odemee();
		return 0;
	}
	 if(m==3){
		printf("TC NO'yu 3 kere yanl�� girdiniz. Ana Men�ye y�nlendiriliyorsunuz...\n\n");
		anamenu();
	}
}
}
int odemee(){
	long long int tc;
	long long int telno;
	int devam,paraislem61;
	int egitim,fatura,devamodeme,ilplaka,ogrencino,vergi,digerodeme,kimlik;
	printf("\n1-Fatura �demeleri\n2-E�itim �demeleri\n3-Vergi �demeleri\n4-Tapu �demeleri\n5-Di�er �demeler\n6-Ana Men�\n\n");
	scanf("%d",&paraislem61);
	switch(paraislem61){
		case 1: //FATURALAR
			printf("\n1-Su Faturas�\n2-Elektrik Faturas�\n3-Do�algaz Faturas�\n");
			scanf("%d",&fatura);
			switch(fatura) {
				case 1: //SU FATURASI
					su();
			    break;
				case 2:	//ELEKTR�K FATURASI
				    elektrik();
	            break;
				case 3: //DO�ALGAZ FATURASI
					dogalgaz();
				break;		
			}
		break;
		case 2: //E��T�M �DEMELER�
		    printf("1-KYK Kredisi\n2-Yurt �demesi\n3-�niversite �demesi\n");
		    scanf("%d",&egitim);
		    switch(egitim) {
		    	case 1: //KYK KRED�
		    	    kyk();		    	    
				break;
				case 2: //YURT �DEME
				    yurt();
				break;	
				case 3: //�N�VERS�TE �DEME
				    universite();
				break;
			}
		break;
		case 3: //VERG� �DEMELER�
		    printf("1-Motorlu Ta��tlar Vergisi\n2-Trafik Cezas�\n");
		    scanf("%d",&vergi);
		    switch(vergi) {
		    	case 1: //MOTORLU TA�ITLAR VERG�S�
		    		motor();
		    	break;	
		    	case 2: //TRAF�K CEZASI
		    		printf("Kayd�n�zda trafik cezas� borcu bulunmamaktad�r.\n");
		    		printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		                scanf("%d",&devam);
			                if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		    	break;	
			}
		break;
		case 4: //TAPU �DEMELER�
		    tapu();
		break;	
		case 5: //D��ER ��LEMLER 
		    printf("1-S�r�c� Belgesi\n2-Kimlik Yenileme\n");
		    scanf("%d",&digerodeme);
		    switch(digerodeme) {
		    	case 1: //S�R�C� BELGES�
		    		surucu();
		    	break;
				case 2: //K�ML�K YEN�LEME
				    printf("1-Do�um\n2-De�i�tirme\n3-TC Kimlik Kart� Kay�p\n");
				    scanf("%d",&kimlik);
				    switch(kimlik) {
				    	case 1: //DO�UM
				    		dogum();
				    	break;
						case 2: //DE���T�RME
                            degistirme();
				    	break;
						case 3: //KAYIP
				    		kayip();
				    	break;	
					}
				break;	
			}
		break;
		case 6:// ANA MEN�
			anamenu();
		break;			
	}
}
//SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI//
int su() {
	int devamodeme,devam;
	long long int telno;
	printf("Telefon numaran�z� giriniz:\n");
	scanf("%lld",&telno);
	if(telno==5333333333){
	printf("Sistemde kay�tl� su faturas� borcunuz: 70 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
	switch(devamodeme) {
		case 1:
			bakiye-=70;
			printf("Su faturas� borcunuz �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2: 
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;	
	}
}
else{
	printf("Eksik yada hatal� tu�lad�n�z. L�tfen tekrar giriniz.\n");
	su();
}
}
//ELEKTR�K FATURASI-ELEKTR�K FATURASI-ELEKTR�K FATURASI-ELEKTR�K FATURASI-ELEKTR�K FATURASI-ELEKTR�K FATURASI-ELEKTR�K FATURASI-ELEKTR�K FATURASI-ELEKTR�K FATURASI-ELEKTR�K FATURASI//
int elektrik() {
	int devamodeme,devam;
	long long int telno;
	printf("Telefon numaran�z� giriniz:\n");
	scanf("%lld",&telno);
	if(telno==5333333333){
	printf("Sistemde kay�tl� elektrik faturas� borcunuz: 135TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
	switch(devamodeme) {
		case 1:
			bakiye-=135;
			printf("Elektrik faturas� borcunuz �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;	
	}
}
else{
	printf("Eksik yada hatal� tu�lad�n�z. L�tfen tekrar giriniz.\n");
	elektrik();
}
}
//DO�ALGAZ FATURASI-DO�ALGAZ FATURASI-DO�ALGAZ FATURASI-DO�ALGAZ FATURASI-DO�ALGAZ FATURASI-DO�ALGAZ FATURASI-DO�ALGAZ FATURASI-DO�ALGAZ FATURASI-DO�ALGAZ FATURASI-DO�ALGAZ FATURASI//
int dogalgaz() {
	int devamodeme,devam;
	long long int telno;
	printf("Telefon numaran�z� giriniz:\n");
	scanf("%lld",&telno);
	if(telno==5333333333){
	printf("Sistemde kay�tl� do�algaz faturas� borcunuz: 374 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
	switch(devamodeme) {
		case 1:
			bakiye-=374;
			printf("Do�algaz faturas� borcunuz �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;	
	}
}
else{
	printf("Eksik yada hatal� tu�lad�n�z. L�tfen tekrar giriniz.\n");
	dogalgaz();
}
}
//KYK KRED�S� FONKS�YONU-KYK KRED�S� FONKS�YONU-KYK KRED�S� FONKS�YONU-KYK KRED�S� FONKS�YONU-KYK KRED�S� FONKS�YONU-KYK KRED�S� FONKS�YONU-KYK KRED�S� FONKS�YONU-KYK KRED�S� FONKS�YONU//
int kyk() {
	int devamodeme,devam;
	printf("Toplam KYK Kredisi borcunuz: 35.450 TL\n");
	printf("Bu ayki borcunuz: 650 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=650;
			printf("KYK Kredi borcunuz �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//YURT �DEME FONKS�YONU-YURT �DEME FONKS�YONU-YURT �DEME FONKS�YONU-YURT �DEME FONKS�YONU-YURT �DEME FONKS�YONU-YURT �DEME FONKS�YONU-YURT �DEME FONKS�YONU-YURT �DEME FONKS�YONU//
int yurt() {
	int devamodeme,devam;
	printf("Bu ayki borcunuz: 150 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=150;
			printf("Yurt borcunuz �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//�N�VERS�TE �DEME-�N�VERS�TE �DEME-�N�VERS�TE �DEME-�N�VERS�TE �DEME-�N�VERS�TE �DEME-�N�VERS�TE �DEME-�N�VERS�TE �DEME-�N�VERS�TE �DEME-�N�VERS�TE �DEME-�N�VERS�TE �DEME-�N�VERS�TE �DEME-//
int universite(){
	int devamodeme,devam,ilplaka,ogrencino;
	printf("�deme yapaca��n�z �niversitenin il plaka kodunu giriniz:\n");
	scanf("%d",&ilplaka);
	if(ilplaka>=1 && ilplaka<=81){
	printf("��renci numaran�z� giriniz:\n");
	scanf("%d",&ogrencino);
	printf("Bu ayki �demeniz gereken �niversite harc�: 110 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
	switch(devamodeme) {
		case 1:
			bakiye-=110;
			printf("�niversite harc�n�z �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
			anamenu();
			}
			else{
			printf("�yi G�nler Dileriz!");	
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
			}
		break;
		case 2: 
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;
	}
	}
	else{
	printf("�l kodunu yanl�� girdiniz!\n");
	universite();
	}
}
//MOTORLU TA�ITLAR VERG�S� FONKS�YONU-MOTORLU TA�ITLAR VERG�S� FONKS�YONU-MOTORLU TA�ITLAR VERG�S� FONKS�YONU-MOTORLU TA�ITLAR VERG�S� FONKS�YONU-MOTORLU TA�ITLAR VERG�S� FONKS�YONU//
int motor() {
	int devamodeme,devam;
	printf("Vergi D�nemi: 01/2021-02/2021 Plaka No: 06BGK06 Trafi�e ��k�� Tarihi: 11/12/2011\n");
	printf("Motorlu Ta��t Vergisi Tutar�: 450 TL Motorlu Ta��t Vergisi Faizi: 9,54 TL Toplam Tutar: 459,54 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=459,64;
			printf("Motorlu Ta��tlar Vergisi borcunuz �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//TAPU FONKS�YONU-TAPU FONKS�YONU-TAPU FONKS�YONU-TAPU FONKS�YONU-TAPU FONKS�YONU-TAPU FONKS�YONU-TAPU FONKS�YONU-TAPU FONKS�YONU-TAPU FONKS�YONU-TAPU FONKS�YONU-TAPU FONKS�YONU//
int tapu() {
    int devamodeme,devam;
    printf("Tapu Harc�n�z: 200 TL\n");
    printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
    scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=200;
			printf("Tapu Harc�n�z �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//S�R�C� BELGES� FONKS�YONU-S�R�C� BELGES� FONKS�YONU-S�R�C� BELGES� FONKS�YONU-S�R�C� BELGES� FONKS�YONU-S�R�C� BELGES� FONKS�YONU-S�R�C� BELGES� FONKS�YONU-S�R�C� BELGES� FONKS�YONU-//
int surucu() {
	int devamodeme,devam;
	printf("S�r�c� Belgesi i�in �demeniz gereken tutar: 988 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
    scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=988;
			printf("S�r�c� Belgesi Harc�n�z �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//DO�UM FONKS�YONU-DO�UM FONKS�YONU-DO�UM FONKS�YONU-DO�UM FONKS�YONU-DO�UM FONKS�YONU-DO�UM FONKS�YONU-DO�UM FONKS�YONU-DO�UM FONKS�YONU-DO�UM FONKS�YONU-DO�UM FONKS�YONU//
int dogum() {
	int devamodeme,devam;
	printf("Yeni kimlik kart� alman�z i�in �demeniz gereken tutar: 30 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=30;
			printf("Yeni kimlik kart� borcunuz �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//DE���T�RME FONKS�YONU-DE���T�RME FONKS�YONU-DE���T�RME FONKS�YONU-DE���T�RME FONKS�YONU-DE���T�RME FONKS�YONU-DE���T�RME FONKS�YONU-DE���T�RME FONKS�YONU-DE���T�RME FONKS�YONU//
int degistirme() {
	int devamodeme,devam;
	printf("Yeni kimlik kart� alman�z i�in �demeniz gereken tutar: 35 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
	    case 1:
			bakiye-=35;
			printf("Yeni kimlik kart� borcunuz �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//KAYIP FONKS�YONU-KAYIP FONKS�YONU-KAYIP FONKS�YONU-KAYIP FONKS�YONU-KAYIP FONKS�YONU-KAYIP FONKS�YONU-KAYIP FONKS�YONU-KAYIP FONKS�YONU-KAYIP FONKS�YONU-KAYIP FONKS�YONU//
int kayip() {
	int devamodeme,devam;
	printf("Yeni kimlik kart� alman�z i�in �demeniz gereken tutar: 45 TL\n");
	printf("�demek i�in 1'i, Ana Men�ye d�nmek i�in 2'yi tu�lay�n�z.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=45;
			printf("Yeni kimlik kart� borcunuz �denmi�tir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana men�ye d�nmek i�in 1 , ��kmak i�in 2 ye bas�n�z.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("�yi G�nler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
		    anamenu();
		break;			
	}
}
