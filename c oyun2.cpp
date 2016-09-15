#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
   // profil market savaþ nasýl oynanýr çýkýþ

void menu(void); 
void profil(int);
void market(int);
void savas(int can1 , int can2 ,int w1,int w2 );
int yazitura(void); 
void nasiloynanir(void); 


 char *kontrol[]={"ok","yay","yay eklentisi","sapka","mont","ayakkabi","kilic","kilic eklentisi","kalkan","kask","zirh","binek"};
 
 char *ok[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *yay[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *yayek[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *sapka[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *mont[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *ayakkabi[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *kilic[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *kilicek[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *kalkan[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *migfer[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"}; 
 char *zirh[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"};
 char *binek[]={"Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor","Bulunmuyor"}; 
 int yeniceri[7] = { 0 };
 int atak[7]= { 10,10,10,10,10,10,10};
 int can[7] = { 50,50,50,50,50,50,50};
 int para[7] = { 1000,1000000,1000,1000,1000,1000,1000};
 int bonus[7] = { 0 } ;
    
int main()
{
    srand(time(NULL));

    

          menu();     
  
         return getch();
}


void menu(void)
{  system("CLS");
      fflush(stdin);
       printf("    *************  HENUZ ISMI OLMAYAN OYUN  *************  \n\n");  
      int secim,oyuncu,oyun2,c;
       printf("Oyun max. 6 kisiliktir.\n Profile bakmak icin => 1 'e \n Markete gitmek icin => 2 'e \n Savasmak icin => 3 'e \n Nasil oynanir icin => 4 'e \n Cikis icin => 5 'e \n"); 
       scanf("%d",&secim);
   
    switch(secim)
    {
                 case 1:
                      printf("\n Kacinci oyuncunun profiline bakacaksiniz : \n");
                      scanf("%d",&oyuncu);
                     if( oyuncu <= 6 && 1 <= oyuncu )
                      profil(oyuncu);break;
                 case 2: printf("\n Kacinci oyuncu icin markete gideceksiniz : \n");
                      scanf("%d",&oyuncu);
                      if( oyuncu <= 6 && 1 <= oyuncu )
                      market(oyuncu);break;
                 case 3: printf("\n Kacinci oyuncu savas aciyor : \n");
                      scanf("%d",&oyuncu);
                      printf("\n Kacinci oyuncuya savas aciliyor : \n");
                      scanf("%d",&oyun2);
                      if( oyuncu <= 6 && 1 <= oyuncu && oyun2 <= 6 && 1 <= oyun2 && oyun2 != oyuncu )
                      savas(can[oyuncu],can[oyun2],oyuncu,oyun2);
                      break;
                 case 4 : nasiloynanir(); break;
                 case 5 : c = 0;
                  goto bitis;
                      
                      default : printf(" Gecersiz secim  ");
                             }   
  menu();
 
  bitis:
        while(c < 1)
 {printf(" Oyundan cikiyorsunuz !!!");c++;}
 }


void profil(int w)
{  
      system("CLS");
   
     int a;
      printf("*** Oyuncunun Profili***\n\n");
      
     for( a = 0; a <= 11; a++)
        printf("  %-14s: %15s\n ",kontrol[a], a == 0 ?  ok[w] : a == 1 ? yay[w] : a == 2 ? yayek[w] : a == 3 ? sapka[w] : a == 4 ? mont[w] : a == 5 ? ayakkabi[w] : a == 6 ? kilic[w] : a == 7 ? kilicek[w] : a == 8 ? kalkan[w] : a == 9 ? migfer[w] : a == 10 ? zirh[w] : binek[w] );
     
     printf("\n\n Can : %i  \n Para : %i \n Atak : %i \n",can[w],para[w],atak[w]);                 
     
     printf("\n\n Ana menuye donmek icin bir tusa basin : \n");
     getch();
      
    
     }


void market(int w2)
{
     system("CLS");
     
     char alsat;
     int uruncesit,urunno,a,b;
     
     fflush(stdin);
    
     printf("*** Markete hosgeldiniz ***\n\n Alis yapmak icin 'a' tusna satis yapmak icin 's' menuye donmek icin 'm' tusuna basin\n\n   ");
     if(!yeniceri[w2])
     printf("\n\nYenicerilige gecmek icin y tusuna basin.Masrafi : 5000 \n"); 
     scanf("%c",&alsat);
     
     if( alsat == 'y' || alsat == 'Y')
       {if(!yeniceri[w2])
       {if(para[w2]-5000 > 100)
       {yeniceri[w2] = 1;para[w2] -= 5000;printf("Tebrikler   artik yenicerisiniz.  ");goto son;}
       else
       {printf("Uzgunuz paraniz yetmedi.    ");goto son;}
       }else
       {printf("Zaten yenicerisiniz.   ");
       goto son;}
        }
     if(alsat == 'M' || alsat == 'm')
     goto son;
     if( alsat != 'a' && alsat != 'A' && alsat != 's' && alsat != 'S' )
     {printf("Gecersiz secim   ");goto son;}
     
     if(alsat == 'a' || alsat == 'A')
     {
              printf("\n\n");
              
              for(a = 0; a <= 11; a++)
                 printf(" %s icin %i'e   %s   \n",kontrol[a],a,a > 5 ? "(Bu esya icin yenicerilige gecmis olmaniz gerekir.)" : " ");
              
              printf("\nAlmak istediginiz urunun cesitlerini gormek icin yanindaki sayiyi giriniz :\n(Menuye donmek icin -1)\n\n");
              scanf("%d",&uruncesit);
             if(uruncesit == -1)
             goto son; 

             
              system("CLS");
            
              switch(uruncesit)  // "ok","yay","yay eklentisi","sapka","mont","ayakkabi","kilic","kilic eklentisi","kalkan","kask","zirh","ejderha"
              {                // ok seçilirse
                                 case 0:   printf(" Dandik ok  (100 TL & 1 Atak) icin 1 e \n Saglam ok (250Tl & 3 Atak) icin 2 ye\n");
                                           printf(" Celik ok  (500 TL & 5 Atak) icin 3 e \n Mavi ok (1000Tl & 7 Atak) icin 4 e\n");  
                                           printf(" Kirmizi ok  (2000 TL & 10 Atak) icin 5 e \n Elmas ok (3000Tl & 12 Atak) icin 6 ya \n menuye donmek icin -1 e basin\n ");
                                         
                                           scanf("%i",&urunno);
                                         
                                           if(urunno == -1)
                                           goto son; 
                                          if( urunno == 1)
                                              { if( para[w2] - 100 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(ok[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                      goto son; }
                                                        ok[w2] = "Dandik ok";
                                                para[w2] -= 100;
                                                atak[w2] += 1;
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                            // 2. oku seçerse
                                             if( urunno == 2)
                                              { if( para[w2] - 250 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(ok[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                      goto son; }
                                                        ok[w2] = "Saglam ok";
                                                para[w2] -= 250;
                                                atak[w2] += 3;
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                      // 3. oku seçerse
                                             if( urunno == 3)
                                              { if( para[w2] - 500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(ok[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        ok[w2] = "Celik ok";
                                                 para[w2] -= 500;
                                              atak[w2] += 5;
                                              
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                      // 4. oku seçerse
                                             if( urunno == 4)
                                              { if( para[w2] - 1000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                 if(ok[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                 ok[w2] = "Mavi ok";
                                              
                                                para[w2] -= 1000;
                                                atak[w2] += 7;
                                                  
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                      // 5. oku seçerse
                                             if( urunno == 5)
                                              { if( para[w2] - 2000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                if(ok[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                 ok[w2]= "Kýrmýzý ok";
                                                  
                                                 para[w2] -= 2000;
                                                 atak[w2] += 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                      // 6. oku seçerse
                                             if( urunno == 6)
                                              { if( para[w2] - 3000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                if(ok[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                 ok[w2]= "Elmas ok";
                                                  
                                                 para[w2] -= 3000;
                                                 atak[w2] += 12; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }goto son; 
                          // yay seçilirse
                          case 1:         printf(" Dandik yay (100 TL & 1 Atak) icin 1 e \n Saglam yay (500Tl & 3 Atak) icin 2 ye\n");
                                           printf(" Sari-Kirmizi yay  (1000 TL & 5 Atak) icin 3 e \n Tas yay (2000Tl & 7 Atak) icin 4 e\n");  
                                           printf(" Altin yay  (3000 TL & 10 Atak) icin 5 e \n Efsane yay (4000Tl & 12 Atak) icin 6 ya \n menuye donmek icin -1 e basin\n ");
                                           scanf("%i",&urunno);
                                                     
                                          if(urunno == -1)
                                           goto son; 
                                            
                                            if( urunno == 1)
                                              { if( para[w2]- 100 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(yay[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        yay[w2]= "Dandik yay";
                                                  
                                                 para[w2]-= 100;
                                                 atak[w2] += 1; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }
                                        // 2. yay seçilirse
                                        if( urunno == 2)
                                              { if( para[w2]- 500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(yay[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        yay[w2]= "Saglam yay";
                                                  
                                                 para[w2]-= 500;
                                                 atak[w2] += 3; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                      // 3. yay seçilirse
                                        if( urunno == 3)
                                              { if( para[w2]- 1000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(yay[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        yay[w2]= "Sari-Kirmizi yay";
                                                  
                                                 para[w2]-= 1000;
                                                 atak[w2] += 5; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                 
                                                    }
                                             // 4. yay seçilirse
                                        if( urunno == 4)
                                              { if( para[w2]- 2000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(yay[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        yay[w2]= "Tas yay";
                                                  
                                                 para[w2]-= 2000;
                                                 atak[w2] += 7; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                      // 5. yay seçilirse
                                        if( urunno == 5)
                                              { if( para[w2]- 3000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(yay[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        yay[w2]= "Altin yay";
                                                  
                                                 para[w2] -= 3000;
                                                 atak[w2] += 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                                      // 6. yay seçilirse
                                        if( urunno == 6)
                                              { if( para[w2]- 4000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(yay[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        yay[w2]= "Efsane yay";
                                                  
                                                 para[w2] -= 4000;
                                                 atak[w2] += 12;
                                                          
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }goto son; 
                          
                           // yay eklentisi seçilirse
                          case 2:         printf(" Hedef (1000 TL & 3 Atak) icin 1 e \n Parmaklik (1500Tl & 5 Atak) icin 2 ye\n"); 
                                           printf(" Lazer  (3000 TL & 10 Atak) icin 3 e \n menuye donmek icin -1 e basin\n ");
                                           scanf("%i",&urunno);
                                                     
                                          if(urunno == -1)
                                           goto son; 
                                            
                                            if( urunno == 1)
                                              { if( para[w2]- 1000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(yay[w2] == "Bulunmuyor")
                                                  {printf("Yay olmadan yay eklentisi alamazsiniz. \n ");goto son;}
                                                       
                                                        yayek[w2]  = "Hedef";
                                                      
                                                  
                                                 para[w2]-= 1000;
                                                 atak[w2] += 3; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                                 
                                                   if( urunno == 2)
                                              { if( para[w2]- 1500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                    if(yay[w2] == "Bulunmuyor")
                                                  {printf("Yay olmadan yay eklentisi alamazsiniz. \n ");goto son;}
                                                        yayek[w2]  = "Parmaklik";
                                                  
                                                 para[w2]-= 1500;
                                                 atak[w2] += 5; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                      if( urunno == 3)
                                              { if( para[w2]- 3000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                    if(yay[w2] == "Bulunmuyor")
                                                  {printf("Yay olmadan yay eklentisi alamazsiniz. \n ");goto son;}
                                                        yayek[w2] = "Lazer";
                                                  
                                                 para[w2]-= 3000;
                                                 atak[w2] += 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }goto son; 
                                                    //  Sapka secilirse
                               case 3:         printf(" Dandik sapka (200 TL & 5 Can) icin 1 e \n Saglam sapka (500 Tl & 10 Can) icin 2 ye\n");
                                           printf(" Avci sapkasi  (1500 TL & 20 Can) icin 3 e \n Usta sapkasi (2500Tl & 30 Can) icin 4 e\n");  
                                           printf(" Efsane sapka  (4000 TL & 50 Can) icin 5 e \n ana menuye donmek icin -1 e basin\n ");
                                           scanf("%i",&urunno);
                                                     
                                          if(urunno == -1)
                                           goto son; ;
                                            
                                            if( urunno == 1)
                                              { if( para[w2]- 200 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(sapka[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        sapka[w2] = "Dandik sapka";
                                                  
                                                 para[w2]-= 200;
                                                  can[w2]+= 5; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                               goto son;                                                  
                                                    }
                                        // 2. sapka seçilirse
                                            if( urunno == 2 )
                                              { if( para[w2]- 500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(sapka[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        sapka[w2] = "Saglam sapka";
                                                  
                                                 para[w2]-= 500;
                                                  can[w2]+= 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }
                                               // 3. sapka seçilirse
                                            if( urunno == 3 )
                                              { if( para[w2]- 1500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(sapka[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        sapka[w2] = "Avci sapkasi";
                                                  
                                                 para[w2]-= 1500;
                                                  can[w2]+= 20; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                            
                                        // 4. sapka seçilirse
                                            if( urunno == 4 )
                                              { if( para[w2]- 2500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(sapka[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        sapka[w2] = "Usta sapkasi";
                                                  
                                                 para[w2]-= 2500;
                                                  can[w2]+= 30; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                           // 5. sapka seçilirse
                                            if( urunno == 5 )
                                              { if( para[w2]- 4000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(sapka[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        sapka[w2] = "Efsane sapka";
                                                  
                                                 para[w2]-= 4000;
                                                  can[w2]+= 50; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }goto son; 
                               // mont için
                                case 4:         printf(" Dandik mont (500 TL & 10 Can) icin 1 e \n Saglam mont (1500 Tl & 20 Can) icin 2 ye\n");
                                           printf(" Mavi mont  (2500 TL & 30 Can) icin 3 e \n Yesil mont (4000Tl & 45 Can) icin 4 e\n");  
                                           printf(" Efsane mont  (6500 TL & 60 Can) icin 5 e \n ana menuye donmek icin -1 e basin\n ");
                                           scanf("%i",&urunno);
                                                     
                                          if(urunno == -1)
                                          goto son; 
                                            
                                            if( urunno == 1)
                                              { if( para[w2]- 500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(mont[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        mont[w2] = "Dandik mont";
                                                  
                                                 para[w2]-= 500;
                                                  can[w2]+= 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                        // 2. mont seçilirse 
                                            if( urunno == 2 )
                                                 { if( para[w2]- 500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(mont[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                       mont[w2] = "Saglam mont"; 
                                                  
                                                 para[w2]-= 500;
                                                  can[w2]+= 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                               // 3. mont seçilirse 
                                            if( urunno == 3 )
                                                { if( para[w2]- 2500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(mont[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                       mont[w2] = "Mavi mont";
                                                  
                                                 para[w2]-= 2500;
                                                  can[w2]+= 30; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                 
                                                    }
                                            
                                        // 4. mont seçilirse
                                            if( urunno == 4 )
                                              { if( para[w2]- 4000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(mont[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        mont[w2] = "Yesil mont";
                                                  
                                                 para[w2]-= 4000;
                                                  can[w2]+= 45; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                 
                                                    }
                                           // 5. mont seçilirse
                                            if( urunno == 5 )
                                              { if( para[w2]- 6500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(mont[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        mont[w2] = "Efsane mont";
                                                  
                                                 para[w2]-= 6500;
                                                  can[w2]+= 60; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                
                                                    }goto son; 
                                          // ayakkabý için           
                           case 5:         
                                           printf(" Dandik ayakkabi (100 TL & 5 Can) icin 1 e \n Kurk ayakkabi (500 Tl & 10 Can) icin 2 ye\n");
                                           printf(" Deri ayakkabi  (1500 TL & 20 Can) icin 3 e \n Ates ayakkabisi (2500Tl & 30 Can) icin 4 e\n");  
                                           printf(" Efsane ayakkabi  (4000 TL & 50 Can) icin 5 e \n ana menuye donmek icin -1 e basin\n ");
                                           scanf("%i",&urunno);
                                                     
                                          if(urunno == -1)
                                          goto son; 
                                           
                                            // 1 seçilirse
                                            if( urunno == 1)
                                              { if( para[w2]- 100 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(ayakkabi[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        ayakkabi[w2] = "Dandik ayakkabi";
                                                  
                                                 para[w2]-= 100;
                                                  can[w2]+= 5; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                                    // 2 seçilirse
                                            if( urunno == 2)
                                              { if( para[w2]- 500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(ayakkabi[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        ayakkabi[w2] = "Kurk ayakkabi";
                                                  
                                                 para[w2]-= 500;
                                                  can[w2]+= 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                    // 3 seçilirse
                                            if( urunno == 3)
                                              { if( para[w2]- 1500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(ayakkabi[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        ayakkabi[w2] = "Deri ayakkabi";
                                                  
                                                 para[w2]-= 1500;
                                                  can[w2]+= 20; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                    // 4 seçilirse
                                            if( urunno == 4)
                                              { if( para[w2]- 2500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(ayakkabi[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        ayakkabi[w2] = "Ates ayakkabisi";
                                                  
                                                 para[w2]-= 2500;
                                                  can[w2]+= 30; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                                    // 5 seçilirse
                                            if( urunno == 5)
                                              { if( para[w2]- 4000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(ayakkabi[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        ayakkabi[w2] = "Efsane ayakkabi";
                                                  
                                                 para[w2]-= 4000;
                                                  can[w2]+= 50; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }goto son; 
                          // sovalyeler   kýlýçlar
                          case 6:
                                printf(" Dandik kilic (100 TL & 2 Atak ) icin 1 e \n Saglam kilic (750 Tl & 6 Atak) icin 2 ye\n");
                                           printf(" Celik kilic  (1500 TL & 10 Atak) icin 3 e \n Altin kilic (2500 Tl & 15 Atak) icin 4 e\n");  
                                           printf(" Elmas kilic  ( 3500 TL & 30 Atak ) icin 5 e \n ana menuye donmek icin -1 e basin\n ");
                                         
                                         if( yeniceri[w2] == 0)
                                        { printf("\n Yenicerilige gecmediginizden bu esyalari alamazsiniz");
                                         goto son; }   
                                            scanf("%i",&urunno);
                                          if(urunno == -1)
                                           goto son; 
                                           
                                           // 1 seçilirse
                                            if( urunno == 1)
                                              { if( para[w2]- 100 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kilic[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        kilic[w2] = "Dandik kilic";
                                                  
                                                 para[w2]-= 100;
                                                 atak[w2] += 2; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                         // 2 seçilirse
                                            if( urunno == 2)
                                              { if( para[w2]- 750 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kilic[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        kilic[w2] = "Saglam kilic";
                                                  
                                                 para[w2]-= 750;
                                                 atak[w2] += 6; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                             // 3 seçilirse
                                            if( urunno == 3)
                                              { if( para[w2]- 1500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kilic[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        kilic[w2] = "Celik kilic";
                                                  
                                                 para[w2]-= 1500;
                                                 atak[w2] += 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                             // 4 seçilirse
                                            if( urunno == 4)
                                              { if( para[w2]- 2500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kilic[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        kilic[w2] = "Altin kilic";
                                                  
                                                 para[w2]-= 2500;
                                                 atak[w2] += 15; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                       // 5 seçilirse                                     
                                            if( urunno == 5)
                                              { if( para[w2]- 3500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kilic[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        kilic[w2] = "Elmas kilic";
                                                  
                                                 para[w2]-= 3500;
                                                 atak[w2] += 30; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }goto son; 
                                case 7:  //  kýlýç eklentisi
                                printf(" Cila (1000 TL & 3 Atak ) icin 1 e \n Diken (1750 Tl & 5 Atak) icin 2 ye\n");
                                           printf(" Bileme  (2750 TL & 7 Atak) icin 3 e \n Eldiven (4000 Tl & 10 Atak) icin 4 e\n");  
                                           printf(" Kese ( 10 000 TL & Kazanilan parayi ikiye katlar ) icin 5 e \n ana menuye donmek icin -1 e basin\n ");
                                         
                                         if( yeniceri[w2] == 0)
                                        { printf("\n Yenicerilige gecmediginizden bu esyalari alamazsiniz");
                                         goto son; }   
                                            scanf("%i",&urunno);
                                          if(urunno == -1)
                                          goto son;   
                                           
                                       // 1 seçilirse                                     
                                            if( urunno == 1)
                                              { if( para[w2]- 1000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                     if(kilic[w2] == "Bulunmuyor")
                                                  {printf("Kilic olmadan kilic eklentisi alamazsiniz. \n ");goto son;}
                                                        kilicek[w2]= "Cila";
                                                  
                                                 para[w2]-= 1000;
                                                 atak[w2] += 3; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                    // 2 seçilirse                                     
                                            if( urunno == 2)
                                              { if( para[w2]- 1750 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                     if(kilic[w2] == "Bulunmuyor")
                                                  {printf("Kilic olmadan kilic eklentisi alamazsiniz. \n ");goto son;}
                                                        kilicek[w2]= "Diken";
                                                  
                                                 para[w2]-= 1750;
                                                 atak[w2] += 5; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                                    // 3 seçilirse                                     
                                            if( urunno == 3)
                                              { if( para[w2]- 2750 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                     if(kilic[w2] == "Bulunmuyor")
                                                  {printf("Kilic olmadan kilic eklentisi alamazsiniz. \n ");goto son;}
                                                        kilicek[w2]= "Bileme";
                                                  
                                                 para[w2]-= 2750;
                                                 atak[w2] += 7; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                 
                                                    }
                                                    // 4 seçilirse                                     
                                            if( urunno == 4)
                                              { if( para[w2]- 4000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                     if(kilic[w2] == "Bulunmuyor")
                                                  {printf("Kilic olmadan kilic eklentisi alamazsiniz. \n ");goto son;}
                                                        kilicek[w2]= "Eldiven";
                                                  
                                                 para[w2]-= 4000;
                                                 atak[w2] += 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                
                                                    }
                                                    // 5 seçilirse                                     
                                            if( urunno == 5 )
                                              { if( para[w2]- 10000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                     if(kilic[w2] == "Bulunmuyor")
                                                  {printf("Kilic olmadan kilic eklentisi alamazsiniz. \n ");goto son;}
                                                        kilicek[w2]= "Kese";
                                                              bonus[w2] = 1;
                                                 para[w2]-= 10000;
                                                 
                                                      
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }goto son; 
                                        case 8 :   // kalkan    
                                          printf(" Dandik kalkan (500 TL & 10 Can ) icin 1 e \n Saglam kalkan (1500 Tl & 15 Can) icin 2 ye\n");
                                           printf(" Mavi kalkan (2500 TL & 25 Can) icin 3 e \n Altin kalkan (3500 Tl & 35 Can) icin 4 e\n");  
                                           printf(" Yeniceri kalkani  ( 5000 TL & 50 Can ) icin 5 e \n ana menuye donmek icin -1 e basin\n ");
                                         
                                         if( yeniceri[w2] == 0)
                                        { printf("\n Yenicerilige gecmediginizden bu esyalari alamazsiniz");
                                        goto son; }   
                                            scanf("%i",&urunno);
                                          if(urunno == -1)
                                          goto son; 
                                                  
                                              if( urunno == 1)
                                              { if( para[w2]- 500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kalkan[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        kalkan[w2] = "Dandik kalkan";
                                                  
                                                 para[w2]-= 500;
                                                  can[w2]+= 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }
                                                      if( urunno == 2)
                                              { if( para[w2]- 1500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kalkan[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        kalkan[w2] = "Saglam kalkan";
                                                  
                                                 para[w2]-= 1500;
                                                  can[w2]+= 15; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                            if( urunno == 3)
                                              { if( para[w2]- 2500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kalkan[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        kalkan[w2] = "Mavi kalkan";
                                                  
                                                 para[w2]-= 2500;
                                                  can[w2]+= 25; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                    
                                                            if( urunno == 4)
                                              { if( para[w2]- 3500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kalkan[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        kalkan[w2] = "Altin kalkan";
                                                  
                                                 para[w2]-= 3500;
                                                  can[w2]+= 35; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                                                  if( urunno == 5)
                                              { if( para[w2]- 5000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(kalkan[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        kalkan[w2] = "Yeniceri kalkani";
                                                  
                                                 para[w2]-= 5000;
                                                  can[w2]+= 50; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;  
                                                  }         goto son;                                      
                                       case 9 : 
                                        // Migfer   
                                          printf(" Dandik migfer (500 TL & 10 Can ) icin 1 e \n Mavi migfer (1500 Tl & 15 Can) icin 2 ye\n");
                                           printf(" Saglam migfer (2500 TL & 25 Can) icin 3 e \n Celik migfer (3500 Tl & 35 Can) icin 4 e\n");  
                                           printf(" Yeniceri migferi  ( 5000 TL & 50 Can ) icin 5 e \n ana menuye donmek icin -1 e basin\n ");
                                         
                                         if( yeniceri[w2] == 0)
                                        { printf("\n Yenicerilige gecmediginizden bu esyalari alamazsiniz");
                                         goto son; }   
                                            scanf("%i",&urunno);
                                          if(urunno == -1)
                                           goto son; 
                                                  
                                              if( urunno == 1)
                                              { if( para[w2]- 500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(migfer[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        migfer[w2] = "Dandik migfer";
                                                  
                                                 para[w2]-= 500;
                                                  can[w2]+= 10; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }
                                                      if( urunno == 2)
                                              { if( para[w2]- 1500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(migfer[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        migfer[w2] = "Mavi migfer";
                                                  
                                                 para[w2]-= 1500;
                                                  can[w2]+= 15; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                            if( urunno == 3)
                                              { if( para[w2]- 2500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(migfer[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                       goto son; }
                                                        migfer[w2] = "Saglam migfer";
                                                  
                                                 para[w2]-= 2500;
                                                  can[w2]+= 25; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;                                                  
                                                    }
                                                    
                                                            if( urunno == 4)
                                              { if( para[w2]- 3500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(migfer[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        migfer[w2] = "Celik migfer";
                                                  
                                                 para[w2]-= 3500;
                                                  can[w2]+= 35; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                 goto son;                                                  
                                                    }
                                                                 if( urunno == 5)
                                              { if( para[w2]- 5000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(migfer[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        migfer[w2] = "Yeniceri migferi";
                                                  
                                                 para[w2]-= 5000;
                                                  can[w2]+= 50; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                  goto son;  
                                                  }goto son; 
                               case 10 : 
                                        // Zýrh  
                                          printf(" Dandik zirh (1000 TL & 15 Can ) icin 1 e \n Saglam zirh (2500 Tl & 25 Can) icin 2 ye\n");
                                           printf(" Korumali zirh (4000 TL & 40 Can) icin 3 e \n Yeniceri zirhi (6000 Tl & 60 Can) icin 4 e\n");  
                                           printf(" Efsane zirh  ( 8500 TL & 95 Can ) icin 5 e \n ana menuye donmek icin -1 e basin\n ");
                                         
                                         if( yeniceri[w2] == 0)
                                        { printf("\n Yenicerilige gecmediginizden bu esyalari alamazsiniz");
                                         goto son; }   
                                            scanf("%i",&urunno);
                                          if(urunno == -1)
                                           goto son; 
                                                  
                                              if( urunno == 1)
                                              { if( para[w2]- 1000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(zirh[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        zirh[w2] = "Dandik zirh";
                                                  
                                                 para[w2]-= 1000;
                                                  can[w2]+= 15; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }// 2
                                                           if( urunno == 2)
                                              { if( para[w2]- 2500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(zirh[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        zirh[w2] = "Saglam zirh";
                                                  
                                                 para[w2]-= 2500;
                                                  can[w2]+= 25; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }
                                                    // 3
                                                           if( urunno == 3)
                                              { if( para[w2]- 4000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(zirh[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        zirh[w2] = "Korumali zirh";
                                                  
                                                 para[w2]-= 4000;
                                                  can[w2]+= 40; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }
                                                    //    4
                                                           if( urunno == 4)
                                              { if( para[w2]- 6000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(zirh[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        zirh[w2] = "Yeniceri zirhi";
                                                  
                                                 para[w2]-= 6000;
                                                  can[w2]+= 60; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }//  5
                                                           if( urunno == 5)
                                              { if( para[w2]- 8500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(zirh[w2] != "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        zirh[w2] = "Efsane zirh";
                                                  
                                                 para[w2]-= 8500;
                                                  can[w2]+= 95; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;   
                                                }       goto son; 
                                                 case 11 :     // Binek          
                                                      printf(" At(10500 TL & 50 Can & 15 Atak ) icin 1 e \n Savas atiSavas devesi(15500 Tl & 75 Can & 25 Atak) icin 2 ye\n");
                                           printf(" Savas devesi (21000 TL & 120 Can & 40 Atak) icin 3 e \n Cift horguclu deve(24000 Tl & 185 Can & 65 Atak ) icin 4 e\n");  
                                           printf(" ana menuye donmek icin -1 e basin\n ");
                                         
                                         if( yeniceri[w2] == 0)
                                        { printf("\n Yenicerilige gecmediginizden bu esyalari alamazsiniz");
                                         goto son; }   
                                            scanf("%i",&urunno);
                                          if(urunno == -1)
                                           goto son; 
                                           
                                                                                     
                                   
                                              if( urunno == 1)
                                              { if( para[w2]- 10500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(binek[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        binek[w2]= "At";
                                                  
                                                 para[w2]-= 10500;
                                                  can[w2]+= 50;
                                                 atak[w2] += 15; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }
                                                    // 2
                                                    if( urunno == 2)
                                              { if( para[w2]- 15500 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(binek[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        binek[w2]= "Savas ati";
                                                  
                                                 para[w2]-= 15500;
                                                  can[w2]+= 75;
                                                 atak[w2] += 25; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    } 
                                         // 3
                                                        if( urunno == 3)
                                              { if( para[w2]- 21000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(binek[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        binek[w2]= "Savas devesi";
                                                  
                                                 para[w2]-= 21000;
                                                  can[w2]+= 120;
                                                 atak[w2] += 40; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    }// 4
                                                           if( urunno == 4)
                                              { if( para[w2]- 24000 < 100)
                                                    {printf("uzgunuz paraniz yetmedi \n");goto son; }
                                                  if(binek[w2]!= "Bulunmuyor")
                                                        {printf("Ayni cesit urunden iki tane olamaz.   ");
                                                        goto son; }
                                                        binek[w2]= "Cift horguclu deve";
                                                  
                                                 para[w2]-= 24000;
                                                  can[w2]+= 185;
                                                 atak[w2] += 65; 
                                                  printf("Tebrikler Isleminiz basariyla gerceklesti\n ");
                                                goto son;                                                  
                                                    } 
                                       
                                                  default : printf("Gecersiz secim yaptiniz   ");
                                                              goto son;             
                                                                                        
                                                     } //switch bitiþi                                     
        }                                                      
           
           else // satýþ
           {
                  printf("\n\n");
              
              for(a = 0,b = 0; a <= 11; a++ )
                { if( a == 2 || a == 7)
                 continue;
                 printf(" %s icin %i'e   \n",kontrol[a],b++);}
                 
              
              printf("\nSatmak istediginiz urunun yanindaki sayiyi giriniz :\n(Menuye donmek icin -1)\n\n");
              scanf("%d",&uruncesit);
             if(uruncesit == -1)
             goto son; 
             
              system("CLS");
            
              switch(uruncesit)  // 0"ok",1"yay",2"sapka",3"mont",4"ayakkabi",5"kilic",6"kalkan",7"kask",8"zirh",9"ejderha"
              {        case 0 :  
                                                    if(ok[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                                      if(  ok[w2] == "Dandik ok")
                                                { para[w2] += 100/2;
                                                atak[w2] -= 1;
                                                ok[w2] = "Bulunmuyor";
                                                printf("Dandik okunuzu yari fiyatina sattiniz.");goto son;}
                                                    if(  ok[w2] == "Saglam ok")
                                                { para[w2] += 250/2;
                                                atak[w2] -= 3;
                                                ok[w2] = "Bulunmuyor";
                                                printf("Saglam okunuzu yari fiyatina sattiniz.");goto son;}
                                                       if(  ok[w2] == "Celik ok")
                                                { para[w2] += 500/2;
                                                atak[w2] -= 5;
                                                ok[w2] = "Bulunmuyor";
                                                printf("Celik okunuzu yari fiyatina sattiniz.");goto son;}
                                                 if(  ok[w2] == "Mavi ok")
                                                { para[w2] += 1000/2;
                                                atak[w2] -= 7;
                                                ok[w2] = "Bulunmuyor";
                                                printf("Mavi okunuzu yari fiyatina sattiniz.");goto son;}
                                                 if(  ok[w2] == "Kirmizi ok")
                                                { para[w2] += 2000/2;
                                                atak[w2] -= 10;
                                                ok[w2] = "Bulunmuyor";
                                                printf("Kirmizi okunuzu yari fiyatina sattiniz.");goto son;}
                                                 if(  ok[w2] == "Elmas ok")
                                                { para[w2] += 3000/2;
                                                atak[w2] -= 12;
                                                ok[w2] = "Bulunmuyor";
                                                printf("Elmas okunuzu yari fiyatina sattiniz.");goto son;}goto son; 
              case 1:
                                                           if(yay[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                                      if(  yay[w2] == "Dandik yay")
                                                { para[w2] += 100/2;
                                                atak[w2] -= 1;
                                                yay[w2] = "Bulunmuyor";
                                                printf("Dandik yayinizi yari fiyatina sattiniz.");goto son;}
                                               if(  yay[w2] == "Saglam yay")
                                                { para[w2] += 500/2;
                                                atak[w2] -= 3;
                                                yay[w2] = "Bulunmuyor";
                                                printf("Saglam yayinizi yari fiyatina sattiniz.");goto son;}
                                            if(  yay[w2] == "Sari-Kirmizi yay")
                                                { para[w2] += 1000/2;
                                                atak[w2] -= 5;
                                                yay[w2] = "Bulunmuyor";
                                                printf("Sari-Kirmizi yayinizi yari fiyatina sattiniz.");goto son;}
                                             if(  yay[w2] == "Tas yay")
                                                { para[w2] += 2000/2;
                                                atak[w2] -= 7;
                                                yay[w2] = "Bulunmuyor";
                                                printf("Tas yayinizi yari fiyatina sattiniz.");goto son;}
                                                 if(  yay[w2] == "Altin yay")
                                                { para[w2] += 3000/2;
                                                atak[w2] -= 10;
                                                yay[w2] = "Bulunmuyor";
                                                printf("Altin yayinizi yari fiyatina sattiniz.");goto son;}
                                                     if(  yay[w2] == "Efsane yay")
                                                { para[w2] += 4000/2;
                                                atak[w2] -= 12;
                                                yay[w2] = "Bulunmuyor";
                                                printf("Efsane yayinizi yari fiyatina sattiniz.");goto son;}goto son; 
                      case 2:
                                              if(sapka[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                                      if(  sapka[w2] == "Dandik sapka")
                                                { para[w2] += 200/2;
                                                can[w2] -= 5;
                                                sapka[w2] = "Bulunmuyor";
                                                printf("Dandik sapkanizi yari fiyatina sattiniz.");goto son;}
                                                    if(  sapka[w2] == "Saglam sapka")
                                                { para[w2] += 500/2;
                                                can[w2] -= 10;
                                                sapka[w2] = "Bulunmuyor";
                                                printf("Saglam sapkanizi yari fiyatina sattiniz.");goto son;}
                                                    if(  sapka[w2] == "Avci sapkasi")
                                                { para[w2] += 1500/2;
                                                can[w2] -= 20;
                                                sapka[w2] = "Bulunmuyor";
                                                printf("Avci sapkasini yari fiyatina sattiniz.");goto son;}
                                                   if(  sapka[w2] == "Usta sapkasi")
                                                { para[w2] += 2500/2;
                                                can[w2] -= 30;
                                                sapka[w2] = "Bulunmuyor";
                                                printf("Usta sapkasini yari fiyatina sattiniz.");goto son;}
                                                   if(  sapka[w2] == "Efsane sapka")
                                                { para[w2] += 4000/2;
                                                can[w2] -= 50;
                                                sapka[w2] = "Bulunmuyor";
                                                printf("Efsane sapkanizi yari fiyatina sattiniz.");goto son;}goto son; 
                        case 3:
                                                    if(mont[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                                      if(  mont[w2] == "Dandik mont")
                                                { para[w2] += 500/2;
                                                can[w2] -= 10;
                                                mont[w2] = "Bulunmuyor";
                                                printf("Dandik montunuzu yari fiyatina sattiniz.");goto son;}
                                                    if(  mont[w2] == "Saglam mont")
                                                { para[w2] += 1500/2;
                                                can[w2] -= 20;
                                                mont[w2] = "Bulunmuyor";
                                                printf("Saglam montunuzu yari fiyatina sattiniz.");goto son;}
                                                     if(  mont[w2] == "Mavi mont")
                                                { para[w2] += 2500/2;
                                                can[w2] -= 30;
                                                mont[w2] = "Bulunmuyor";
                                                printf("Mavi montunuzu yari fiyatina sattiniz.");goto son;}
                                                        if(  mont[w2] == "Yesil mont")
                                                { para[w2] += 4000/2;
                                                can[w2] -= 45;
                                                mont[w2] = "Bulunmuyor";
                                                printf("Yesil montunuzu yari fiyatina sattiniz.");goto son;}
                                                            if(  mont[w2] == "Efsane mont")
                                                { para[w2] += 6500/2;
                                                can[w2] -= 60;
                                                mont[w2] = "Bulunmuyor";
                                                printf("Efsane montunuzu yari fiyatina sattiniz.");goto son;}    goto son; 
                                        case 4:          
                                                              if( ayakkabi[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                                      if( ayakkabi[w2] == "Dandik ayakkabi")
                                                { para[w2] += 100/2;
                                                can[w2] -= 5;
                                                ayakkabi[w2] = "Bulunmuyor";
                                                printf("Dandik ayakkabinizi yari fiyatina sattiniz.");goto son;} 
                                                        if( ayakkabi[w2] == "Kurk ayakkabi")
                                                { para[w2] += 500/2;
                                                can[w2] -= 10;
                                                ayakkabi[w2] = "Bulunmuyor";
                                                printf("Kurk ayakkabinizi yari fiyatina sattiniz.");goto son;}                                                                      
                                                          if( ayakkabi[w2] == "Deri ayakkabi")
                                                { para[w2] += 1500/2;
                                                can[w2] -= 20;
                                                ayakkabi[w2] = "Bulunmuyor";
                                                printf("Deri ayakkabinizi yari fiyatina sattiniz.");goto son;} 
                                                            if( ayakkabi[w2] == "Ates ayakkabisi")
                                                { para[w2] += 2500/2;
                                                can[w2] -= 30;
                                                ayakkabi[w2] = "Bulunmuyor";
                                                printf("Ates ayakkabisini yari fiyatina sattiniz.");goto son;} 
                                                            if( ayakkabi[w2] == "Efsane ayakkabi")
                                                { para[w2] += 4000/2;
                                                can[w2] -= 50;
                                                ayakkabi[w2] = "Bulunmuyor";
                                                printf("Efsane ayakkabinizi yari fiyatina sattiniz.");goto son;} goto son; 
                                        case 5:
                                                            if( kilic[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                                      if( kilic[w2] == "Dandik kilic")
                                                { para[w2] += 100/2;
                                                atak[w2] -= 2;
                                                kilic[w2] = "Bulunmuyor";
                                                printf("Dandik kilicinizi yari fiyatina sattiniz.");goto son;} 
                                                         if( kilic[w2] == "Saglam kilic")
                                                { para[w2] += 750/2;
                                                atak[w2] -= 6;
                                                kilic[w2] = "Bulunmuyor";
                                                printf("Saglam kilicinizi yari fiyatina sattiniz.");goto son;} 
                                                         if( kilic[w2] == "Celik kilic")
                                                { para[w2] += 1500/2;
                                                atak[w2] -= 10;
                                                kilic[w2] = "Bulunmuyor";
                                                printf("Celik kilicinizi yari fiyatina sattiniz.");goto son;}
                                                        if( kilic[w2] == "Altin kilic")
                                                { para[w2] += 2500/2;
                                                atak[w2] -= 15;
                                                kilic[w2] = "Bulunmuyor";
                                                printf("Altin kilicinizi yari fiyatina sattiniz.");goto son;}
                                                         if( kilic[w2] == "Elmas kilic")
                                                { para[w2] += 3500/2;
                                                atak[w2] -= 30;
                                                kilic[w2] = "Bulunmuyor";
                                                printf(" Elmas kilici  yari fiyatina sattiniz.");goto son;}goto son; 
                           case 6:
                                              if( kalkan[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                                      if( kalkan[w2] == "Dandik kalkan")
                                                { para[w2] += 500/2;
                                                can[w2] -= 10;
                                                kalkan[w2] = "Bulunmuyor";
                                                printf("Dandik kalkaninizi yari fiyatina sattiniz.");goto son;}
                                                       if( kalkan[w2] == "Saglam kalkan")
                                                { para[w2] += 1500/2;
                                                can[w2] -= 15;
                                                kalkan[w2] = "Bulunmuyor";
                                                printf("Saglam kalkaninizi yari fiyatina sattiniz.");goto son;}
                                                      if( kalkan[w2] == "Mavi kalkan")
                                                { para[w2] += 2500/2;
                                                can[w2] -= 25;
                                                kalkan[w2] = "Bulunmuyor";
                                                printf("Mavi kalkaninizi yari fiyatina sattiniz.");goto son;}
                                                      if( kalkan[w2] == "Altin kalkan")
                                                { para[w2] += 3500/2;
                                                can[w2] -= 35;
                                                kalkan[w2] = "Bulunmuyor";
                                                printf("Altin kalkaninizi yari fiyatina sattiniz.");goto son;}       
                                                       if( kalkan[w2] == "Yeniceri kalkani")
                                                { para[w2] += 5000/2;
                                                can[w2] -= 50;
                                                kalkan[w2] = "Bulunmuyor";
                                                printf("Yeniceri kalkaninizi yari fiyatina sattiniz.");goto son;}  goto son; 
                          case 7:   
                                                             if( migfer[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                                      if( migfer[w2] == "Dandik migfer")
                                                { para[w2] += 500/2;
                                                can[w2] -= 10;
                                                migfer[w2] = "Bulunmuyor";
                                                printf("Dandik migferinizi yari fiyatina sattiniz.");goto son;}
                                                     if( migfer[w2] == "Mavi migfer")
                                                { para[w2] += 1500/2;
                                                can[w2] -= 15;
                                                migfer[w2] = "Bulunmuyor";
                                                printf("Mavi migferinizi yari fiyatina sattiniz.");goto son;}
                                                   if( migfer[w2] == "Saglam migfer")
                                                { para[w2] += 2500/2;
                                                can[w2] -= 25;
                                                migfer[w2] = "Bulunmuyor";
                                                printf("Saglam migferinizi yari fiyatina sattiniz.");goto son;}
                                                    if( migfer[w2] == "Celik migfer")
                                                { para[w2] += 3500/2;
                                                can[w2] -= 35;
                                                migfer[w2] = "Bulunmuyor";
                                                printf("Celik migferinizi yari fiyatina sattiniz.");goto son;}
                                                     if( migfer[w2] == "Yeniceri migferi")
                                                { para[w2] += 5000/2;
                                                can[w2] -= 50;
                                                migfer[w2] = "Bulunmuyor";
                                                printf("Yeniceri migferini yari fiyatina sattiniz.");goto son;}goto son; 
                                                
                        case 8:
                                                            if( zirh[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                                      if( zirh[w2] == "Dandik zirh")
                                                { para[w2] += 1000/2;
                                                can[w2] -= 15;
                                                zirh[w2] = "Bulunmuyor";
                                                printf("Dandik zirhinizi yari fiyatina sattiniz.");goto son;}
                                                        if( zirh[w2] == "Saglam zirh")
                                                { para[w2] += 2500/2;
                                                can[w2] -= 25;
                                                zirh[w2] = "Bulunmuyor";
                                                printf("Saglam zirhinizi yari fiyatina sattiniz.");goto son;}
                                                         if( zirh[w2] == "Korumali zirh")
                                                { para[w2] += 4000/2;
                                                can[w2] -= 40;
                                                zirh[w2] = "Bulunmuyor";
                                                printf("Korumali zirhinizi yari fiyatina sattiniz.");goto son;}
                                                         if( zirh[w2] == "Yeniceri zirhi")
                                                { para[w2] += 6000/2;
                                                can[w2] -= 60;
                                                zirh[w2] = "Bulunmuyor";
                                                printf("Yeniceri zirhini yari fiyatina sattiniz.");goto son;}
                                                       if( zirh[w2] == "Efsane zirh")
                                                { para[w2] += 8500/2;
                                                can[w2] -= 95;
                                                zirh[w2] = "Bulunmuyor";
                                                printf("Efsane zirhi  yari fiyatina sattiniz.");goto son;}goto son; 
                                                
                        case 9:  
                                              if( binek[w2] == "Bulunmuyor")
                                                        {printf("Sizde olmayan bir urunu satamazsiniz.   ");
                                                      goto son; }
                                           if( binek[w2] == "At")
                                             {    para[w2] += 10500/2;
                                                  can[w2]-= 50;
                                                 atak[w2] -= 15; 
                                                  binek[w2] = "Bulunmuyor";
                                                printf("Atinizi yari fiyatina sattiniz.");goto son;}
                                           if( binek[w2] == "Savas ati")
                                             {    para[w2] += 15500/2;
                                                  can[w2]-= 75;
                                                 atak[w2] -= 25; 
                                                  binek[w2] = "Bulunmuyor";
                                                printf("Savas atini yari fiyatina sattiniz.");goto son;}
                                                
                                                 if( binek[w2] == "Savas devesi")
                                             {    para[w2] += 21000/2;
                                                  can[w2]-= 120;
                                                 atak[w2] -= 40; 
                                                  binek[w2] = "Bulunmuyor";
                                                printf("savas devenizi yari fiyatina sattiniz.");goto son;}
                                                  if( binek[w2] == "Cift horguclu deve")
                                             {    para[w2] += 24000/2;
                                                  can[w2]-= 185;
                                                 atak[w2] -= 65; 
                                                  binek[w2] = "Bulunmuyor";
                                                printf(" Cift horguclu deve ' yi yari fiyatina sattiniz. ");goto son;}goto son; 
                                                   
                            default : printf("Gecersiz secim    ");goto son;
                  }                    
                       
              
              
              }
    
     son:
    printf("\n ana menuye gidiyorsunuz bir tusa basin ...\n"); getch(); 
}


void savas(int can1,int can2,int w1,int w2)
{
     int kazanan,kaybeden;
     
     
     while(1)
     { system("CLS");
     printf("Saldiran \t\t\t\t Savunan\n");
     printf("Can : %i Atak : %i \t\t\t Can : %i Atak : %i \n\n\n",can1,atak[w1],can2,atak[w2]);  
     printf("Saldiran oyuncu yazi-tura atmak icin bir tusa bas : \n(Yazi : Vurur Tura : Iskalar)\n");
     getch();
     if(yazitura())
     can2 -= atak[w1];
     if(can2 <= 0 )
     {kazanan = w1;kaybeden = w2;break;}
     printf("Savunan oyuncu yazi-tura atmak icin bir tusa bas : \n(Yazi : Vurur Tura : Iskalar)\n");
     getch();
     if(yazitura())
     can1 -= atak[w2];
     if(can1 <= 0 )
     {kazanan = w2;kaybeden = w1;break;}
     printf("Bir tusa basin.");
     getch();
     }
     system("CLS");
     printf("Saldiran \t\t\t\t Savunan\n");
     printf("Can : %i Atak : %i \t\t\t Can : %i Atak : %i \n\n\n",can1,atak[w1],can2,atak[w2]);
   printf(" %s oyuncu yendi ve %i Tl kazandi.\n %s oyuncu yenildi ve %i TL kaybetti. ",kazanan == w1 ? "Saldiran" : "Savunan",bonus[kazanan] == 1 ? 2*para[kaybeden] : para[kaybeden],kaybeden == w2 ? "Savunan" : "Saldiran",para[kaybeden] > 100 ? para[kaybeden]/5 : 0);  
       para[kazanan] += (bonus[kazanan] == 1 ? 2 * para[kaybeden] : para[kaybeden]);
       
       if(para[kaybeden]>100)
          para[kaybeden] -= para[kaybeden]/5;
          printf("\n Ana menuye donmek icin bir tusa basin \n");
          getch();
          
}

int yazitura(void)
{
    int a;
    
    a = rand()%4;
    if(a <=1)
    a = 1;
  else
  a = 0;  
    if(a)
    printf(" \nYazi geldi. Vurdunuz. \n\n ");
    else
    printf(" \nTura geldi. Iskaladiniz. \n\n ");
    
    return a;
}
void nasiloynanir(void)
{
     system("CLS");
     printf("\n En fazla 6 kisiyle oynanir.\nHer oyuncu ilk basta 50 Can 10 Atak ve 1000 Tl ile baslar.\nMarketten alinan esyalarla atak ve can guclendirilebilir.");
     printf("Eklentiler haricinde \n ayni turden birden fazla esya alinamaz.Eklentilerde birden fazla alinabilir,\nprofilinde sadece son aldigi eklenti gozukur ama diger eklentiler hala calisir. Markete aldiginiz esyalari yari fiyatina satabilirsiniz.Eklentiler ise satilamaz\n");
     printf("Bazi esyalari almak icin yenicerilige gecmis olmaniz gerekir.Yenicerilige (esya alir gibi) marketten gecebilirsiniz.\n\n");
     printf("Savas sirasinda yazi gelirse vurur,tura gelirse iskalar.Eger vurursa rakibin \n canini kendi ataginiz kadar dusurursunuz.Cani 0 olan veya 0'in altina ilk dusen oyuncu savasi kaybeder.");
     printf("Savasi kaybeden oyuncu parasinin 5'te birini de kaybederKazanan oyuncu rakibin parasi kadar kazanir.");
     printf("Savas bitiminde tum oyuncularin\n canlari tekrar savasa girmedenki durumuna doner.\n\nMenuye donmek icin bir tusa basin ");   
     getch();
     
     return;
     }
