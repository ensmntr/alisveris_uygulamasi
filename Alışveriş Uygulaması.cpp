#include <stdio.h>                                            
#include <conio.h>
#include <stdlib.h>

int main(){
	
	/* secim1: Kullanýcýnýn baþlangýçta hangi iþlemi yapmak istediðini belirleyen deðiþken
	   secim2: Karar verilen iþlem sonucunda kullanýcýnýn hangi kategorideki ürünü seçmek istediðini belirleyen deðiþken
	   secim3: Belirlenen kategorideki ürünlerden hangisinin seçildiðini belirleyen deðiþken
	*/
	
int secim1,secim2,secim3;
float toplamsepettutari;		
int i=0;	
	
	printf("\t\t\t\t******************ABC ELEKTRONIK*****************\n");
	printf("\t\t\t\t\t-----------HOSGELDINIZ------------\n");	

while(i==0){
	
//Önce kullanýcýya hangi iþlemi yapmak istediðini soruyoruz	

printf("\n**************************\n1-Urun fiyati sorgulama\n2-Sepete urun ekle\n3-Siparis tamamla\n4-Sonlandir\n**************************\nSeciminiz:");
scanf("%d",&secim1);

if(secim1==1){  // kullanýcý ürün ve fiyat sorgulamak isterse aþaðýdaki iþlemleri yapar
	
	while(secim1==1){
			
		printf("\n*****************************\nHangi kategoriden urun ve fiyat sorgulamak istiyorsunuz?\n1-Akilli Telefon\n2-Akilli saat\n3-Yazici\n4-Bilgisayar\n**************************\nSeciminiz:");
		scanf("%d",&secim2);
		
		
		switch(secim2){
			
		    case 1: // kullanýcý akýllý telefon fiyatlarýný sorgulamak isterse bunlarý ekrana yazdýrýr
		   	 
			   printf("\n\n*****************************\n1-Akilli telefon-1    1500TL\n2-Akilli telefon-2    2750TL\n3-Akilli telefon-3    8832TL\n**************************\n1-Baska Kategoride Urun Sorgula\n2-Ana Menuye Don\n**************************\nSeciminiz: ");
			
			   break;	
			
     		case 2: // kullanýcý akýllý saat fiyatlarýný sorgulamak isterse bunlarý ekrana yazdýrýr
     			     	
			    printf("\n\n*****************************\n1-Akilli saat-1    543.99TL\n2-Akilli saat-2    1324.50TL\n3-Akilli saat-3    850TL\n**************************\n1-Baska Kategoride Urun Sorgula\n2-Ana Menuye Don\n**************************\nSeciminiz: ");
						                
				break;
				
			case 3: // kullanýcý yazýcý fiyatlarýný sorgulamak isterse bunlarý ekrana yazdýrýr
				
				printf("\n\n*****************************\n1-Yazici-A    553.50TL\n2-Yazici-B    848.20TL\n3-Yazici-C    1433.33TL\n**************************\n1-Baska Kategoride Urun Sorgula\n2-Ana Menuye Don\n**************************\nSeciminiz: ");
					
				break;
				
			case 4: // kullanýcý bilgisayar telefon fiyatlarýný sorgulamak isterse bunlarý ekrana yazdýrýr
				
				printf("\n\n*****************************\n1-Bilgisayar-X    14600TL\n2-Bilgisayar-Y    12964TL\n3-Bilgisayar-Z    22920TL\n4-Bilgisayar-Q    36123TL\n**************************\n1-Baska Kategoride Urun Sorgula\n2-Ana Menuye Don\n**************************\nSeciminiz: ");
			
				break;
				                                         
			default: //kullanýcý geçersiz bir karakter girerse bunu ekrana yazdýrýr
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;

		} 		
		
	
		scanf("%d",&secim1);	
				
				
		}
		
							
}

else if(secim1==2){ // kullanýcý sepete ürün eklemek isterse aþaðýdaki iþlemleri yapar
	
	while(secim1==2){
		
		printf("\n\n*****************************\nHangi kategoriden urun eklemek istiyorsunuz?\n1-Akilli Telefon\n2-Akilli saat\n3-Yazici\n4-Bilgisayar\n*****************************\nSeciminiz:");
		scanf("%d",&secim2);
		
		
		
	switch(secim2){
			
			case 1: // kullanýcý akýllý telefon kategorisinden bir ürünü seçmek isterse seçebileceði telefonlarý ekrana yazdýrýr
			
				printf("\n*****************************\nAkilli telefon urunlerinden hangisini sepete eklemek istersiniz?\n1-Akilli telefon-1    1500TL\n2-Akilli telefon-2    2750TL\n3-Akilli telefon-3    88832TL\n*****************************\nSeciminiz: ");
			    scanf("%d",&secim3);
				
							
	    switch(secim3){
			
			case 1: //kullanýcý 1 numaralý telefonu seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr
			
				toplamsepettutari=toplamsepettutari+1500;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
				
				break;
				
			case 2: //kullanýcý 2 numaralý telefonu seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr
			
				toplamsepettutari=toplamsepettutari+2750;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
					
				break;
			
			case 3: //kullanýcý 3 numaralý telefonu seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr
			
				toplamsepettutari=toplamsepettutari+8832;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
			
			    break;
			    
			default: //kullanýcý geçersiz bir karakter girerse bunu ekrana yazdýrýr
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;
			
		}
		
			break;
			
			case 2: // kullanýcý akýllý saat kategorisinden bir ürünü seçmek isterse seçebileceði saatleri ekrana yazdýrýr
				
				printf("\n*****************************\nAkilli saat urunlerinden hangisini sepete eklemek istersiniz?\n1-Akilli saat-1    543.99TL\n2-Akilli saat-2    1324.50TL\n3-Akilli saat-3    850TL\n*****************************\nSeciminiz: ");
				scanf("%d",&secim3);
				
			
	    switch(secim3){
			
			case 1: //kullanýcý 1 numaralý saati seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
			 
				toplamsepettutari=toplamsepettutari+543.99;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
				
			    break;
				
			case 2: //kullanýcý 2 numaralý saati seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
			
				toplamsepettutari=toplamsepettutari+1324.50;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
				
				break;
			
			case 3: //kullanýcý 3 numaralý saati seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
			 
				toplamsepettutari=toplamsepettutari+850;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);
				
				break;
				
			default: //kullanýcý geçersiz bir karakter girerse bunu ekrana yazdýrýr
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;
		}
			
			break;
			
			
			case 3: // kullanýcý yazýcý kategorisinden bir ürünü seçmek isterse seçebileceði yazýcýlarý ekrana yazdýrýr
			
				printf("\n*****************************\nYazici urunlerinden hangisini sepete eklemek istersiniz?\n1-Yazici-A    553.50TL\n2-Yazici-B    848.20TL\n3-Yazici-C    1433.33TL\n*****************************\nSeciminiz: ");
				scanf("%d",&secim3);
				
		switch(secim3){
			
			case 1: //kullanýcý 1 numaralý yazýcýyý seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
	 
				toplamsepettutari=toplamsepettutari+553.50;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
			
		        break;
			
			
			case 2: //kullanýcý 2 numaralý yazýcýyý seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
			
				toplamsepettutari=toplamsepettutari+848.20;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
				
			    break;
			
			case 3: //kullanýcý 3 numaralý yazýcýyý seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
			
				toplamsepettutari=toplamsepettutari+1433.33;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);		
				
				break;
				
			default: //kullanýcý geçersiz bir karakter girerse bunu ekrana yazdýrýr
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;	
			
		}
		
	          break;
		
			case 4: // kullanýcý bilgisayar kategorisinden bir ürünü seçmek isterse seçebileceði bilgisayarlarý ekrana yazdýrýr
				
			    printf("\n*****************************\nBilgisayar urunlerinden hangisini sepete eklemek istersiniz?\n1-Bilgisayar-X    14600TL\n2-Bilgisayar-Y    12964TL\n3-Bilgisayar-Z    22920TL\n4-Bilgisayar-Q    36123TL\n*****************************\nSeciminiz: ");
				scanf("%d",&secim3);
			
	    switch(secim3){
			
		    case 1: //kullanýcý 1 numaralý bilgisayarý seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
			 
				toplamsepettutari=toplamsepettutari+14600;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
				
			    break;
				
			case 2: //kullanýcý 2 numaralý bilgisayarý seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
				 
				toplamsepettutari=toplamsepettutari+12964;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);			
				
				break;
			
			case 3: //kullanýcý 3 numaralý bilgisayarý seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
			
				toplamsepettutari=toplamsepettutari+22920;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);		
				
				break;
			
			case 4: //kullanýcý 4 numaralý bilgisayarý seçerse telefonun fiyatýný toplam sepet tutarýna ekleyerek bunu ekrana yazdýrýr 
			
				toplamsepettutari=toplamsepettutari+36123;
				printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL \n*****************************\n 1- Ana Menuye Don  \n 2- Sepete urun Ekle\n*****************************\nSeciminiz: ", toplamsepettutari);		
				
				break;
				
			default: //kullanýcý geçersiz bir karakter girerse bunu ekrana yazdýrýr
	
	            printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	            break;
				
		    }
		
		    break;
				
			
	}
	
	scanf("%d",&secim1);
}
	
}
else if(secim1==3){ //kullanýcý sipariþini tamamlamak isterse toplam sepet tutarýný ekrana yazdýrýr
	
	while(secim1==3){
		
		printf("\n\n*****************************\nToplam Sepet Tutariniz: %.2fTL\n***************************** ", toplamsepettutari);
		scanf("%d",&secim2);
		
	}		
}	

else if(secim1==4){ //kullanýcý programý sonlandýrmak isterse aþaðýdakileri ekrana yazdýrýr ve programý sonlandýrýr
		
		printf("\n\t\t\t\t\t*************************************\n\t\t\t\t\t\tIyi Gunler dileriz :)\n\t\t\t\t\t       Program sonlandiriliyor...\n\t\t\t\t\t*************************************");
		
		break;
				
}

else{  //kullanýcý geçersiz bir karakter girerse bunu ekrana yazdýrýr
	
	    printf("\n\n*****************************\nGecersiz secenek girdiniz\n*****************************");
	
	    break;
}


}


}






