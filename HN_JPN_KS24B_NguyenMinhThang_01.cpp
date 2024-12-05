#include <stdio.h>

int main(){
	int arr[1000];
	int choice;
	int size ;
	
	do{
		printf ("MENU\n"); 
		printf("1.Nhap so phan tu va gia tri cho mang\n");
		printf ("2.In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5 …)\n");
		printf ("3.dem so luong các so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no\n");
		printf ("4.Tim gia tri nho thu 2 trong mang, khong duoc sap xep mang\n") ;
		printf ("5.Them mot phan tu vao vi tri dau tien trong  mang, phan tu moi thêm vào mang phai do nguoi dung nhap vao\n");
		printf ("6.xoa phan tu tai mot vi tri cu the \n");
		printf ("7.sap xep mangg theo thu tu giam dan\n");
		printf ("8.Tim kiem phan tu trong mang, phan tu tim kiem do nguoi dung nhap vao.\n") ;
		printf ("9.Sap xepp lai mang và hien thi ra toàn bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau\n") ;
		printf ("10.Ðao nguoc thu tu cua cac phan tu co trong mang va hien thi ra toan bo phan tu co trong mang theo dang (arr[0] = 1 - le, arr[1] = 2 - chan …)\n"); 
		printf ("11.THOAT\n");
		printf ("lua chon cua ban la :");
		scanf ("%d",&choice); 
		
	 switch (choice) {
            case 1: { // Nhap so phan tu va gia tri 
                printf("Nhap so phan tu: ");
                scanf("%d", &size);
                if (size > 1000 || size <= 0) {
                    printf("So phan tu khong hop le.\n");
                    size = 0;
                } else {
                    printf("Nhap gia tri cac phan tu:\n");
                    for (int i = 0; i < size; i++) {
                        printf("Phan tu %d: ", i + 1);
                        scanf("%d", &arr[i]);
                    }
                }			
				break;
			}
		
               case 2:{
                if (size == 0) {
                    printf("Mang hien tai rong.\n");
                } else {
                    printf("Cac phan tu trong mang: ");
                    for (int i = 0; i < size; i++) { 
                        printf("arr[]=%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
			} 
			case 3:{
				
				break;
			} 
			case 4:{
				printf ("gia tri nho thu 2 trong mang la:");
				 
				break;
			}
			case 5:{
				if (size>=1000) {
					printf ("mang da day "); 
				}else{
					int value;
					printf ("nhap gia tri can them:  ");
					scanf ("%d",&value);
					arr[size++]=value;
					printf ("phan tu %d da them vao mang",value); 
				} 
				break;
			} 
		      case 6: {
                if (size == 0) {
                    printf("Mang hien tai rong.\n");
                } else {
                    int index;
                    printf("Nhap vi tri can xoa (0-%d): ", size - 1);
                    scanf("%d", &index);
                    if (index < 0 || index >= size) {
                        printf("Vi tri khong hop le.\n");
                    } else {
                        for (int i = index; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Da xoa phan tu tai vi tri %d.\n", index);
                    }
                case 7:{
                if (size == 0) {
                    printf("Mang hien tai rong.\n");
                } else {
                    for (int i = 0; i < size - 1; i++) {
                        for (int j = i -1; j > size; j++) {
                            if (arr[i] < arr[j]) {
                                int temp = arr[j];
                                arr[j] = arr[i];
                                arr[i] = temp;
                            }
                        }
                    }
                    printf("Mang da sap xep giam dan.\n");
                }
					break;
				} 
                break;
            } 
			case 11:{
				
				break;
			}		 
		}
	  }
    }while(choice != 11);
	return 0;	
}
