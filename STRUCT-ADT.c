#include <stdio.h>
#include <stdlib.h>


struct data_mahasiswa{
	char nama[100];
	float IPK;
};
typedef struct data_mahasiswa mahasiswa;

void main() {
	
	int i,k;
	char pilih;
	mahasiswa list[k];
	printf("\nJumlah data mahasiswa yang akan diinput = ");
	scanf(" %d",&k);
	printf("\n===============================================");
	
	//perulangan menginput data
	
		for(i=0;i<k;i++){
			printf("\nMahasiswa ke- %d\n\n",i+1);
			printf("\t- Nama Mahasiswa : ");
			scanf(" %[^\n]%*c",&list[i].nama);
			printf("\t- IPK Mahasiswa (0-4) : ");
			scanf("%f",&list[i].IPK);
		}
	printf("\nData telah diinput, Apakah anda ingin menampilkan Gelar IPK Mahasiswa ? [Y/N] = ");
	scanf(" %c",&pilih);
	if(pilih=='y'||pilih=='Y'){
		system("cls");
		printf("\n================= Gelar IPK Mahasiswa ================\n");
	printf("No. \tNama \t\t IPK\t\t Grade\n");
	
	//perulangan menampilkan data
	
	for(i=0;i<k;i++){
		printf("%d. \t%s \t\t%f\t",i+1,list[i].nama,list[i].IPK);
		if(list[i].IPK<=4.00&&list[i].IPK>3.79){
			printf("SUMMA CUM LAUDE\n");
		}else if(list[i].IPK<=3.79&&list[i].IPK>3.59){
			printf("MAGNA CUM LAUDE\n");
		}else if(list[i].IPK<=3.59&&list[i].IPK>3.39){
			printf("CUM LAUDE\n");
		}else if(list[i].IPK<=3.39&&list[i].IPK>2.99){
			printf("SANGAT MEMUASKAN\n");
		}else if(list[i].IPK<=2.99&&list[i].IPK>2.74){
			printf("MEMUASKAN\n");
		}else if(list[i].IPK<=2.74&&list[i].IPK>2.49){
			printf("CUKUP\n");
		}else if(list[i].IPK<=2.49&&list[i].IPK>=0){
			printf("Buruk\n");
		}else{
			printf("Invalid\n");
		}
	};
	printf("===================== Selamat!!! =====================\n");
	getch();
	
	}else{
		printf("\nTerima Kasih!");
	}
	
}
