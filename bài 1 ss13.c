#include <stdio.h>
int main (){
	do{
	 printf ("**********MENU**********");
	 printf ("1.Nhap vao chuoi ki tu");
	 printf ("2.In ra do dai chuoi va noi dung chuoi vua nhap");
	 printf ("3.In ra chuoi dao nguoc");
	 printf ("4.In ra so luong chu cai trong chuoi");
	 printf ("5.In ra so luong chu so trong chuoi");
	 printf ("6.In ra so luong ky tu dac biet trong chuoi");
	 printf ("7.Thoat");
	 int choice;
	 printf ("Lua chon cua ban la: ");
	 scanf ("%d",&choice);
	 switch(choice){
		case 1:
			char str[];
			printf ("Nhap vao mot chuoi ki tu: ");
			scanf ("%s",&str);
			printf ("Chuoi ky tu ban da nhap vao la:%s",str);
			
		
	}
	
}while(1==0);
	
} 
