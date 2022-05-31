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
		printf("Lütfen parolanýzý giriniz.\n");
		scanf("%d",&sifre);
		if(sifre==1234) {
			printf("HOÞGELDÝNÝZ\n");
			anamenu();
			return 0;
		}
		if(n==3){
			printf("Hesabýnýz bloke olmuþtur.");
			return 0;
		}
    }
    printf("Ýþlemler : \n1-Para Çekme\n2-Para Yatýrma\n3-Hesaba Para Yatýrma(HAVALE/EFT)\n4-Bakiye Sorgulama\n5-Ticari Ýþlemler\n6-Ödeme Ýþlemleri\n7-Kart Ýade \n\n");
    printf("Lütfen yapmak istediðiniz iþlemi seçiniz : ");
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
			printf("Ýyi Günler Dileriz.");
			return 0;
		    break;		
    }
getch();
return 0;
}
int anamenu() {
	int islem; 
	printf("Ýþlemler : \n1-Para Çekme\n2-Para Yatýrma\n3-Hesaba Para Yatýrma(HAVALE/EFT)\n4-Bakiye Sorgulama\n5-Ticari Ýþlemler\n6-Ödeme Ýþlemleri\n7-Kart Ýade \n\n");
    printf("Lütfen yapmak istediðiniz iþlemi seçiniz : ");
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
			printf("Ýyi Günler Dileriz!");
		    return 0;
			break;	
	}
}
//PARA ÇEKME FONKSÝYONU-PARA ÇEKME FONKSÝYONU-PARA ÇEKME FONKSÝYONU-PARA ÇEKME FONKSÝYONU-PARA ÇEKME FONKSÝYONU-PARA ÇEKME FONKSÝYONU-PARA ÇEKME FONKSÝYONU-PARA ÇEKME FONKSÝYONU//
int paracekme() {
	int tutar,devam,paraislem;
	printf("Mevcut bakiyeniz : %.2f\n",bakiye);
    		printf("\n1- 20TL\n2- 50TL\n3- 100TL\n4- 200TL\n5- Diðer tutar\n\n");
    		scanf("%d",&paraislem);
    		switch(paraislem) {
    			case 1:
    				bakiye-=20;	
    				printf("Çektiðiniz tutar : 20 TL, Kalan bakiye : %.2f\n",bakiye);
    				printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		        scanf("%d",&devam);
			       if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}	
					
    			break;
    		   	case 2:	  	
    				bakiye-=50;	
    				printf("Çektiðiniz tutar : 50 TL, Kalan bakiye : %.2f\n",bakiye);
    				printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    				scanf("%d",&devam);
					if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    			break;
    			case 3:
    				bakiye-=100;	
    				printf("Çektiðiniz tutar : 100 TL, Kalan bakiye : %.2f\n",bakiye);
    				printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    				scanf("%d",&devam);
					if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    			break;
    			case 4:
    				bakiye-=200;	
    				printf("Çektiðiniz tutar : 200 TL, Kalan bakiye : %.2f\n",bakiye);
    				printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    				scanf("%d",&devam);
					if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
    			break;
    			case 5:
    				printf("Çekmek istediðiniz tutarý giriniz : ");
    				scanf("%d",&tutar);
    				while(tutar>bakiye) {
    				printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    				scanf("%d",&tutar);
    				}
    				bakiye-=tutar;
    				printf("Çektiðiniz tutar : %d , Kalan bakiye : %.2f\n",tutar,bakiye);
    				printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    				scanf("%d",&devam);
					if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
				break;
			}
}
//PARA YATIRMA FONKSÝYONU-PARA YATIRMA FONKSÝYONU-PARA YATIRMA FONKSÝYONU-PARA YATIRMA FONKSÝYONU-PARA YATIRMA FONKSÝYONU-PARA YATIRMA FONKSÝYONU-PARA YATIRMA FONKSÝYONU//
int parayatirma() {
	int tutar,devam,paraislem2; 
	printf("Mevcut bakiyeniz : %.2f\n",bakiye);
    printf("\n1- 20TL\n2- 50TL\n3- 100TL\n4- 200TL\n5- Diðer tutar\n\n");
    scanf("%d",&paraislem2);
    switch(paraislem2) {
    	case 1:
    		bakiye+=20;	
    		printf("Yatýrdýðýnýz tutar : 20 TL, Toplam bakiye : %.2f\n",bakiye);
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;	
    	case 2:	  	
    	    bakiye+=50;	
    		printf("Yatýrdýðýnýz tutar : 50 TL, Toplam bakiye : %.2f\n",bakiye);
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}	
					
    	break;
    	case 3:
    		bakiye+=100;	
    		printf("Yatýrdýðýnýz tutar : 100 TL, Toplam bakiye : %.2f\n",bakiye);
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}	
					
    	break;
    	case 4:
    		bakiye+=200;	
    		printf("Yatýrdýðýnýz tutar : 200 TL, Toplam bakiye : %.2f\n",bakiye);
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;
    	case 5:
    		printf("Yatýrmak istediðiniz tutarý giriniz : ");
    		scanf("%d",&tutar);
    		bakiye+=tutar;
    		printf("Yatýrdýðýnýz tutar : %d , Toplam bakiye : %.2f\n",tutar,bakiye);
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
    	if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
			
		break;
	}
}
//HAVALE/EFT FONKSÝYONU-HAVALE/EFT FONKSÝYONU-HAVALE/EFT FONKSÝYONU-HAVALE/EFT FONKSÝYONU-HAVALE/EFT FONKSÝYONU-HAVALE/EFT FONKSÝYONU-HAVALE/EFT FONKSÝYONU-HAVALE/EFT FONKSÝYONU//
int havaleeft() {
    int paraaktarma,devam,tutar;
	int hesapno;
	long long int tc,telno;
	printf("TC Kimlik numaranýzý giriniz:\n");
    scanf("%lld",&tc);
    if(tc==12345678910){
	printf("Telefon numaranýzý giriniz:\n");
	scanf("%lld",&telno);
	if(telno==5333333333){
    printf("1-Kendi Hesabýma Para Yatýrma\n2-Baþka Hesaba Para Yatýrma\n");
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
	printf("Eksik yada hatalý tuþladýnýz. Lütfen tekrar giriniz.\n");
	scanf("%lld",&telno);
	}
	while(telno!=5333333333);
	printf("1-Kendi Hesabýma Para Yatýrma\n2-Baþka Hesaba Para Yatýrma\n");
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
printf("Eksik yada hatalý tuþladýnýz. Lütfen tekrar giriniz.\n");
havaleeft();
}
}
//HAVALE FONKSÝYONU-HAVALE FONKSÝYONU-HAVALE FONKSÝYONU-HAVALE FONKSÝYONU-HAVALE FONKSÝYONU-HAVALE FONKSÝYONU-HAVALE FONKSÝYONU-HAVALE FONKSÝYONU-HAVALE FONKSÝYONU-HAVALE FONKSÝYONU//
int havale() {
	int tutar,devam;
	printf("Bankamýzda 2 adet hesabýnýz bulundu!\n");
    printf("1-ANKARA/KIZILAY ÞUBESÝ\nBakiye: %.2f TL\n",bakiye);
    printf("2-ANKARA/GÖLBAÞI ÞUBESÝ\nBakiye: %.2f TL\n",bakiye2);
    printf("Yatýrmak istediðiniz tutarý giriniz:\n");
    scanf("%d",&tutar);
    bakiye-=tutar;
    bakiye2+=tutar;
    printf("Yatýrdýðýnýz tutar : %d TL, ANKARA/KIZILAY ÞUBESÝ Bakiye: %.2f TL, ANKARA/GÖLBAÞI ÞUBESÝ Bakiye: %.2f TL\n ",tutar,bakiye,bakiye2);
    printf("Anamenüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    scanf("%d",&devam);
    if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
}

//EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU-EFT FONKSÝYONU//
int eft() {
	int tutar,devam;
	long long int hesapno;
	printf("Hesap Numarasýný giriniz:\n");
	scanf("%lld",&hesapno);
	if(hesapno==1234567891011120){
	printf("Yatýrmak istediðiniz tutarý giriniz:\n");
    scanf("%d",&tutar);
	bakiye-=tutar+5.5;
	printf("Yatýrdýðýnýz tutar : %d TL, EFT Ücreti: 5.5 TL, Kalan Bakiye: %.2f TL\n",tutar,bakiye);
    printf("Anamenüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    scanf("%d",&devam);
    if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
}
else{
	printf("Eksik yada hatalý tuþladýnýz. Lütfen tekrar giriniz.\n");
	eft();
}
}
//BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU-BÝLGÝ FONKSÝYONU//
int bilgi() {
	int devam;
	printf("Mevcut Bakiyeniz : %.2f TL \nMevcut Dolarýnýz: %.2f $ \nMevcut Euronuz: %.2f \nMevcut Sterlininiz: %.2f £ \nMevcut Gram Altýn Miktarý: %.2f Gram\nMevcut Gram Gümüþ Miktarý: %.2f Gram\n",bakiye,dolaradet,euroadet,sterlinadet,altinadet,gumusadet);
	printf("Anamenüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
}
//TÝCARÝ FONKSÝYONU-TÝCARÝ FONKSÝYONU-TÝCARÝ FONKSÝYONU-TÝCARÝ FONKSÝYONU-TÝCARÝ FONKSÝYONU-TÝCARÝ FONKSÝYONU-TÝCARÝ FONKSÝYONU-TÝCARÝ FONKSÝYONU-TÝCARÝ FONKSÝYONU-TÝCARÝ FONKSÝYONU//
int ticari() {
	int paraislem5,doviz;
	printf("1-Döviz Ýþlemleri\n2-Altýn Ýþlemleri\n3-Gümüþ Ýþlemleri\n");
	scanf("%d",&paraislem5);
	switch(paraislem5) {
		case 1: //DÖVÝZ
			printf("1-Dolar 2-Euro 3-Sterlin\n");
			scanf("%d",&doviz);
			switch(doviz) {
				case 1: //DOLAR
				dolar();	
				break;
	            case 2: //EURO
			    euro();  
			    break;
	            case 3: //STERLÝN
			    sterlin();   
			    break;
			}
		break;	
        case 2: //ALTIN
		altin();     
	    break;		        
        case 3: //GÜMÜÞ
		gumus();    
	    break;
	}
}
//DOLAR FONKSÝYONU-DOLAR FONKSÝYONU-DOLAR FONKSÝYONU-DOLAR FONKSÝYONU-DOLAR FONKSÝYONU-DOLAR FONKSÝYONU-DOLAR FONKSÝYONU-DOLAR FONKSÝYONU-DOLAR FONKSÝYONU-DOLAR FONKSÝYONU-DOLAR FONKSÝYONU//
int dolar() {
	int alsat,devam;
	float dolaral,dolaralistutari,dolarsat,dolarsatistutari;
	printf("1-ALIÞ 2-SATIÞ\n");
	scanf("%d",&alsat);
	switch(alsat) {
	    case 1: //DOLAR ALIÞ
	        printf("Almak istediðiniz dolar miktarýný giriniz:\n");
			scanf("%f",&dolaral);
			dolaralistutari=(dolaral*dolaralis);
			while(dolaralistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&dolaral) ;
    		dolaralistutari=(dolaral*dolaralis);
    		}
    		bakiye-=dolaralistutari;
    		printf("Aldýðýnýz dolar miktarý: %.2f $, Kalan Bakiye: %.2f TL\n",dolaral,bakiye);
    		dolaradet+=dolaral;
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;
	    case 2: //DOLAR SATIÞ
			printf("Satmak istediðiniz dolar miktarýný giriniz:\n");    
			scanf("%f",&dolarsat);
			while(dolarsat>dolaradet) {
			printf("Dolar yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&dolarsat);
			}
			dolarsatistutari=(dolarsat*dolarsatis);
			bakiye+=dolarsatistutari;
			printf("Sattýðýnýz dolar miktarý: %.2f $, Toplam Bakiye: %.2f TL\n",dolarsat,bakiye);
			dolaradet-=dolarsat;
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
		break;	
	}
}
//EURO FONKSÝYONU-EURO FONKSÝYONU-EURO FONKSÝYONU-EURO FONKSÝYONU-EURO FONKSÝYONU-EURO FONKSÝYONU-EURO FONKSÝYONU-EURO FONKSÝYONU-EURO FONKSÝYONU-EURO FONKSÝYONU-EURO FONKSÝYONU//
int euro() {
	int alsat,devam;
	float euroal,euroalistutari,eurosat,eurosatistutari;
    printf("1-ALIÞ 2-SATIÞ\n");
	scanf("%d",&alsat);
	switch(alsat) {
		case 1: //EURO ALIÞ
			printf("Almak istediðiniz euro miktarýný giriniz:\n");
			scanf("%f",&euroal);
			euroalistutari=(euroal*euroalis);
			while(euroalistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&euroal) ;
    		euroalistutari=(euroal*euroalis);
    		}
    		bakiye-=euroalistutari;
    		printf("Aldýðýnýz euro miktarý: %.2f, Kalan Bakiye: %.2f TL\n",euroal,bakiye);
    		euroadet+=euroal;
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;
	    case 2: //EURO SATIÞ
			printf("Satmak istediðiniz euro miktarýný giriniz:\n");    
			scanf("%f",&eurosat);
			while(eurosat>euroadet) {
			printf("Euro yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&eurosat);
			}
			eurosatistutari=(eurosat*eurosatis);
			bakiye+=eurosatistutari;
			printf("Sattýðýnýz euro miktarý: %.2f, Toplam Bakiye: %.2f TL\n",eurosat,bakiye);
			euroadet-=eurosat;
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
		break;
    }
}
//STERLÝN FONKSÝYONU-STERLÝN FONKSÝYONU-STERLÝN FONKSÝYONU-STERLÝN FONKSÝYONU-STERLÝN FONKSÝYONU-STERLÝN FONKSÝYONU-STERLÝN FONKSÝYONU-STERLÝN FONKSÝYONU-STERLÝN FONKSÝYONU//
int sterlin() {
    int alsat,devam;
    float sterlinal,sterlinalistutari,sterlinsat,sterlinsatistutari;
    printf("1-ALIÞ 2-SATIÞ\n");
    scanf("%d",&alsat);
	switch(alsat) {
		case 1: //STERLÝN ALIÞ
		    printf("Almak istediðiniz sterlin miktarýný giriniz:\n");
		    scanf("%f",&sterlinal);
		    sterlinalistutari=(sterlinal*sterlinalis);
			while(sterlinalistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&sterlinal) ;
    		sterlinalistutari=(sterlinal*sterlinalis);
    		}
    		bakiye-=sterlinalistutari;
    		printf("Aldýðýnýz sterlin miktarý: %.2f £, Kalan Bakiye: %.2f TL\n",sterlinal,bakiye);
    		sterlinadet+=sterlinal;
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    	break;
	    case 2: //STERLÝN SATIÞ
			printf("Satmak istediðiniz sterlin miktarýný giriniz:\n");    
			scanf("%f",&sterlinsat);
			while(sterlinsat>sterlinadet) {
			printf("Sterlin yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&sterlinsat);
			}
			sterlinsatistutari=(sterlinsat*sterlinsatis);
			bakiye+=sterlinsatistutari;
			printf("Sattýðýnýz sterlin miktarý: %.2f £, Toplam Bakiye: %.2f TL\n",sterlinsat,bakiye);
			sterlinadet-=sterlinsat;
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
			break;
	}
}
//ALTIN FONKSÝYONU-ALTIN FONKSÝYONU-ALTIN FONKSÝYONU-ALTIN FONKSÝYONU-ALTIN FONKSÝYONU-ALTIN FONKSÝYONU-ALTIN FONKSÝYONU-ALTIN FONKSÝYONU-ALTIN FONKSÝYONU-ALTIN FONKSÝYONU//
int altin() {
	int alsat,devam;
	float altinal,altinalistutari,altinsat,altinsatistutari;
	printf("1-ALIÞ 2-SATIÞ\n");
	scanf("%d",&alsat);
	switch(alsat) {
		case 1: //ALTIN ALIÞ
		    printf("Almak istediðiniz altýn miktarýný giriniz:\n");
			scanf("%f",&altinal);
			altinalistutari=(altinal*altinalis);
			while(altinalistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&altinal) ;
    		altinalistutari=(altinal*altinalis);
    		}
    		bakiye-=altinalistutari;
    		printf("Aldýðýnýz gram altýn miktarý: %.2f, Kalan Bakiye: %.2f TL\n",altinal,bakiye);
    		altinadet+=altinal;
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    		break;
	    case 2: //ALTIN SATIÞ
			printf("Satmak istediðiniz altýn miktarýný giriniz:\n");    
			scanf("%f",&altinsat);
			while(altinsat>altinadet) {
			printf("Altýn yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&altinsat);
			}
			altinsatistutari=(altinsat*altinsatis);
			bakiye+=altinsatistutari;
			printf("Sattýðýnýz gram altýn miktarý: %.2f, Toplam Bakiye: %.2f TL\n",altinsat,bakiye);
			altinadet-=altinsat;
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
			break;
	}
}
//GÜMÜÞ FONKSÝYONU-GÜMÜÞ FONKSÝYONU-GÜMÜÞ FONKSÝYONU-GÜMÜÞ FONKSÝYONU-GÜMÜÞ FONKSÝYONU-GÜMÜÞ FONKSÝYONU-GÜMÜÞ FONKSÝYONU-GÜMÜÞ FONKSÝYONU-GÜMÜÞ FONKSÝYONU-GÜMÜÞ FONKSÝYONU//
int gumus() {
	int alsat,devam;
	float gumusal,gumusalistutari,gumussat,gumussatistutari;
	printf("1-ALIÞ 2-SATIÞ\n");
	scanf("%d",&alsat);
	switch(alsat) {
	    case 1: //GÜMÜÞ ALIÞ
		    printf("Almak istediðiniz gümüþ miktarýný giriniz:\n");
		    scanf("%f",&gumusal);
			gumusalistutari=(gumusal*gumusalis);
			while(gumusalistutari>bakiye) {
    		printf("Bakiye yetersiz ! Yeniden giriniz :\n");
    		scanf("%f",&gumusal) ;
    		gumusalistutari=(gumusal*gumusalis);
    		}
    		bakiye-=gumusalistutari;
    		printf("Aldýðýnýz gram gümüþ miktarý: %.2f, Kalan Bakiye: %.2f TL\n",gumusal,bakiye);
    		gumusadet+=gumusal;
    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					
    		break;
	    case 2: //GÜMÜÞ SATIÞ
			printf("Satmak istediðiniz gümüþ miktarýný giriniz:\n");    
			scanf("%f",&gumussat);
			while(gumussat>gumusadet) {
			printf("Gümüþ yetersiz ! Yeniden giriniz :\n");
			scanf("%f",&gumussat);
			}
		    gumussatistutari=(gumussat*gumussatis);
			bakiye+=gumussatistutari;
			printf("Sattýðýnýz gram gümüþ miktarý: %.2f, Toplam Bakiye: %.2f TL\n",gumussat,bakiye);
			gumusadet-=gumussat;
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
					        
			break;
	} 
}
//ÖDEME FONKSÝYONU-ÖDEME FONKSÝYONU-ÖDEME FONKSÝYONU-ÖDEME FONKSÝYONU-ÖDEME FONKSÝYONU-ÖDEME FONKSÝYONU-ÖDEME FONKSÝYONU-ÖDEME FONKSÝYONU-ÖDEME FONKSÝYONU-ÖDEME FONKSÝYONU//
int odeme() {
	int devam,paraislem6;
	long long int tc;
	long long int telno;
	int egitim,fatura,devamodeme,i,m=0;
	for(i=1;i<=3;i++){
	m++;
	printf("TC Kimlik numaranýzý giriniz:\n");
	scanf("%lld",&tc);
	if(tc==12345678910){
		odemee();
		return 0;
	}
	 if(m==3){
		printf("TC NO'yu 3 kere yanlýþ girdiniz. Ana Menüye yönlendiriliyorsunuz...\n\n");
		anamenu();
	}
}
}
int odemee(){
	long long int tc;
	long long int telno;
	int devam,paraislem61;
	int egitim,fatura,devamodeme,ilplaka,ogrencino,vergi,digerodeme,kimlik;
	printf("\n1-Fatura Ödemeleri\n2-Eðitim Ödemeleri\n3-Vergi Ödemeleri\n4-Tapu Ödemeleri\n5-Diðer Ödemeler\n6-Ana Menü\n\n");
	scanf("%d",&paraislem61);
	switch(paraislem61){
		case 1: //FATURALAR
			printf("\n1-Su Faturasý\n2-Elektrik Faturasý\n3-Doðalgaz Faturasý\n");
			scanf("%d",&fatura);
			switch(fatura) {
				case 1: //SU FATURASI
					su();
			    break;
				case 2:	//ELEKTRÝK FATURASI
				    elektrik();
	            break;
				case 3: //DOÐALGAZ FATURASI
					dogalgaz();
				break;		
			}
		break;
		case 2: //EÐÝTÝM ÖDEMELERÝ
		    printf("1-KYK Kredisi\n2-Yurt Ödemesi\n3-Üniversite Ödemesi\n");
		    scanf("%d",&egitim);
		    switch(egitim) {
		    	case 1: //KYK KREDÝ
		    	    kyk();		    	    
				break;
				case 2: //YURT ÖDEME
				    yurt();
				break;	
				case 3: //ÜNÝVERSÝTE ÖDEME
				    universite();
				break;
			}
		break;
		case 3: //VERGÝ ÖDEMELERÝ
		    printf("1-Motorlu Taþýtlar Vergisi\n2-Trafik Cezasý\n");
		    scanf("%d",&vergi);
		    switch(vergi) {
		    	case 1: //MOTORLU TAÞITLAR VERGÝSÝ
		    		motor();
		    	break;	
		    	case 2: //TRAFÝK CEZASI
		    		printf("Kaydýnýzda trafik cezasý borcu bulunmamaktadýr.\n");
		    		printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		                scanf("%d",&devam);
			                if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		    	break;	
			}
		break;
		case 4: //TAPU ÖDEMELERÝ
		    tapu();
		break;	
		case 5: //DÝÐER ÝÞLEMLER 
		    printf("1-Sürücü Belgesi\n2-Kimlik Yenileme\n");
		    scanf("%d",&digerodeme);
		    switch(digerodeme) {
		    	case 1: //SÜRÜCÜ BELGESÝ
		    		surucu();
		    	break;
				case 2: //KÝMLÝK YENÝLEME
				    printf("1-Doðum\n2-Deðiþtirme\n3-TC Kimlik Kartý Kayýp\n");
				    scanf("%d",&kimlik);
				    switch(kimlik) {
				    	case 1: //DOÐUM
				    		dogum();
				    	break;
						case 2: //DEÐÝÞTÝRME
                            degistirme();
				    	break;
						case 3: //KAYIP
				    		kayip();
				    	break;	
					}
				break;	
			}
		break;
		case 6:// ANA MENÜ
			anamenu();
		break;			
	}
}
//SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI-SU FATURASI//
int su() {
	int devamodeme,devam;
	long long int telno;
	printf("Telefon numaranýzý giriniz:\n");
	scanf("%lld",&telno);
	if(telno==5333333333){
	printf("Sistemde kayýtlý su faturasý borcunuz: 70 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
	switch(devamodeme) {
		case 1:
			bakiye-=70;
			printf("Su faturasý borcunuz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
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
	printf("Eksik yada hatalý tuþladýnýz. Lütfen tekrar giriniz.\n");
	su();
}
}
//ELEKTRÝK FATURASI-ELEKTRÝK FATURASI-ELEKTRÝK FATURASI-ELEKTRÝK FATURASI-ELEKTRÝK FATURASI-ELEKTRÝK FATURASI-ELEKTRÝK FATURASI-ELEKTRÝK FATURASI-ELEKTRÝK FATURASI-ELEKTRÝK FATURASI//
int elektrik() {
	int devamodeme,devam;
	long long int telno;
	printf("Telefon numaranýzý giriniz:\n");
	scanf("%lld",&telno);
	if(telno==5333333333){
	printf("Sistemde kayýtlý elektrik faturasý borcunuz: 135TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
	switch(devamodeme) {
		case 1:
			bakiye-=135;
			printf("Elektrik faturasý borcunuz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
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
	printf("Eksik yada hatalý tuþladýnýz. Lütfen tekrar giriniz.\n");
	elektrik();
}
}
//DOÐALGAZ FATURASI-DOÐALGAZ FATURASI-DOÐALGAZ FATURASI-DOÐALGAZ FATURASI-DOÐALGAZ FATURASI-DOÐALGAZ FATURASI-DOÐALGAZ FATURASI-DOÐALGAZ FATURASI-DOÐALGAZ FATURASI-DOÐALGAZ FATURASI//
int dogalgaz() {
	int devamodeme,devam;
	long long int telno;
	printf("Telefon numaranýzý giriniz:\n");
	scanf("%lld",&telno);
	if(telno==5333333333){
	printf("Sistemde kayýtlý doðalgaz faturasý borcunuz: 374 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
	switch(devamodeme) {
		case 1:
			bakiye-=374;
			printf("Doðalgaz faturasý borcunuz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
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
	printf("Eksik yada hatalý tuþladýnýz. Lütfen tekrar giriniz.\n");
	dogalgaz();
}
}
//KYK KREDÝSÝ FONKSÝYONU-KYK KREDÝSÝ FONKSÝYONU-KYK KREDÝSÝ FONKSÝYONU-KYK KREDÝSÝ FONKSÝYONU-KYK KREDÝSÝ FONKSÝYONU-KYK KREDÝSÝ FONKSÝYONU-KYK KREDÝSÝ FONKSÝYONU-KYK KREDÝSÝ FONKSÝYONU//
int kyk() {
	int devamodeme,devam;
	printf("Toplam KYK Kredisi borcunuz: 35.450 TL\n");
	printf("Bu ayki borcunuz: 650 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=650;
			printf("KYK Kredi borcunuz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//YURT ÖDEME FONKSÝYONU-YURT ÖDEME FONKSÝYONU-YURT ÖDEME FONKSÝYONU-YURT ÖDEME FONKSÝYONU-YURT ÖDEME FONKSÝYONU-YURT ÖDEME FONKSÝYONU-YURT ÖDEME FONKSÝYONU-YURT ÖDEME FONKSÝYONU//
int yurt() {
	int devamodeme,devam;
	printf("Bu ayki borcunuz: 150 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=150;
			printf("Yurt borcunuz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-ÜNÝVERSÝTE ÖDEME-//
int universite(){
	int devamodeme,devam,ilplaka,ogrencino;
	printf("Ödeme yapacaðýnýz üniversitenin il plaka kodunu giriniz:\n");
	scanf("%d",&ilplaka);
	if(ilplaka>=1 && ilplaka<=81){
	printf("Öðrenci numaranýzý giriniz:\n");
	scanf("%d",&ogrencino);
	printf("Bu ayki ödemeniz gereken üniversite harcý: 110 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
	switch(devamodeme) {
		case 1:
			bakiye-=110;
			printf("Üniversite harcýnýz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
			anamenu();
			}
			else{
			printf("Ýyi Günler Dileriz!");	
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
	printf("Ýl kodunu yanlýþ girdiniz!\n");
	universite();
	}
}
//MOTORLU TAÞITLAR VERGÝSÝ FONKSÝYONU-MOTORLU TAÞITLAR VERGÝSÝ FONKSÝYONU-MOTORLU TAÞITLAR VERGÝSÝ FONKSÝYONU-MOTORLU TAÞITLAR VERGÝSÝ FONKSÝYONU-MOTORLU TAÞITLAR VERGÝSÝ FONKSÝYONU//
int motor() {
	int devamodeme,devam;
	printf("Vergi Dönemi: 01/2021-02/2021 Plaka No: 06BGK06 Trafiðe Çýkýþ Tarihi: 11/12/2011\n");
	printf("Motorlu Taþýt Vergisi Tutarý: 450 TL Motorlu Taþýt Vergisi Faizi: 9,54 TL Toplam Tutar: 459,54 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=459,64;
			printf("Motorlu Taþýtlar Vergisi borcunuz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//TAPU FONKSÝYONU-TAPU FONKSÝYONU-TAPU FONKSÝYONU-TAPU FONKSÝYONU-TAPU FONKSÝYONU-TAPU FONKSÝYONU-TAPU FONKSÝYONU-TAPU FONKSÝYONU-TAPU FONKSÝYONU-TAPU FONKSÝYONU-TAPU FONKSÝYONU//
int tapu() {
    int devamodeme,devam;
    printf("Tapu Harcýnýz: 200 TL\n");
    printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
    scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=200;
			printf("Tapu Harcýnýz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//SÜRÜCÜ BELGESÝ FONKSÝYONU-SÜRÜCÜ BELGESÝ FONKSÝYONU-SÜRÜCÜ BELGESÝ FONKSÝYONU-SÜRÜCÜ BELGESÝ FONKSÝYONU-SÜRÜCÜ BELGESÝ FONKSÝYONU-SÜRÜCÜ BELGESÝ FONKSÝYONU-SÜRÜCÜ BELGESÝ FONKSÝYONU-//
int surucu() {
	int devamodeme,devam;
	printf("Sürücü Belgesi için ödemeniz gereken tutar: 988 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
    scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=988;
			printf("Sürücü Belgesi Harcýnýz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//DOÐUM FONKSÝYONU-DOÐUM FONKSÝYONU-DOÐUM FONKSÝYONU-DOÐUM FONKSÝYONU-DOÐUM FONKSÝYONU-DOÐUM FONKSÝYONU-DOÐUM FONKSÝYONU-DOÐUM FONKSÝYONU-DOÐUM FONKSÝYONU-DOÐUM FONKSÝYONU//
int dogum() {
	int devamodeme,devam;
	printf("Yeni kimlik kartý almanýz için ödemeniz gereken tutar: 30 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=30;
			printf("Yeni kimlik kartý borcunuz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//DEÐÝÞTÝRME FONKSÝYONU-DEÐÝÞTÝRME FONKSÝYONU-DEÐÝÞTÝRME FONKSÝYONU-DEÐÝÞTÝRME FONKSÝYONU-DEÐÝÞTÝRME FONKSÝYONU-DEÐÝÞTÝRME FONKSÝYONU-DEÐÝÞTÝRME FONKSÝYONU-DEÐÝÞTÝRME FONKSÝYONU//
int degistirme() {
	int devamodeme,devam;
	printf("Yeni kimlik kartý almanýz için ödemeniz gereken tutar: 35 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
	    case 1:
			bakiye-=35;
			printf("Yeni kimlik kartý borcunuz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
		if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
			anamenu();
		break;			
	}
}
//KAYIP FONKSÝYONU-KAYIP FONKSÝYONU-KAYIP FONKSÝYONU-KAYIP FONKSÝYONU-KAYIP FONKSÝYONU-KAYIP FONKSÝYONU-KAYIP FONKSÝYONU-KAYIP FONKSÝYONU-KAYIP FONKSÝYONU-KAYIP FONKSÝYONU//
int kayip() {
	int devamodeme,devam;
	printf("Yeni kimlik kartý almanýz için ödemeniz gereken tutar: 45 TL\n");
	printf("Ödemek için 1'i, Ana Menüye dönmek için 2'yi tuþlayýnýz.\n");
	scanf("%d",&devamodeme);
    switch(devamodeme) {
		case 1:
			bakiye-=45;
			printf("Yeni kimlik kartý borcunuz ödenmiþtir. Kalan bakiye: %.2f TL\n",bakiye);
			printf("Ana menüye dönmek için 1 , Çýkmak için 2 ye basýnýz.\n");
    		scanf("%d",&devam);
			if(devam==1){
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
					anamenu();
					}
					else{
					printf("Ýyi Günler Dileriz!");	
					printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-");
					}
		break;
		case 2:
			printf("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n\n");
		    anamenu();
		break;			
	}
}
