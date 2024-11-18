#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <locale.h>



int main(int argc, char *argv[]) 
{setlocale(LC_ALL,"turkish");
	char isim[25];  char soyisim[25];  char ders[50];
	float vize=0; float final=0.0; float ortalama=0.00;
	char *durum; char *harf; 
	FILE *dosya;
	dosya=fopen("bilgiler.txt","a+");     //w yazarsak kendisi olusturur ve varolan�n �zerine kendisi kaydeder. a yazarsak kendimiz olu�turmam�z gerekiyor. 
	
	printf("��rencinin adini giriniz      : "); gets(isim);
	printf("��rencinin soyadini giriniz   : "); gets(soyisim);
	printf("��rencinin dersini giriniz    : "); gets(ders);
	printf("��rencinin vize notu nedir    : "); scanf("%f",&vize);
    printf("��rencinin final notu nedir   : "); scanf("%f",&final);
    ortalama = vize*0.40 + final*0.60;
    if (ortalama <60) 
    {  durum = "KALDI"; }	else	{durum = "GECTI"; }	
    	printf("DURUM : %s\n",durum);
	
    
	if (ortalama>=0 && ortalama<=39)  { harf="FF";}
	if (ortalama>=40 && ortalama<=59) { harf="DC";}
	if (ortalama>=60 && ortalama<=69) { harf="CC";}
	if (ortalama>=70 && ortalama<=79) { harf="BC";}
	if (ortalama>=80 && ortalama<=89) { harf="BB";}
	if (ortalama>=90 && ortalama<=94) { harf="BA";}
	if (ortalama>=95 && ortalama<=100){ harf="AA";}
	
    fprintf(dosya,"%s isimli, %s, soyisimli, ��renci %s dersinden vize : %.2f,final : %.2f ile ortalama : %.2f alm�� olup,%s ve harf notu : %s\n",
	isim,soyisim,ders,vize,final,ortalama,durum,harf ); 
    fclose(dosya) ;
    printf("L�TFEN BEKLEY�N�Z. VER�LER Y�KLEN�YOR...\n");
    sleep(2);
    system("cls");
    system("color 10");
    printf("��rencinin ismi        : %s\n",isim);
    printf("��rencinin soyismi     : %s\n",soyisim);
    printf("��rencinin ders        : %s\n",ders);
    printf("��rencinin vize notu   : %.2f\n",vize);
    printf("��rencinin final notu  : %.2f\n",final);
    printf("��rencinin ortalamas�  : %.2f\n",ortalama);
    printf("��rencinin durumu      : %s\n",durum);
    printf("��rencinin harf notu   : %s\n",harf);
    printf("T�M VER�LER KAYDED�LD�.");

	getch();
	
	
	/*
	== e�it
	&& ve
	!= e�it de�il
	
	|| iki tane d�z �izgi veya
	0-39   : FF
	40-59  : DC
	60-69  : CC
	70-79  : BC
	80-89  : BB
	90-94  : BA
	95-100 : AA
	*/
}
