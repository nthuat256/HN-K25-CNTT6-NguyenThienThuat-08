#include <stdio.h>

int main (){
	int number1;
	int arr[100];
	int n=0,i,j;
	int choice;
	int comfirm=0;
	while(number1){
		printf("\n========================MENU========================\n");
		printf("1.nhap so luong phan tu va gia tri phan tu trong mang\n");
		printf("2.in cac gia tri trong mang\n");
		printf("3.tinh tong cua tat ca so nguyen to trong mang\n");
		printf("4.in ra cac phan tu co index la so le trong mang\n");
		printf("5.them moi mot phan tu vao cuoi mang\n");
		printf("6.xoa phan tu tai mot vi tri cu the\n");
		printf("7.sap xep mang theo thu tu giam dan\n");
		printf("8.kiem tra su ton tai cua phan tu trong mang\n");
		printf("9.in ra cac phan tu xuat hien dung 1 lan trong mang\n");
		printf("10.cap nhap tat ca so am trong mang thanh gia tri 0\n");
		printf("11.thoat\n");
		printf("\n===================================================\n");
		printf("nhap lua chon cua ban: \n");
		scanf("%d",&choice);
		switch(choice){
		  case 1:{
			printf("nhap so luong phan tu: ");
			scanf("%d",&n);
			if(n<=0||n>100){
				printf("so luong phan tu khong hop le!");
				break;
			}
			for(i=0;i<n;i++){
				printf("arr[%d]= ",i);
				scanf("%d",&arr[i]);
			}
			number1=0;
			break;
		   }
		   case 2:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!");
		   		break;
		   	}
		   	printf("cac gia tri co trong mang hien tai la");
		   	printf("arr[%d]=%d\n",i,arr[i]);
			break;
		   }
		   case 3:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!");
		   		break;
		   	}
		   	int sum=0;
		   	for(i=0;i<n;i++){
		   		sum+=i;
			   }
			printf("tong cac so nguyen to trong mang la:%d",sum);
			break;
		   }
		   case 4:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!");
		   		break;
		   	}
		   	if(n%2==0) {
			   }else {
			   	printf("arr[%d]=%d\n",i,arr[i]);
			   }
			break;
		   }
		   case 5:{
		   	if(n>=100){
		   		printf("vuot qua gioi han cho truoc");
		   		break;
		   	}
		   	int value;
		   	printf("gia tri can them: ");
		   	scanf("%d",&value);
		   	for(i=n;i<100;i--){
		   		arr[i]=arr[i-1];
			   }
			break;
		   }
		   case 6:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!");
		   		break;
		   	}
		   }
		   case 7:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!");
		   		break;
		   	}
		   	for(i=0;i<n-1;i--){
		   	    for(j=0;j<n-i-1;j--){
		   			if(arr[j]<arr[j-1]) {
		   			int temp = arr[j];
		   			arr[j] = arr[j-1];
		   			arr[j-1] = temp;
		   		      }
				   }
			   }
			   for(i=0;i<n;i++){
			   	printf("mang duoc sap sep theo thu tu giam dan: %d\n",i);
			   }
			   n++;
			break;
		   }
		   case 8:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!");
		   		break;
		   	}
			break;
		   }
		   case 9:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!");
		   		break;
		   	}
		   	n--;
			break;
		   }
		   case 10:{
		   	if(n==0){
		   		printf("can nhap so luong phan tu truoc!");
		   		break;
		   	}
		   	n++;
			break;
		   }
		   case 11:{
		   	printf("cam on \n");
			return 0;
		   }
		   default:{
		   	printf("lua chon khong hop le!!!");
			break;
		   }
		}
	}
}
