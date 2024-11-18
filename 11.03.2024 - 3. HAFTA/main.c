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
	dosya=fopen("bilgiler.txt","a+");     //w yazarsak kendisi olusturur ve varolanýn üzerine kendisi kaydeder. a yazarsak kendimiz oluþturmamýz gerekiyor. 
	
	printf("Öðrencinin adini giriniz      : "); gets(isim);
	printf("Öðrencinin soyadini giriniz   : "); gets(soyisim);
	printf("Öðrencinin dersini giriniz    : "); gets(ders);
	printf("Öðrencinin vize notu nedir    : "); scanf("%f",&vize);
    printf("Öðrencinin final notu nedir   : "); scanf("%f",&final);
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
	
    fprintf(dosya,"%s isimli, %s, soyisimli, öðrenci %s dersinden vize : %.2f,final : %.2f ile ortalama : %.2f almýþ olup,%s ve harf notu : %s\n",
	isim,soyisim,ders,vize,final,ortalama,durum,harf ); 
    fclose(dosya) ;
    printf("LÜTFEN BEKLEYÝNÝZ. VERÝLER YÜKLENÝYOR...\n");
    sleep(2);
    system("cls");
    system("color 10");
    printf("Öðrencinin ismi        : %s\n",isim);
    printf("Öðrencinin soyismi     : %s\n",soyisim);
    printf("Öðrencinin ders        : %s\n",ders);
    printf("Öðrencinin vize notu   : %.2f\n",vize);
    printf("Öðrencinin final notu  : %.2f\n",final);
    printf("Öðrencinin ortalamasý  : %.2f\n",ortalama);
    printf("Öðrencinin durumu      : %s\n",durum);
    printf("Öðrencinin harf notu   : %s\n",harf);
    printf("TÜM VERÝLER KAYDEDÝLDÝ.");

	getch();
	
	
	/*
	== eþit
	&& ve
	!= eþit deðil
	
	|| iki tane düz çizgi veya
	0-39   : FF
	40-59  : DC
	60-69  : CC
	70-79  : BC
	80-89  : BB
	90-94  : BA
	95-100 : AA
	*/
}
