#include <stdio.h>                                            
#include <conio.h>
#include <stdlib.h>

int main(){
	
	/* secim1: Kullan�c�n�n ba�lang��ta hangi i�lemi yapmak istedi�ini belirleyen de�i�ken
	   secim2: Karar verilen i�lem sonucunda kullan�c�n�n hangi kategorideki �r�n� se�mek istedi�ini belirleyen de�i�ken
	   secim3: Belirlenen kategorideki �r�nlerden hangisinin se�ildi�ini belirleyen de�i�ken
	*/
	
int secim1,secim2,secim3;
float toplamsepettutari;		
int i=0;	
	
	printf("\t\t\t\t******************ABC ELEKTRONIK*****************\n");
	printf("\t\t\t\t\t-----------HOSGELDINIZ------------\n");	

while(i==0){
	
//�nce kullan�c�ya hangi i�lemi yapmak istedi�ini soruyoruz	

printf("\n**************************\n1-Urun fiyati sorgulama\n2-Sepete urun ekle\n3-Siparis tamamla\n4-Sonlandir\n**************************\nSeciminiz:");
scanf("%d",&secim1);

if(secim1==1){  // kullan�c� �r�n ve fiyat sorgulamak isterse a�a��daki i�lemleri yapar
	
	while(secim1==1){
			
		printf("\n*****************************\nHangi kategoriden urun ve fiyat sorgulamak istiyorsunuz?\n1-Akilli Telefon\n2-Akilli saat\n3-Yazici\n4-Bilgisayar\n**************************\nSeciminiz:");
		scanf("%d",&secim2);
		
		
		switch(secim2){
			
		    case 1: // kullan�c� ak�ll� telefon fiyatlar�n� sorgulamak isterse bunlar� ekrana yazd�r�r
		   	 
			   printf("\n\n*****************************\n1-Akilli telefon-1    1500TL\n2-Akilli telefon-2    2750TL\n3-Akilli telefon-3    8832TL\n**************************\n1-Baska Kategoride Urun Sorgula\n2-Ana Menuye Don\n**************************\nSeciminiz: ");
			
			   break;	
			
     		case 2: // kullan�c� ak�ll� saat fiyatlar�n� sorgulamak isterse bunlar� ekrana yazd�r�r
     			     	
			    printf("\n\n*****************************\n1-Akilli saat-1    543.99TL\n2-Akilli saat-2    1324.50TL\n3-Akilli saat-3    850TL\n**************************\n1-Baska Kategoride Urun Sorgula\n2-Ana Menuye Don\n**************************\nSeciminiz: ");
						                
				break;
				
			case 3: // kullan�c� yaz�c� fiyatlar�n� sorgulamak isterse bunlar� ekrana yazd�r�r
				
				printf("\n\n*****************************\n1-Yazici-A    553.50TL\n2-Yazici-B    848.20TL\n3-Yazici-C    1433.33TL\n**************************\n1-Baska Kategoride Urun Sorgula\n2-Ana Menuye Don\n**************************\nSeciminiz: ");
					
				break;
				
			case 4: // kullan�c� bilgisayar telefon fiyatlar�n� sorgulamak isterse bunlar� ekrana yazd�r�r
				
				printf("\n\n*****************************\n1-Bilgisayar-X    14600TL\n2-Bilgisayar-Y    12964TL\n3-Bilgisayar-Z    22920TL\n4-Bilgisayar-Q    36123TL\n**************************\n1-Baska Kategoride Urun Sorgula\n2-Ana Menuye Don\n**************************\nSeciminiz: ");
			
				break;
				                                         
			default: //kullan�c� ge�ersiz bir karakter girerse bunu ekrana yazd�r�r
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;

		} 		
		
	
		scanf("%d",&secim1);	
				
				
		}
		
							
}

else if(secim1==2){ // kullan�c� sepete �r�n eklemek isterse a�a��daki i�lemleri yapar
	
	while(secim1==2){
		
		printf("\n\n*****************************\nHangi kategoriden urun eklemek istiyorsunuz?\n1-Akilli Telefon\n2-Akilli saat\n3-Yazici\n4-Bilgisayar\n*****************************\nSeciminiz:");
		scanf("%d",&secim2);
		
		
		
	switch(secim2){
			
			case 1: // kullan�c� ak�ll� telefon kategorisinden bir �r�n� se�mek isterse se�ebilece�i telefonlar� ekrana yazd�r�r
			
				printf("\n*****************************\nAkilli telefon urunlerinden hangisini sepete eklemek istersiniz?\n1-Akilli telefon-1    1500TL\n2-Akilli telefon-2    2750TL\n3-Akilli telefon-3    88832TL\n*****************************\nSeciminiz: ");
			    scanf("%d",&secim3);
				
							
	    switch(secim3){
			
			case 1: //kullan�c� 1 numaral� telefonu se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r
			
				toplamsepettutari=toplamsepettutari+1500;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
				
				break;
				
			case 2: //kullan�c� 2 numaral� telefonu se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r
			
				toplamsepettutari=toplamsepettutari+2750;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
					
				break;
			
			case 3: //kullan�c� 3 numaral� telefonu se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r
			
				toplamsepettutari=toplamsepettutari+8832;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
			
			    break;
			    
			default: //kullan�c� ge�ersiz bir karakter girerse bunu ekrana yazd�r�r
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;
			
		}
		
			break;
			
			case 2: // kullan�c� ak�ll� saat kategorisinden bir �r�n� se�mek isterse se�ebilece�i saatleri ekrana yazd�r�r
				
				printf("\n*****************************\nAkilli saat urunlerinden hangisini sepete eklemek istersiniz?\n1-Akilli saat-1    543.99TL\n2-Akilli saat-2    1324.50TL\n3-Akilli saat-3    850TL\n*****************************\nSeciminiz: ");
				scanf("%d",&secim3);
				
			
	    switch(secim3){
			
			case 1: //kullan�c� 1 numaral� saati se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
			 
				toplamsepettutari=toplamsepettutari+543.99;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
				
			    break;
				
			case 2: //kullan�c� 2 numaral� saati se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
			
				toplamsepettutari=toplamsepettutari+1324.50;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
				
				break;
			
			case 3: //kullan�c� 3 numaral� saati se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
			 
				toplamsepettutari=toplamsepettutari+850;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
				
				break;
				
			default: //kullan�c� ge�ersiz bir karakter girerse bunu ekrana yazd�r�r
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;
		}
			
			break;
			
			
			case 3: // kullan�c� yaz�c� kategorisinden bir �r�n� se�mek isterse se�ebilece�i yaz�c�lar� ekrana yazd�r�r
			
				printf("\n*****************************\nYazici urunlerinden hangisini sepete eklemek istersiniz?\n1-Yazici-A    553.50TL\n2-Yazici-B    848.20TL\n3-Yazici-C    1433.33TL\n*****************************\nSeciminiz: ");
				scanf("%d",&secim3);
				
		switch(secim3){
			
			case 1: //kullan�c� 1 numaral� yaz�c�y� se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
	 
				toplamsepettutari=toplamsepettutari+553.50;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
			
		        break;
			
			
			case 2: //kullan�c� 2 numaral� yaz�c�y� se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
			
				toplamsepettutari=toplamsepettutari+848.20;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
				
			    break;
			
			case 3: //kullan�c� 3 numaral� yaz�c�y� se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
			
				toplamsepettutari=toplamsepettutari+1433.33;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);		
				
				break;
				
			default: //kullan�c� ge�ersiz bir karakter girerse bunu ekrana yazd�r�r
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;	
			
		}
		
	          break;
		
			case 4: // kullan�c� bilgisayar kategorisinden bir �r�n� se�mek isterse se�ebilece�i bilgisayarlar� ekrana yazd�r�r
				
			    printf("\n*****************************\nBilgisayar urunlerinden hangisini sepete eklemek istersiniz?\n1-Bilgisayar-X    14600TL\n2-Bilgisayar-Y    12964TL\n3-Bilgisayar-Z    22920TL\n4-Bilgisayar-Q    36123TL\n*****************************\nSeciminiz: ");
				scanf("%d",&secim3);
			
	    switch(secim3){
			
		    case 1: //kullan�c� 1 numaral� bilgisayar� se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
			 
				toplamsepettutari=toplamsepettutari+14600;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
				
			    break;
				
			case 2: //kullan�c� 2 numaral� bilgisayar� se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
				 
				toplamsepettutari=toplamsepettutari+12964;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
				
				break;
			
			case 3: //kullan�c� 3 numaral� bilgisayar� se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
			
				toplamsepettutari=toplamsepettutari+22920;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);		
				
				break;
			
			case 4: //kullan�c� 4 numaral� bilgisayar� se�erse telefonun fiyat�n� toplam sepet tutar�na ekleyerek bunu ekrana yazd�r�r 
			
				toplamsepettutari=toplamsepettutari+36123;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);		
				
				break;
				
			default: //kullan�c� ge�ersiz bir karakter girerse bunu ekrana yazd�r�r
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;
				
		    }
		
		    break;
				
			
	}
	
	scanf("%d",&secim1);
}
	
}
else if(secim1==3){ //kullan�c� sipari�ini tamamlamak isterse toplam sepet tutar�n� ekrana yazd�r�r
	
	while(secim1==3){
		
		printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL\n***************************** ", toplamsepettutari);
		scanf("%d",&secim2);
		
	}		
}	

else if(secim1==4){ //kullan�c� program� sonland�rmak isterse a�a��dakileri ekrana yazd�r�r ve program� sonland�r�r
		
		printf("\n\t\t\t\t\t*************************************\n\t\t\t\t\t\tIyi Gunler dileriz :)\n\t\t\t\t\t       Program sonlandiriliyor...\n\t\t\t\t\t*************************************");
		
		break;
				
}

else{  //kullan�c� ge�ersiz bir karakter girerse bunu ekrana yazd�r�r
	
	    printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	    break;
}


}


}






